#include <iostream>

struct bank_user {
    int user_id;
    std::string name;
    double balance;
};

void change_balance(bank_user& name, double new_balance) {
    name.balance = new_balance;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    bank_user USER;
    std::cout << "Введите номер счёта: ";
    std::cin >> USER.user_id;
    std::cout << "Введите имя владельца: ";
    std::cin >> USER.name;
    std::cout << "Введите баланс: ";
    std::cin >> USER.balance;

    std::cout << USER.name << ", " << USER.user_id << ", " << USER.balance << std::endl;

    std::cout << "Введите новый баланс: ";
    double new_balance = 0;
    std::cin >> new_balance;
    change_balance(USER, new_balance);

    std::cout << USER.name << ", " << USER.user_id << ", " << USER.balance << std::endl;
}