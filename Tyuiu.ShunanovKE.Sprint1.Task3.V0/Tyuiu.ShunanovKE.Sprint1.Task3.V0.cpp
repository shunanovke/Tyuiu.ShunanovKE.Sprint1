// Tyuiu.ShunanovKE.Sprint1.Task3.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ShunanovKE.Sprint1.Task3.V0.Lib/Tyuiu.ShunanovKE.Sprint1.Task3.V0.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "RU");
    ISprint1Task2* d = new Service();
    std::cout << "Введите целое число: ";
    int a;
    std::cin >> a;
    if (d->LogicLong(a))
    {
        a = a * 2;
        std::cout << a;
    }
    else
    {
        a = a / 5;
        std::cout << a;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
