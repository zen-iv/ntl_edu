#include <iostream>
#include <fstream>

int main()
{
    std::ifstream intxt("in.txt");
    int N, M, x;
    if (intxt.is_open()) {

        intxt >> N;
        int* arr1 = new int[N];
        for (int i = 0; i < N; i++)
        {
            intxt >> arr1[i];
        }

        intxt >> M;
        int* arr2 = new int[M];
        for (int i = 0; i < M; i++)
        {
            intxt >> arr2[i];
        }

        std::ofstream outtxt("out.txt");

        outtxt << M << std::endl;
        outtxt << arr2[M - 1] << " ";
        for (int i = 0; i < M - 1; i++) {
            outtxt << arr2[i] << " ";
        }

        outtxt << std::endl;
        outtxt << N << std::endl;
        for (int i = 1; i < N; i++) {
            outtxt << arr1[i] << " ";
        }
        outtxt << arr1[0];

        outtxt.close();

        delete[] arr1;
        arr1 = nullptr;
        delete[] arr2;
        arr2 = nullptr;

        intxt.close();
    }
    else {
        std::cout << "Не получилось открыть файл!" << std::endl;
    }
}