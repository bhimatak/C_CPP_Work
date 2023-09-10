/*
Demo on binary file handling
*/
#include <iostream>
#include<fstream>
#include <string>

using namespace std;

class EMP
{
private:
	int id;
	float sal;
	char name[20];
public:
	void getData()
	{
		cout<<"\nEnter id, sal, name of emp"<<endl;
		cin>>id>>sal>>name;
	}

	void printData()
	{
		cout<<"\nName: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Salary: "<<sal<<endl;

	}
};


int main()
{
	EMP e;
	ofstream os;

	os.open("EMP1.dat",ios::app);

	if(!os)
	{
		cerr<<"\nUnable to open the file"<<endl;
		exit(EXIT_FAILURE);
	}

	e.getData();

	os.write((char *)&e,sizeof(e));
	os.close();

	

	return 0;

}