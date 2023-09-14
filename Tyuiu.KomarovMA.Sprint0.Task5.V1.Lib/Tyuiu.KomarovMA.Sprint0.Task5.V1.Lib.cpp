#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service1 : public ISprint0Task5

{
	virtual float Zadacha(float a, float b, float c) override
	{
		return a * b * c;
	}
};
