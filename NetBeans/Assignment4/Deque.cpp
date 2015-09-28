/*Mayank Roy
 13CS30021
 Assignment 4
 */
#include "Deque.hxx"
#include <vector>
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

template<class T>
Deque<T>::Deque()//default constructor strong throw
{
	size_deque=0;
}

template<class T>
Deque<T>::Deque(int n, T value):size_deque(n)//Construct a container with n elements where each element is a copy of v
{
	Overflow o;
	try
    {
		v.resize(n, value);
    }
	catch(bad_alloc &e)
	{
		throw o;
	}
}

template<class T>
Deque<T>::Deque(const Deque& d)//copy constructor with strong throw
{
	Overflow o;
    try
    {
		v.resize(d.size_deque);
		v=d.v;
		size_deque=d.size_deque;
	}
	catch(bad_alloc &e)
	{
		throw o;
	}
}

template<class T>
Deque<T>::~Deque()throw()//no throw destructor
{}

template<class T>
Deque<T>& Deque<T>::operator=(const Deque& d)//Assigns new contents to the container
{
	Overflow o;
	if(this!=&d)//check if to be assigned is same as to assign
	{
		try
        {
			v.resize(d.size_deque);
			v=d.v;
			size_deque=d.size_deque;
			return *this;
		}
		catch(bad_alloc &e)
		{
			throw o;//memory overflow exception
		}
	}
	return *this;
}
template<class T>
int Deque<T>::size()const throw()
{
	return size_deque;
}
template<class T>
Deque<T> Deque<T>::resize(int n, T value)//Decrease or Increase to n assigning new elements value
{
	int temp = size_deque; 
    if(n > size_deque)
	{
        Overflow o;
        try
        {
			v.resize(n);
			for(int i=temp;i<n;i++)
				v.push_back(value);
			size_deque=n;
			return *this;
		}
		catch(bad_alloc &e)
        {
			throw o;
		}
		return *this;
	}
	else
	{
		size_deque=n;
		v.resize(n);
		return *this;
	}
}
template<class T>
int Deque<T>::empty()const throw()//no change no throw check
{
	if(size_deque==0)
		return 1;
	else
		return 0;
}
template<class T>
T& Deque<T>::operator[](int n)//returns reference via index and undefined if n>size_deque. We could change this to implement the working of at() function which returns an out_of_range exception but the PS mentions to let it remain undefined.
{
	return v[n];
}

template<class T>
T& Deque<T>::at(int n)
{
	try
    {
	   return v.at(n);
    }
    catch(const std::out_of_range& oor)
    {
        cerr << "Out of Range error: " << oor.what() << '\n';
    }
}

template<class T>
T& Deque<T>::front()throw()//returns front element if not empty else undefined
{
	return v[0];
}

template<class T>
T& Deque<T>::back()throw()
{
	return v[size_deque - 1];
}

/*
Pushes at the end, i.e max subscript or from size_deque - 1 . We could also have done the opposite while maintaining all the properties of deques
*/

template<class T>
void Deque<T>::push_back(const T& value)
{
	Overflow o;
	try
    {
		v.push_back(value);
		size_deque++;
	}
	catch(bad_alloc &e)
    {
		throw o;
	}
}

/*
Pushes at the front, that is the start or 0 as we are increasing the que by adding elements at higher subscripts(we could also have done the opposite)
*/
template<class T>
void Deque<T>::push_front(const T& value)
{
	Overflow o;
	try
    {
		v.insert(v.begin(), value);
		size_deque++;
	}
	catch(const bad_alloc &e)
    {
		throw o;
	}
}

template<class T>
void Deque<T>::pop_back()//removes from last if not empty 
{
	v.pop_back();
    size_deque--;
}
template<class T>
void Deque<T>::pop_front()//removes from start if not empty
{
	v.erase(v.begin());
    size_deque--;
}
template<class T>
void Deque<T>::clear()throw()//no throw clear
{
	v.erase(v.begin(),v.end());
    size_deque=0;
}
