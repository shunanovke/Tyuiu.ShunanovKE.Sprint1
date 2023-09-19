// Tyuiu.ShunanovKE.Sprint1.Task1.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service: public ISprint1Task1
{
	virtual bool Logic(int a) override
	{
		return a % 10 == 7;
	}
};