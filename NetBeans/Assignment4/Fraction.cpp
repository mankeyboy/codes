/*Mayank Roy
 13CS30021
 Assignment 4
 */
#include <iostream>
#include <cmath>
#include <stdexcept>
#include "Fraction.hxx"

using namespace std;

//Constructor for normal declaration
Fraction::Fraction(int num, int den)
{
	try
    {
        if(den==0)
            iNumerator =num/den;  
        
        if((num < 0 && den < 0) || (num > 0 && den > 0))
	   {
		  iNumerator = abs(num);
		  uiDenominator = (unsigned int)den;
	   }
	   else if(num == 0)
	   {
		  iNumerator = 0;
		  uiDenominator = (unsigned int)1;
	   }
	   else
	   {
		  if(num > 0)
		  {
			 iNumerator = (-1)*num;
			 uiDenominator = (unsigned int)den;
		  }
		  else
		  {
			 iNumerator = num;
			 uiDenominator = (unsigned int)den;
		  }
	   }
    }
    catch(const std::overflow_error& e)
    {
        cerr << "Out of Range error: " << e.what() << '\n';
    }
}

//Explicit Constructor for Double
Fraction::Fraction(double frac)
{
	bool sign = false, flag = false;//flag for final_fraction_match found
	//Sign Manipulation & Zero trivial case check
	if(frac < 0)
	{
		sign = true;
		frac = (-1)*frac;
	}
	else if(frac == 0)
	{
		iNumerator = 0;
		uiDenominator = 1;
		flag = true;
	}

	unsigned int num = 0, den = 1, mixed = (int)frac;
	double temp_frac = 0.0;
	frac -= mixed;
	frac = floor(frac*1000000.0)/1000000.0;//Flooring to lower impact of precision on Calculations
	//Main calculation for Numerator & Denominator
	while(!flag)
	{
		if(temp_frac < frac)
		{
			num++;
			temp_frac = (double)num/den;
		}
		else if(temp_frac > frac)
		{
			den++;
			temp_frac = (double)num/den;
		}
		else
		{
			flag = true;
			iNumerator = (sign)?(((mixed*den) + num)*(-1)):((mixed*den) + num);
			uiDenominator = den;
		}		
	}	
}

//Copy Constructor Definition
Fraction::Fraction(const Fraction& temp)
{
	iNumerator = temp.iNumerator;
	uiDenominator = temp.uiDenominator;
}

//Destructor Function
Fraction::~Fraction()
{}
	
//Assignment operator
Fraction& Fraction::operator=(const Fraction& temp)
{
	if(*this != temp)
	{
		iNumerator = temp.iNumerator;
		uiDenominator = temp.uiDenominator;
		return *this ;
	}
	else return *this;
}

//UNARY ARITHMETIC OPERATOR
//-------------------------
//Sign Manipulator Unary
Fraction Fraction::operator-()
{
	iNumerator *= -1;
	return *this;
}
//Sign Manipulator Unary
Fraction Fraction::operator+()
{
	iNumerator *= 1;
	return *this;
}
//Pre-Decrement Operator
Fraction& Fraction::operator--()
{
	iNumerator -= uiDenominator;
	return *this;
}
//Pre-Increment Operator
Fraction& Fraction::operator++()
{
	iNumerator += uiDenominator;
	return *this;
}
//Post-Decrement Operator
Fraction Fraction::operator--(int)
{
	Fraction F(iNumerator, uiDenominator);
	iNumerator -= uiDenominator;
	return F;
}
//Post-Increment Operator
Fraction Fraction::operator++(int)
{
	Fraction F(iNumerator, uiDenominator);
	iNumerator += uiDenominator;
	return F;
}

//SPECIAL OPERATORS
//-----------------
Fraction Fraction::operator!()
{
	Fraction F;
	if(iNumerator < 0)
	{
		F.iNumerator = (-1)*uiDenominator;
		F.uiDenominator = (unsigned int)iNumerator;
	}
	else
	{
		F.iNumerator = uiDenominator;
		F.uiDenominator = (unsigned int)iNumerator;
	}
	return F;
}

//BINARY ARITHMETIC OPERATORS USING FRIEND FUNCTIONS
//-------------------------------------------------
//Sum Binary Operator
Fraction operator+ (const Fraction& One, const Fraction& Two)
{
	Fraction Sum;
	Sum.iNumerator = (One.iNumerator*Two.uiDenominator) + (Two.iNumerator*One.uiDenominator);
	Sum.uiDenominator = One.uiDenominator*Two.uiDenominator;
	Sum = Sum.Normalize();
	return Sum;
}
//Difference Binary Operator
Fraction operator- (const Fraction& One, const Fraction& Two)
{
	Fraction Difference;
	Difference.iNumerator = (One.iNumerator*Two.uiDenominator) - (Two.iNumerator*One.uiDenominator);
	Difference.uiDenominator = One.uiDenominator*Two.uiDenominator;
	Difference = Difference.Normalize();
	return Difference;
}
//Multiply Binary Operator
Fraction operator* (const Fraction& One, const Fraction& Two)
{
	Fraction Product;
	Product.iNumerator = One.iNumerator * Two.iNumerator;
	Product.uiDenominator = One.uiDenominator * Two.uiDenominator;
	Product = Product.Normalize();
	return Product;
}
//Divide Binary Operator
Fraction operator/ (const Fraction& One, const Fraction& Two)
{
	Fraction Division;
	Fraction temp = Two;
	!temp;
	Division.iNumerator = One.iNumerator * temp.iNumerator;
	Division.uiDenominator = One.uiDenominator * temp.uiDenominator;
	Division = Division.Normalize();
	return Division;
}
//Percentage Binary Operator
Fraction operator% (const Fraction& One, const Fraction& Two)
{
	Fraction Percentage;
	Fraction temp1 = One, temp2 = Two;
	temp1.iNumerator *= temp2.uiDenominator;
	temp2.iNumerator *= temp1.uiDenominator;
	temp1.uiDenominator = temp2.uiDenominator = (temp1.uiDenominator)*(temp2.uiDenominator);
	Percentage.iNumerator = temp1.iNumerator % temp2.iNumerator;
	Percentage.uiDenominator = temp1.uiDenominator;
	Percentage.Normalize();
	return Percentage;
}

