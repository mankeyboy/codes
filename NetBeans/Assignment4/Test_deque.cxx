/*Mayank Roy
 13CS30021
 Assignment 4
 */
#include "Deque.hxx"
#include "Fraction.hxx"
#include <iostream>
#include <vector>
#include <exception>

using namespace std;

void Test_Deque() 
{
    Deque<int> deck1(10); // 10 zero-initialized elements
    Deque<int>::size_type sz = deck1.size();
    // Assign some values:
    for (unsigned i=0; i<sz; i++) deck1[i]=i;
    // Reverse order of elements using operator[]:
    for (unsigned i=0; i<sz/2; i++) 
    {
        int temp;
        temp = deck1[sz-1-i]; 
        deck1[sz-1-i]=deck1[i]; 
        deck1[i]=temp;
    }
    // Print content:
    cout << "deck1 contains:";
    for (unsigned i=0; i<sz; i++) cout << " " << deck1[i]; cout << "\n";
    // Empty test
    cout << "deck1 is " << ((deck1.empty())? "Empty": "Not Empty") << endl;
    deck1.clear(); // Clear deque
    cout << "deck1 is " << ((deck1.empty())? "Empty": "Not Empty") << endl;
    // Add elements to end
    for (unsigned i=0; i<sz; i++) 
        deck1.push_back(i);
    // Insert elements to front
    for (unsigned i=1; i<sz; i++) 
        deck1.push_front(-(int)i);
    // Print content:
    cout << "deck1 contains:";
    for (unsigned i=0; i<deck1.size(); i++) 
        cout << " " << deck1.at(i);     
    cout << "\n";
    Deque<int> deck2(deck1); // Copy two deques
    // Pop from either side
    sz = deck1.size();
    cout << "deck1 elements in pairs:";
    for (unsigned i=0; i<=sz/2; i++) 
    {
        if (!deck1.empty()) 
        {
            cout << " " << deck1.front();
            deck1.pop_front();
        }
        if (!deck1.empty()) 
        {
            cout << " " << deck1.back();
            deck1.pop_back();
        }
    }
    cout << "\n";
    // Print content:
    cout << "deck2 contains:";
    for (unsigned i=0; i<deck2.size(); i++) 
        cout << " " << deck2.at(i); cout << "\n";
    Deque<int> deck3(5, 777); // Fill
    // Print content:
    cout << "deck3 contains:";
    for (unsigned i=0; i<deck3.size(); i++) 
        cout << " " << deck3.at(i); 
    cout << "\n";
    deck3.resize(deck3.size()+2); // Resize
    deck2 = deck3; // Assign
    // Print content:
    cout << "deck2 contains:";
    for (unsigned i=0; i<deck2.size(); i++) 
        cout << " " << deck2.at(i); 
    cout << "\n";
    return;
}

void Test_Deque_Fraction()
{
 cout<<" PART 1 OVER:\n FRACTION TEST : \n\n";
    
    
    Deque<Fraction> deck1(10); // 10 zero-initialized elements
    Deque<Fraction>::size_type sz = deck1.size();
    // Assign some values:
    for (int i=0; i<sz; i++) deck1[i]=i;
    // Reverse order of elements using operator[]:
    for (int i=0; i<sz/2; i++) 
    {
        Fraction temp;
        temp = deck1[sz-1-i]; 
        deck1[sz-1-i]=deck1[i]; 
        deck1[i]=temp;
    }
    // Print content:
    cout << "deck1 contains:";
    for (int i=0; i<sz; i++) cout << " " << deck1[i]; cout << "\n";
    // Empty test
    cout << "deck1 is " << ((deck1.empty())? "Empty": "Not Empty") << endl;
    deck1.clear(); // Clear deque
    cout << "deck1 is " << ((deck1.empty())? "Empty": "Not Empty") << endl;
    // Add elements to end
    for (int i=0; i<sz; i++) 
    {
        Fraction temp(i);
        deck1.push_back(temp);
    }
    // Insert elements to front
    for (int i=1; i<sz; i++) 
    {    
        Fraction temp(i);
        deck1.push_front(-temp);
    }
    // Print content:
    cout << "deck1 contains:";
    for (int i=0; i<deck1.size(); i++) 
        cout << " " << deck1.at(i);     
    cout << "\n";
    Deque<Fraction> deck2(deck1); // Copy two deques
    // Pop from either side
    sz = deck1.size();
    cout << "deck1 elements in pairs:";
    for (int i=0; i<=sz/2; i++) 
    {
        if (!deck1.empty()) 
        {
            cout << " " << deck1.front();
            deck1.pop_front();
        }
        if (!deck1.empty()) 
        {
            cout << " " << deck1.back();
            deck1.pop_back();
        }
    }
    cout << "\n";
    // Print content:
    cout << "deck2 contains:";
    for (int i=0; i<deck2.size(); i++) 
        cout << " " << deck2.at(i); cout << "\n";
    Deque<Fraction> deck3(5, 777); // Fill
    // Print content:
    cout << "deck3 contains:";
    for (int i=0; i<deck3.size(); i++) 
        cout << " " << deck3.at(i); 
    cout << "\n";
    deck3.resize(deck3.size()+2); // Resize
    deck2 = deck3; // Assign
    // Print content:
    cout << "deck2 contains:";
    for (int i=0; i<deck2.size(); i++) 
        cout << " " << deck2.at(i); 
    cout << "\n";
    //
    return;   
}


int main()
{
	try
    {
		Test_Deque();
	}
	catch(Overflow &e)//This is the only exception being thrown forward, //the rest are being dealt with then and there
	{
		e.print();
	}
    try
    {
		Test_Deque_Fraction();
	}
	catch(Overflow &e)
	{
		e.print();
	}
	return 0;
}
