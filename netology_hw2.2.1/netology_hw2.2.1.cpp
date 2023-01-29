#include <iostream>

enum Months
{
    END, // 0 
    January, // 1
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December // 12
};

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер месяца который хотите узнать(от 1 до 12), для выхода введите: 0." << std::endl;
    int input_value = 0;
    do
    {
        std::cin >> input_value;
        if (input_value >= 0 && input_value <= 12) {
            Months  month = static_cast<Months>(input_value);
            switch (month) {
            case January:
                std::cout << "January" << std::endl;
                break;
            case February:
                std::cout << "February" << std::endl;
                break;
            case March:
                std::cout << "March" << std::endl;
                break;
            case April:
                std::cout << "April" << std::endl;
                break;
            case May:
                std::cout << "May" << std::endl;
                break;
            case June:
                std::cout << "June" << std::endl;
                break;
            case July:
                std::cout << "July" << std::endl;
                break;
            case August:
                std::cout << "August" << std::endl;
                break;
            case September:
                std::cout << "September" << std::endl;
                break;
            case October:
                std::cout << "October" << std::endl;
                break;
            case November:
                std::cout << "November" << std::endl;
                break;
            case December:
                std::cout << "December" << std::endl;
                break;
            }
        }
        else
        {
            std::cout << "Неправильный номер!" << std::endl;
            continue;
        }
    } while (input_value != 0);

    std::cout << "До свидания" << std::endl;
}