//BINARY RELATIONAL OPERATORS
//---------------------------
// IS EQUALS Operator
bool Fraction::operator== (const Fraction& comp)
{
	if((iNumerator*comp.uiDenominator) == (comp.iNumerator*uiDenominator))
		return true;
	else return false;
}
// IS NOT EQUALS Operator
bool Fraction::operator!= (const Fraction& comp)
{
	if((iNumerator*comp.uiDenominator) == (comp.iNumerator*uiDenominator))
		return false;
	else return true;
}
// IS STRICTLY LESS Operator
bool Fraction::operator< (const Fraction& comp)
{
	if((iNumerator*comp.uiDenominator) < (comp.iNumerator*uiDenominator))
		return true;
	else return false;
}
// IS LESS OR EQUAL Operator
bool Fraction::operator<= (const Fraction& comp)
{
	if((iNumerator*comp.uiDenominator) <= (comp.iNumerator*uiDenominator))
		return true;
	else return false;
}
// IS STRICTLY GREATER Operator
bool Fraction::operator> (const Fraction& comp)
{
	if((iNumerator*comp.uiDenominator) > (comp.iNumerator*uiDenominator))
		return true;
	else return false;
}
// IS GREATER OR EQUAL Operator
bool Fraction::operator>= (const Fraction& comp)
{
	if((iNumerator*comp.uiDenominator) >= (comp.iNumerator*uiDenominator))
		return true;
	else return false;
}

//ADVANCED ASSIGNMENT OPERATORS
//-----------------------------
// X += y => X = X+y
Fraction& Fraction::operator+= (const Fraction& frac)
{
	*this = (*this) + frac;
	return *this;
}
// X -= y => X = X-y
Fraction& Fraction::operator-= (const Fraction& frac)
{
	*this = (*this) - frac;
	return *this;
}
// X *= y => X = X*y
Fraction& Fraction::operator*= (const Fraction& frac)
{
	*this = (*this) * frac;
	return *this;
}
// X /= y => X = X/y
Fraction& Fraction::operator/= (const Fraction& frac)
{
	*this = (*this) / frac;
	return *this;
}
// X %= y => X = X%y
Fraction& Fraction::operator%= (const Fraction& frac)
{
	*this = (*this) % frac;
	return *this;
}

//BASIC I/O using FRIEND FUNCTIONS
//--------------------------------
//INPUT FRACTION INTO OUTPUT FILESTREAM
ostream& operator<<(ostream& f_out, const Fraction& input)
{
	
	f_out << input.iNumerator << "/" << input.uiDenominator;
    return f_out;            
}
//OUTPUT FRACTION INTO INPUT FILESTREAM
istream& operator>>(istream& f_in, Fraction& output)
{
	f_in >> output.iNumerator >> output.uiDenominator;
	return f_in;
}

//CONSTANTS OF DATATYPE
//---------------------
const Fraction Fraction::sc_fUnity(1,1);
const Fraction Fraction::sc_fZero(0,1);

//STATIC UTILITY FUNCTIONS
//------------------------
//GCD for two positive integers
int Fraction::gcd(int a, int b)
{
	if(a == 0 || b == 0)
	{
		if(a == 0)return b;
		else return a;
	}
	int r;
	if(a > b)
	{
		while(b!=0)
		{
    		r = a % b;
    		a = b;
    		b = r;
  		}
  		return a;
  	}
  	else if(a < b)
  	{
  		while(a!=0)
		{
    		r = b % a;
    		b = a;
    		a = r;
  		}
  		return b;
  	}
  	else return a;
}
//LCM for two positive integers
int Fraction::lcm(int a, int b)
{
	int lcm = (a*b)/(Fraction::gcd(a,b));
	return lcm;
}

//OTHER METHOD MEMBERS
//--------------------
//Normalize a Fraction
Fraction& Fraction::Normalize()
{
	int hcf;
	bool sign = (iNumerator < 0)? true : false;
	if(sign)
	{
		iNumerator *= (-1);
	}
	hcf = gcd(iNumerator, uiDenominator);
	iNumerator /= hcf;
	uiDenominator /= hcf;

	if(sign)
		iNumerator *= (-1);

	return *this;
}