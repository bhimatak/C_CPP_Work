/* 
Demo on Constructor

the name of the fuction is the name of the class itself which
is declared withing the class
and it is the 1st function to be called when an object
is created.

useage-: 1. initializing
		 2. allocating memory
*/

#include <iostream>
#include <cstring>

using namespace std;

class Customer
{
	private:
		static int countAccs;
		int accno;
		char name[20];
	public:
		Customer() // default construtor
		{
			countAccs=1001;
			//cout<<"\nObject is created\ncountAccs= "<<++countAccs<<endl;

		}
		void setData(int ano, char *cname) {
			//accno = ano;
			accno = countAccs++;
			strcpy(name, cname);
		}
		void disData()
		{
			cout<<"\nAcc Number: "<<accno<<endl;
			cout<<"\nName: "<<name<<endl;
		}
};

int Customer::countAccs;

int main()
{
	Customer C1, C2;
	C1.setData(101,"Bhima");
	C2.setData(102,"Shankar");
	C1.disData();
	C2.disData();
	return 0;
}