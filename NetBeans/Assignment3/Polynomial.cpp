#include <iostream>
#include <vector>
#include "Polynomial.hxx"
#include "Fraction.hxx"

using namespace std;

//CONSTRUCTORS
//------------
//Basic Constructor
template<class T, class U>
Poly<T , U>::Poly(unsigned int x)
{
	degree_ = x;
	U temp;
	for(int i = 0; i <= degree_ ; i++ )
	{	
		temp = 1;
		coefficients_.push_back(temp);
	}
}
//Copy Constructor
template<class T, class U>
Poly<T , U>::Poly(const Poly<T, U>& temp)
{
	degree_ = temp.degree_;
	coefficients_ = temp.coefficients_;
}

// BASIC ASSIGNEMENT OPERATOR
// --------------------------
template<class T, class U>
Poly<T , U>& Poly<T,U>::operator=(const Poly<T,U>& temp)
{
	degree_ = temp.degree_;
	coefficients_ = temp.coefficients_;
	return *this ;
}

// UNARY ARITHMETIC OPERATORS
// --------------------------
//Unary Negative
template<class T, class U>
Poly<T,U> Poly<T,U>::operator-() // Operand 'this' implicit
{
	
	for (int i = 0; i< coefficients_.size(); i++)
	{
		coefficients_[i] *= (-1);
	}
	return *this;
}
//Unary Positive		
template<class T, class U>
Poly<T,U> Poly<T,U>::operator+()
{
	return *this;
}

// BINARY ARITHMETIC OPERATORS
// ---------------------------
//Addition
template<class T, class U>
Poly<T,U> Poly<T,U>::operator+(const Poly<T, U>& temp)
{
	Poly<T, U> one;
	one.degree_ = (degree_ >= temp.degree_)? degree_ : temp.degree_;
	if(one.degree_ == degree_)
	{
		for (int i = 0; i < coefficients_.size(); i++)
		{
			one.coefficients_.push_back((i < temp.degree_)? (coefficients_[i] + temp.coefficients_[i]) : coefficients_[i]); 
		}
	}
	else if(one.degree_ == temp.degree_)
	{
		for (int i = 0; i < temp.coefficients_.size(); i++)
		{
			one.coefficients_.push_back((i < degree_)? (temp.coefficients_[i] + coefficients_[i]):temp.coefficients_[i]);
		}
	}
	bool flag = true;
	while(flag)
	{	
		if(*(one.coefficients_.end()-1) == 0)
		{
			one.degree_--;
			one.coefficients_.resize (one.coefficients_.size()-1);
		}
		else flag = false;
	}
	return one;
}
//Subtraction
template<class T, class U>
Poly<T , U> Poly<T, U>::operator-(const Poly<T, U>& temp)
{
	Poly<T,U> t = temp;
	-t;
	Poly<T,U> one = *this + t;
	return one;
}

// ADVANCED ASSIGNEMENT OPERATORS
// ------------------------------
template<class T, class U>
Poly<T , U>& Poly<T , U>::operator+=(const Poly<T, U>& temp)
{
	*this = (*this + temp); 
	return *this;
}
template<class T, class U>
Poly<T , U>& Poly<T , U>::operator-=(const Poly<T, U>& temp)
{
	*this = (*this - temp); 
	return *this;	
}

// BASIC I/O using FRIEND FUNCTIONS
// --------------------------------
//OUTPUT
template<class T, class U>
ostream& operator<<(ostream& os, const Poly<T, U>& p)
{
	for( int i = 0; i <= p.degree_; i++)
	{
		if(i == 0)
			os<< p.coefficients_[i];
		else
			os<<p.coefficients_[i]<<"x^"<<i;
		if(i == p.degree_)break;
		else cout<<" + ";
	}
	return os;
}
//INPUT
template<class T, class U>
istream& operator>>(istream& is, Poly<T, U>& p)
{
	is>>p.degree_;
	p.coefficients_.clear();
	for(int i = 0; i <= p.degree_; i++)
	{
		U temp;
		is>>temp;
		p.coefficients_.push_back(temp);
	}
	bool flag = true;
	int i = p.degree_;
	while(flag)
	{	
		if(p.coefficients_[i] == 0)
		{
			p.coefficients_.resize (p.coefficients_.size()-1);
			i--;
		}
		else flag = false;
	}
	return is;
}

//METHODS
//-------
template<class T, class U>
T Poly<T , U>::Evaluate(const T& temp)
{
	T result = 0;
	for( int i = 0; i <= degree_; i++)
	{
		result = result*temp + coefficients_[i];
		cout<<"Current Val: "<<result<<endl;
	}
	return result;
}