/* 
Demo on para. Constructor

parameters are passed to the constructor as arguments
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
		Customer() // para. construtor - ano input arg is passed
		{
			cout<<"\nObject is in default connst created\n";
			accno = 1001;

		}
		Customer(int ano) // para. construtor - ano input arg is passed
		{
			cout<<"\nObject is created with ano passed\n";
			accno = ano;

		}

		Customer(char *cname) // para. construtor - ano input arg is passed
		{
			cout<<"\nObject is created with name passed\n";
			accno = 1111111;
			strcpy(name,cname);

		}

		Customer(int ano, char *cname) // para. construtor - ano input arg is passed
		{
			cout<<"\nObject is created with 2 para's passed\n";
			accno = ano;
			strcpy(name,cname);

		}
		
		
		void setData(char *cname) {
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
	Customer C1, C3("Ruthuja"), C4(1004,"Deepankar"),C2(1002);
	C1.setData("Bhima");
	C2.setData("Shankar");

	C1.disData();
	C2.disData();
	C3.disData();
	C4.disData();
	return 0;
}