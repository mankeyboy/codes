/*Mayank Roy
 13CS30021
 Assignment 4
 */
#ifndef __DEQUE_HXX	// Control inclusion of header files
#define __DEQUE_HXX

/************ C++ Headers ************************************/

#include <iostream>
#include <vector>
#include <exception>

using namespace std;

template<class T>
class Deque
{
    public:
	   typedef size_t size_type;
	   Deque();// Construct an empty container with no element
	   Deque(int, T value=0);//Construct a container with n elements. Each element is a copy of v
	   Deque(const Deque&);// Copy Constructor
	   ~Deque()throw();//Destroy all container elements and deallocate storage
	   Deque& operator=(const Deque&);//Assign new content to the container
	   int size()const throw();//Returns the number of elements in the container
	   Deque resize(int, T value=0);//Resizes the container so that it contains n elements.
	   int empty()const throw();//Returns whether the container is empty
	   T& operator[](int);//Returns a reference to the element at position n.
	   T& at(int);//Returns a reference to the element at position n.
	   T& front() throw();//Returns a reference to the first element in the container
	   T& back() throw();//Returns a reference to the last element in the container.
	   void push_back(const T&);//Add element at the end
	   void push_front(const T&);//Add element at front
	   void pop_back();//Delete last element:
	   void pop_front();//Delete first element:
	   void clear()throw();//Removes all elements from the deque

    private:
	   vector<T> v;
	   int size_deque;
};

/*ERROR HANDLING
Exception for only two possible situations: 
When vector won't be able to increase its size anymore due to exceeding its own bounds or the system being out of memory.
When accessing of memory addresses which have not been assigned or had been assigned in the past, throw an out_of_range exception error as a result of which we can provide a Basic guarantee in all cases.
*/
class Overflow:public exception
{
    public:
	   Overflow()
       {
           s="Overflow Error";
	   }
        void print()
	   {
		  cout << s;
	   }
	   ~Overflow()throw(){}
    private:
	   string s;
};

#include "Deque.cpp"//methods are implemented here
#endif

