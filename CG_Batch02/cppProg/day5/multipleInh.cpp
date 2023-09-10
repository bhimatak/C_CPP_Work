/*
Demo on Multiple Inheritence
*/

#include <iostream>
#include <cstring>
using namespace std;
//Base class 1
class employee
{
	protected:
		int empCode;
		char name[20];
		float salary;
	public:
		employee() {}
		employee(int id, char *str, float sal)
		{
			empCode = id;
			salary = sal;
			strcpy(name,str);
		}

		void printEmpRec()
		{
			cout<<"\nName: "<<name<<endl;
			cout<<"\nEmp ID: "<<empCode<<endl;
			cout<<"\nSalary: "<<salary<<endl;
		}

};

//Base class 2
class Officer
{
	protected:
		float DA,HRA;
	public:
		Officer() {}
		Officer(float d, float h) { DA = d; HRA = h; }
		void printOfficer()
		{
			cout<<"\nDA: "<<DA<<endl;
			cout<<"\nHRA: "<<HRA<<endl;
		}
};

class Manager : public employee, public Officer
{
	private:
		float TA, GSal;
	public:
		Manager() {}
		Manager(int id, char *n, float s, float d, float h) : employee(id,n,s), Officer(d,h) {}

		void printMang()
		{
			printEmpRec();
			printOfficer();
			TA = 0.10 * salary;
			GSal = DA+HRA+TA+salary;
			cout<<"\nTA: "<<TA<<endl;
			cout<<"\nGross Salary: "<<GSal<<endl;

		}

};


int main()
{
	int NoOfMag=0, i;
	Manager *m;

	cout<<"\nEnter the no of Managers: ";
	cin>>NoOfMag;
	m = new Manager[NoOfMag];
	

	for(i=0;i<NoOfMag;i++)
	{
		cout<<"\nEnter the information of "<<(i+1)<<" Manager"<<endl;
		cout<<"\nEnter EmpID: ";
		int id;
		cin>>id;
		cout<<"\nEnter Name: ";
		char n[20];
		cin>>n;
		cout<<"\nEnter Salary: ";
		float s;
		cin>>s;
		cout<<"\nEnter DA: ";
		float d, h;
		cin>>d;
		cout<<"\nEnter HRA: ";
		cin>>h;

		m[i] = Manager(id,n,s,d,h);
	}

	for (int i = 0; i < NoOfMag; ++i)
	{
		/* code */
		cout<<"\n======================================";
		cout<<"\n\tManager Information";
		cout<<"\n======================================";
		m[i].printMang();
	}


	cout<<endl;
	return 0;
}