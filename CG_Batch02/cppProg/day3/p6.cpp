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
		Customer() // default constructor
		{
			cout<<"\nObject is in default connst created\n";
			

		}
		
		Customer(int ano, char *cname) // para. construtor - ano input arg is passed
		{
			cout<<"\nObject is created with 2 para's passed\n";
			accno = ano;
			strcpy(name,cname);

		}


		Customer(const Customer &obj) // copy. construtor - obj  is passed as input arg
		{
			cout<<"\nObject is created with Copy constructor\n";
			accno = obj.accno;
			strcpy(name,obj.name);

		}
		
		
		int genAccNo()
		{
			countAccs++;
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
	int ano;
	
	Customer C1(1004,"Deepankar");
	ano = C1.genAccNo();
	
	C1.disData();
	Customer C2 = C1;
	C2.disData();
	
	return 0;
}