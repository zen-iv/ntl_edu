﻿#include <iostream>
#include <fstream>
#include <string>


class address_list {
public:
    void open_file() {
        std::ifstream file_in("in.txt");

        if (file_in.is_open()) {

            file_in >> city_count;
            int are = 0, x = 0;
            address* out_citys1 = new address[city_count];
            adress_kal(out_citys1);

            std::string smth;
            while (!file_in.eof()) {
                file_in >> smth;
                out_file_push(smth, x, are); // are - Что мы отправляем Город, Улица... x - номер города по порялку
                are++;
                if (are > 3)
                {
                    are = 0;
                    x++;
                }
            }
            file_in.close();
            delete[] out_citys1;
        }
        else {
            std::cout << "Не получилось открыть файл!" << std::endl;
        }
    }

    void out_file_return() {
        std::ofstream fout("out.txt");
        fout << city_count << std::endl;
        for (int i = 0; i < city_count; i++)
        {
            fout << out_citys[i].city << ", ";
            fout << out_citys[i].street << ", ";
            fout << out_citys[i].building_num << ", ";
            fout << out_citys[i].apart_num << std::endl;

        }
    }
private:
    struct address
    {
        std::string city;
        std::string street;
        int building_num;
        int apart_num;
    };
    address* out_citys;
    int city_count = 0;
    void adress_kal(address* out_citys1) {
        out_citys = out_citys1;
    }

    void out_file_push(std::string smth, int kuda, int are) {
        if (are == 0)
        {
            out_citys[kuda].city = smth;
        }
        else if (are == 1) {
            out_citys[kuda].street = smth;
        }
        else if (are == 2) {
            out_citys[kuda].building_num = std::stoi(smth);
        }
        else if(are == 3)
        {
            out_citys[kuda].apart_num = std::stoi(smth);
        }
    }
};

int main()
{
    address_list list1;
    list1.open_file();
    list1.out_file_return();

    std::cout << "Файл готов - \"out.txt\"\n";
}
