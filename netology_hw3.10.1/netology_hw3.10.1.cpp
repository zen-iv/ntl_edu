#include <iostream>
#include <vector>
#include <memory>

class tridiagonal_matrix
{
public:
    std::vector<double> m_down;
    std::vector<double> m_upper;
    std::vector<double> m_middle;

    tridiagonal_matrix(
        const std::vector<double>& down,
        const std::vector<double>& upper,
        const std::vector<double>& middle) :
        m_down{ down }, m_upper{ upper }, m_middle{ middle }
    {};

    ~tridiagonal_matrix() { std::cout << "destructor called\n"; }

    //// Функция для отрисовки матрицы в консоли
    //void print_matrix() const {
    //    int n = m_middle.size();
    //    for (int i = 0; i < n; ++i) {
    //        for (int j = 0; j < n; ++j) {
    //            if (i == j) {
    //                std::cout << m_middle[i] << "\t";
    //            }
    //            else if (i == j - 1) {
    //                std::cout << m_upper[i] << "\t";
    //            }
    //            else if (i == j + 1) {
    //                std::cout << m_down[i - 1] << "\t";
    //            }
    //            else {
    //                std::cout << "0\t";
    //            }
    //        }
    //        std::cout << std::endl;
    //    }
    //}

    // Функция для клонирования и создания std::unique_ptr
    std::unique_ptr<tridiagonal_matrix> clone() const {
        return std::make_unique<tridiagonal_matrix>(m_down, m_upper, m_middle);
    }
};

int main()
{
    auto down = std::vector<double>{ -4.0, 5.0 };
    auto upper = std::vector<double>{ 14.0, 8.0 };
    auto middle = std::vector<double>{ 3.0, 1.0, 7.0 };
    tridiagonal_matrix matrix(
        down,
        upper,
        middle
    );

    //// Отрисовываем матрицу в консоли
    //std::cout << "Orig:\n";
    //matrix.print_matrix();

    // Клонируем матрицу и выводим клонированную матрицу
    auto matrix_clone = matrix.clone();
    //std::cout << "\nClone:\n";
    //matrix_clone->print_matrix();

    return 0;
}