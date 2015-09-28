// Mayank Roy
// 13CS30021
// Assignment 3
#include <iostream>
#include "Fraction.hxx"
#include "TestFraction.cxx"
#include "Calculator.cxx"
#include "TestPoly.cxx"

using namespace std;

int main()
{
	TestFraction();
	cout<<"\n\n\n\t\t\tCALCULATOR\n";
	Calculator();
	cout<<"\n\n";
	TestPoly();
	return 0;
}