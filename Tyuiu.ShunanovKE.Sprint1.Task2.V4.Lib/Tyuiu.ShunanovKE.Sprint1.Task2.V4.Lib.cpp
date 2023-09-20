// Tyuiu.ShunanovKE.Sprint1.Task2.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service : public ISprint1Task2
{
	virtual bool LogicLong(int a) override
	{
		return (a % 10) % 3 == 0;
	}
};