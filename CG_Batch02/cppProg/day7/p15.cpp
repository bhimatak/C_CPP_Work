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
		cout<<"\nEnter sal, name of emp"<<endl;
		cin>>sal>>name;
	}

	void printData()
	{
		cout<<"\nName: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Salary: "<<sal<<endl;

	}
	int getId()
	{
		return id;
	}
};


int main()
{
	
	ofstream is;

	EMP e1;
	int eid;
	is.open("EMP1.dat", ios::app);
	if(!is)
	{
		cerr<<"\nUnable to open the file"<<endl;
		exit(EXIT_FAILURE);	
	}

		cout<<"Enter the id to update data:"<<endl;
		cin>>eid;
		cout<<eid<<endl;
		//e1.getData();
		e1.getId();
		if(e1.getId() == eid)
		{
			cout<<"matched"<<endl;
			e1.getData();
			is.write((char *)&e1,1);
			cout<<"Updated"<<endl;
		}
	cout<<" Error to Update"<<endl;


	/*while(is.read((char *)&e1,sizeof(e1))){
		//is.read((char *)&e1,sizeof(e1));
		cout<<"\nFile Pointer position : "<<is.tellg()<<endl;
		e1.printData();

		cout<<"id -> "<<e1.getId()<<endl;

		
	}*/
	is.close();

	return 0;

}