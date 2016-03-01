#ifndef __POLYNOMIAL_HXX	// Control inclusion of header files
#define __POLYNOMIAL_HXX

/************ C++ Headers ************************************/
#include <iostream>	// Defines istream & ostream for IO
#include <vector>
using namespace std;

/************ Project Headers ********************************/
#include "Fraction.hxx"

/************ CLASS Declaration ******************************/
template<
	class T,	// Type of Value
	class U>	// Type of Coefficients 
class Poly {

public:

	// CONSTRUCTOR
	// -----------
	Poly(unsigned int = 0);	// Uses default parameters. Overloads to
							// Poly(...); 

	// Copy Constructor 
	Poly(const Poly&);	// Param cannot be changed (const)

	// DESTRUCTOR
	// ----------
	~Poly() {}	// No virtual destructor needed

	// BASIC ASSIGNEMENT OPERATOR
	// --------------------------
	Poly& operator=(const Poly&);

	// UNARY ARITHMETIC OPERATORS
	// --------------------------
	Poly operator-();		// Operand 'this' implicit
	Poly operator+();

	// BINARY ARITHMETIC OPERATORS
	// ---------------------------
	Poly operator+(const Poly&);
	Poly operator-(const Poly&);

	// ADVANCED ASSIGNEMENT OPERATORS
	// ------------------------------
	Poly& operator+=(const Poly&);
	Poly& operator-=(const Poly&);

	// BASIC I/O using FRIEND FUNCTIONS
	// --------------------------------
	template<class T1, class U1>
	friend ostream& operator<<(ostream& os, const Poly<T1, U1>& p);

	template<class T1, class U1>
	friend istream& operator>>(istream& is, Poly<T1, U1>& p);

	// METHODS
	// -------
	T Evaluate(const T&); // Evaluates the polynomial - use Horner's Rule

private:

	// DATA MEMBERS
	// ------------
	unsigned int	degree_;
	vector<U>		coefficients_;
};

#include "Polynomial.cpp"

#endif // __POLYNOMIAL_HXX