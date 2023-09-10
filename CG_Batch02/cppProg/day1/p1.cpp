/* demo on diff.. functions call by

1. call by value
2. call by address/pointer
3. call by reference
4. call by default arguments
*/

#include <iostream>
#include "p1.h"

using namespace std;




int main()
{
	int ch=0;
	int a,b;
	cout<<"\nEnter the values of a and b: ";
	cin>>a>>b;
	while(1)
	{
		cout<<"\n1. call by value";
		cout<<"\n2. call by address/pointer";
		cout<<"\n3. call by reference";
		cout<<"\n4. call by default arguments";
		cout<<"\n0. Exit";
		cout<<"\nChoice: ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"\nBefore swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				swap_value(a,b);
				cout<<"\nCall by value"<<endl;
				cout<<"\nAfter swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				break;
			case 2:
				cout<<"\nCall by Pointer/address"<<endl;
				cout<<"\nBefore swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				
				swap_ptr(&a,&b);
				
				cout<<"\nAfter swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				break;
			case 3:
				cout<<"\nCall by Reference"<<endl;
				cout<<"\nBefore swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				
				swap_ref(a,b);
				
				cout<<"\nAfter swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				
				break;
			case 4:
				cout<<"\nCall by default"<<endl;
				cout<<"\nBefore swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				
				swap_default();
				
				cout<<"\nAfter swaping values of a and b are\n";
				cout<<"a = "<<a<<" b = "<<b<<endl;
				
				break;
			case 0:
				cout<<"\nProgram Ended Successfully"<<endl;
				exit(EXIT_SUCCESS);
				break;
			default:
				cout<<"\nEnter the correct choice"<<endl;
				
		}
	}
}

