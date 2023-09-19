// Tyuiu.ShunanovKE.Sprint1.Task0.V4.cpp : This file contains the 'main' function.
#include <iostream>
#include "../Tyuiu.ShunanovKE.Sprint1.Task0.V4.Lib/Tyuiu.ShunanovKE.Sprint1.Task0.V4.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "RU");
    int a, b;
    ISprint1Task0V00* c = new Service();
    std::cout << "Введите первую сторону прямоугольника: ";
    std::cin >> a;
    std::cout << "Введите вторую сторону прямоугольника: ";
    std::cin >> b;
    std::cout << "Площадь прямоугольника = " << c->Calculate(a, b);
}