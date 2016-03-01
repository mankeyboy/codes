#include <iostream>
using namespace std;

#include "Fraction.hxx"

void Calculator()
{
	cout<< "\n\t\tBegin Testing"<<endl;
	cout<<"\tMenu:"<<endl
		<<"1. Add"<<endl
		<<"2. Subtract"<<endl
		<<"3. Multiply"<<endl
		<<"4. Divide"<<endl
		<<"5. Residue"<<endl
		<<"6. Reciprocal"<<endl
		<<"7. Exit";
	unsigned int choice;
	bool flag = true;
	cout<<"\nChoice: ";
	Fraction One, Two;
	while(flag)
	{
		cin>>choice;
		switch(choice)
		{
			case 1://Additon
			{
				cout<<"\nAddition Selected!\nEnter two fractions\n One: ";
				cin>>One;
				cout<<endl<<"Two: ";
				cin>>Two;
				cout<<"\nSum: "<<(One + Two);
				cout<<"\nEnter choice: ";
				break;
			}
			case 2:
			{
				cout<<"\nSubtraction Selected!\nEnter two fractions\n One: ";
				cin>>One;
				cout<<endl<<"Two: ";
				cin>>Two;
				cout<<"\nDifference: "<<(One - Two);
				cout<<"\nEnter choice: ";
				break;
			}
			case 3:
			{
				cout<<"\nMultiplication Selected!\nEnter two fractions\n One: ";
				cin>>One;
				cout<<endl<<"Two: ";
				cin>>Two;
				cout<<"\nProduct: "<<(One * Two);
				cout<<"\nEnter choice: ";
				break;
			}
			case 4:
			{
				cout<<"\nDivision Selected!\nEnter two fractions\n One: ";
				cin>>One;
				cout<<endl<<"Two: ";
				cin>>Two;
				cout<<"\nDivide: "<<(One / Two);
				cout<<"\nEnter choice: ";
				break;
			}
			case 5:
			{
				cout<<"\nModulo(Residue) Selected!\nEnter two fractions\n One: ";
				cin>>One;
				cout<<endl<<"Two: ";
				cin>>Two;
				cout<<"\nResidue: "<<(One % Two);
				cout<<"\nEnter choice: ";
				break;
			}
			case 6:
			{
				cout<<"\nReciprocal Selected!\nEnter the fraction: ";
				cin>>One;
				cout<<"\nReciprocal: "<<(!One);
				cout<<"\nEnter choice: ";
				break;
			}
			case 7:
			{
				cout<<"\nExit Code Entered!\nThank You!"<<endl;
				flag = false;
				break;
			}
			default:
			{
				cout<<"\nEnter proper code!\nReenter: ";
			}
		}
	}	
}