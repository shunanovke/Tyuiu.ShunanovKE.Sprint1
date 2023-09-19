// Tyuiu.ShunanovKE.Sprint1.Task1.V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ShunanovKE.Sprint1.Task1.V4.Lib/Tyuiu.ShunanovKE.Sprint1.Task1.V4.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "RU");
    ISprint1Task1* d = new Service();
    std::cout << "Введите целое число: ";
    int a;
    std::cin >> a;
    if (d->Logic(a))
        std::cout << "Да, число заканчивается цифрой 7";
    if (d->Logic(a) == false)
        std::cout << "Нет, число не заканчивается цифрой 7";
}
