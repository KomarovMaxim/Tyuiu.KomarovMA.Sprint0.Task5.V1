// Tyuiu.KomarovMA.Sprint0.Task5.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "../Tyuiu.KomarovMA.Sprint0.Task5.V1.Lib/Tyuiu.KomarovMA.Sprint0.Task5.V1.Lib.cpp"
using namespace std;
int main()
{
	ISprint0Task5* date = new Service1();
	float a = 9.0;
	float b = 7.5;
	float c = 5.0;
	double V;


	V = date->Zadacha(a, b, c);
	cout << V;
};
