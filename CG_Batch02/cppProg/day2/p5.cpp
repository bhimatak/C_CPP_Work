/* 
demo on class and objects
*/

#include<iostream>
using namespace std;

class emp_details
{
	private:
		int empid;
		char empname[20];
	public:
		void setEmpId()
		{
			cin>>empid;
		}
		void setEmpName()
		{
			cin>>empname;
			
		}

		int getEmpId()
		{
			return empid;
		}

		char *getEmpName() { return empname; }

		void getDetails()
		{
			cout<<"\n"<<empid<<"\n"<<empname<<endl;
		}


};

int main()
{
	emp_details e1,e2; //e1 referes to object of type class emp_details
	
	e1.setEmpId();
	e1.setEmpName();
	
	cout<<"\nEmp ID = "<<e1.getEmpId()<<endl;
	cout<<"\nEmp Name: "<<e1.getEmpName()<<endl;

	return 0;
}