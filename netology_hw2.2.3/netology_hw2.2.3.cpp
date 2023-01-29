#include <iostream>
/*
Город: Москва
Улица: Арбат
Номер дома: 12
Номер квартиры: 8
Индекс: 123456
*/

struct Address
{
    std::string city;
    std::string street; // Если название улицы или города состоит из 2х и более слов, то все ломается, поскольку пробел засовывает последующие(после первого слова, слова) в int house_number, можно починить через readline
    int house_number;
    int apart_number;
    int index;
};

void full_address_input(Address& name) {
    std::cout << "Введите полный адрес.\n";
    std::cout << "Введите город: ";
    std::cin >> name.city;
    std::cout << "Введите улицу: ";
    std::cin >> name.street;
    std::cout << "Введите номер дома: ";
    std::cin >> name.house_number;
    std::cout << "Введите номер квартиры: ";
    std::cin >> name.apart_number;
    std::cout << "Введите индекс: ";
    std::cin >> name.index;
}

void full_address_return(Address& name) {
    std::cout << "\nГород: " << name.city << std::endl;
    std::cout << "Улица: " << name.street << std::endl;
    std::cout << "Номер дома: " << name.house_number << std::endl;
    std::cout << "Номер квартиры: " << name.apart_number << std::endl;
    std::cout << "Индекс: " << name.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Address Evgn, Artr;
    full_address_input(Evgn);
    full_address_input(Artr);

    full_address_return(Evgn);
    full_address_return(Artr);
}