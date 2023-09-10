/*
Demo on array of pointers to the objects
*/
#include <iostream>
#include <cstring>
using namespace std;

class City
{
	protected:
		char *cname;
		int len;
	public:
		City(){
			len = 0;
			cname = new char[len+1];
		}

		void getCName(){
			char *str;
			str = new char[30];
			cout<<"\nEnter the city name: ";
			cin>>str;

			len = strlen(str);
			cname = new char[len+1];
			strcpy(cname,str);
		}
		void printCName() { cout<<"\nCity Name: "<<cname<<endl; }

};


int main()
{

	City *cptr[10]; //10 pointers to the citys


	int op=1;
	int n=1;

	do{
		cptr[n] = new City;
		cptr[n]->getCName();
		n++;


		cout<<"\nDo you want to conitue(1/0): ";
		cin>>op;
	}while(op);

	cout<<"\nPrint all City Names"<<endl;

	for(int i=1;i<n;i++)
	{
		cptr[i]->printCName();
		cout<<endl;
	}

	return 0;
}