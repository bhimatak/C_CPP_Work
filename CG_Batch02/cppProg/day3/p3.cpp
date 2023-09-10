/*
demo on static member of a class
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
		void setData(int ano, char *cname) {
			//accno = ano;
			countAccs=1001
			accno = ++countAccs;
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
	Customer C1, C2, C3;
	
	C1.setData(100,"Rahul");
	C2.setData(101,"Pratibha");

	C1.disData();
	C2.disData();
	C3.disData();

	return 0;
}