/*

return_dt class_name::function_name(args)
{
	//code
}


*/
#ifndef p6_h
#define p6_h
#include <iostream>
using namespace std;

class emp_details
{
	private:
		int empid;
		char empname[20];
	public:
		void setEmpId();
		void setEmpName();
		int getEmpId();
		char *getEmpName();
		void getDetails();
};

//scope resolution operator ::

		void emp_details::setEmpId()
		{
			cin>>empid;
		}
		void emp_details::setEmpName()
		{
			cin>>empname;
			
		}

		int emp_details::getEmpId()
		{
			return empid;
		}

		char *emp_details::getEmpName() { return empname; }

		

#endif