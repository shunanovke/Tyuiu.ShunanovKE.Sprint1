// Tyuiu.ShunanovKE.Sprint1.Task0.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service: public ISprint1Task0V00
{
	virtual int Calculate(int a, int b) override
	{
		return a * b;
	}
};
