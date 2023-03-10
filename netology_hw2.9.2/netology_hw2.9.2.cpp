#include <iostream>

class Fraction
{
public:

	Fraction() { };
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	void input_num()
	{
		std::cin >> numerator_;
	}
	void input_denom()
	{
		bool x = 0;
		do
		{
			if (x) { 
				std::cout << "Знаменатель не может быть нулём. Введите другое число.\n"; 
			}
			std::cin >> denominator_;
			denominator_ <= 0 ? x = 1 : x = 0;
		} while (x == 1);
	}

	int get_num()
	{
		return numerator_;
	}

	int get_denom()
	{
		return denominator_;
	}

	Fraction operator+(const Fraction& other)
	{
		Fraction temp;
		int x = common_denominator(denominator_, other.denominator_);
		temp.numerator_ = (numerator_ * x / denominator_ + other.numerator_ * x / other.denominator_);
		temp.denominator_ = x;
		common_division(temp);
		return temp;
	}

	Fraction operator-(const Fraction& other)
	{
		Fraction temp;
		int x = common_denominator(denominator_, other.denominator_);
		temp.numerator_ = (numerator_ * x / denominator_ - other.numerator_ * x / other.denominator_);
		temp.denominator_ = x;
		common_division(temp);
		return temp;
	}

	Fraction operator*(const Fraction& other)
	{
		Fraction temp;
		temp.numerator_ = numerator_ * other.numerator_;
		temp.denominator_ = denominator_ * other.denominator_;
		common_division(temp);
		return temp;
	}

	Fraction operator/(const Fraction& other)
	{
		Fraction temp;
		temp.numerator_ = numerator_ * other.denominator_;
		temp.denominator_ = denominator_ * other.numerator_;
		common_division(temp);
		return temp;
	}

	Fraction operator-()
	{
		return Fraction(-numerator_, denominator_);
	}

	Fraction& operator++()
	{
		numerator_ += denominator_;
		common_division(*this);
		return *this;
	}

	Fraction operator++(int)
	{
		Fraction temp = *this;
		numerator_ += denominator_;
		common_division(*this);
		return temp;
	}

	Fraction& operator--()
	{
		numerator_ -= denominator_;
		common_division(*this);
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction temp = *this;
		numerator_ -= denominator_;
		common_division(*this);
		return temp;
	}

private:
	int numerator_;
	int denominator_;

	int common_denominator(int denominator_1, int denominator_2) // Общий знаменатель
	{
		if (denominator_1 == denominator_2) {
			return denominator_1;
		}

		int x = 1;
		for (int i = 2; i <= (denominator_1 > denominator_2 ? denominator_1 : denominator_2); ++i)
		{
			if (denominator_1 % i == 0 && denominator_2 % i == 0)
			{
				denominator_1 /= i;
				denominator_2 /= i;
				x *= i;
				--i;
			}
		}
		return denominator_1 * denominator_2 * x;
	}
	void common_division(Fraction& f_ex) //Общий делитель и сокращение дроби
	{
		int x = 1;
		int numerator = f_ex.numerator_;
		int denominator = f_ex.denominator_;
		if (numerator < 0) { numerator = -numerator; }
		for (int i = 2; i <= (numerator < denominator ? denominator : numerator); ++i)
		{
			if (numerator % i == 0 && denominator % i == 0)
			{
				numerator /= i;
				denominator /= i;
				x *= i;
				--i;
			}
		}
		f_ex.numerator_ /= x;
		f_ex.denominator_ /= x;
	}
};

int main()
{
	setlocale(LC_ALL, "RU");

	Fraction f1;
	Fraction f2;
	Fraction f3;

	std::cout << "Введите числитель дроби 1: ";
	f1.input_num();
	std::cout << "Введите знаменатель дроби 1: ";
	f1.input_denom();
	std::cout << "Введите числитель дроби 2: ";
	f2.input_num();
	std::cout << "Введите знаменатель дроби 2: ";
	f2.input_denom();

	std::cout << f1.get_num() << "/" << f1.get_denom() << " + "
		<< f2.get_num() << "/" << f2.get_denom() << " = "
		<< (f1 + f2).get_num() << "/" << (f1 + f2).get_denom() << std::endl;

	std::cout << f1.get_num() << "/" << f1.get_denom() << " - "
		<< f2.get_num() << "/" << f2.get_denom() << " = "
		<< (f1 - f2).get_num() << "/" << (f1 - f2).get_denom() << std::endl;

	std::cout << f1.get_num() << "/" << f1.get_denom() << " * "
		<< f2.get_num() << "/" << f2.get_denom() << " = "
		<< (f1 * f2).get_num() << "/" << (f1 * f2).get_denom() << std::endl;

	std::cout << f1.get_num() << "/" << f1.get_denom() << " / "
		<< f2.get_num() << "/" << f2.get_denom() << " = "
		<< (f1 / f2).get_num() << "/" << (f1 / f2).get_denom() << std::endl;

	std::cout << "++" << f1.get_num() << "/" << f1.get_denom() << " * "
		<< f2.get_num() << "/" << f2.get_denom() << " = ";
	f3 = ++f1 * f2;
	std::cout << f3.get_num() << "/" << f3.get_denom() << std::endl;
	std::cout << "Значение дроби 1 = " << f1.get_num() << "/" << f1.get_denom() << std::endl;


	std::cout << "-" << f1.get_num() << "/" << f1.get_denom() << " = "
		<< (-f1).get_num() << "/" << (-f1).get_denom() << std::endl;

	std::cout << f1.get_num() << "/" << f1.get_denom() << "-- * "
		<< f2.get_num() << "/" << f2.get_denom() << " = ";
	f3 = f1-- * f2;
	std::cout << f3.get_num() << "/" << f3.get_denom() << std::endl;
	std::cout << "Значение дроби 1 = " << f1.get_num() << "/" << f1.get_denom() << std::endl;

	std::cout << "--" << f1.get_num() << "/" << f1.get_denom() << " * "
		<< f2.get_num() << "/" << f2.get_denom() << " = ";
	f3 = --f1 * f2;
	std::cout << f3.get_num() << "/" << f3.get_denom() << std::endl;
	std::cout << "Значение дроби 1 = " << f1.get_num() << "/" << f1.get_denom() << std::endl;

	std::cout << f1.get_num() << "/" << f1.get_denom() << "++ * "
		<< f2.get_num() << "/" << f2.get_denom() << " = ";
	f3 = f1++ * f2;
	std::cout << f3.get_num() << "/" << f3.get_denom() << std::endl;
	std::cout << "Значение дроби 1 = " << f1.get_num() << "/" << f1.get_denom() << std::endl;


	return 0;
}