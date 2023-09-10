/* 
demo on class and objects
*/

#include<iostream>
#include "p6.h"
using namespace std;

int main()
{
	emp_details e1,e2; //e1 referes to object of type class emp_details
	
	e1.setEmpId();
	e1.setEmpName();
	
	cout<<"\nEmp ID = "<<e1.getEmpId()<<endl;
	cout<<"\nEmp Name: "<<e1.getEmpName()<<endl;

	return 0;
}