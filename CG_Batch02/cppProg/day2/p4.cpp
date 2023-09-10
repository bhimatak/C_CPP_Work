/*
demo on io statements
*/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	time_t now = time(0); 
	tm *gmt = gmtime(&now);
	tm *ltm = localtime(&now);
	char str[] = "Unable to allocate memory";

	cerr<<"Error Message : "<<str<<endl;
	int str1 = (1900+ltm->tm_year);
	//char *intstr = itoa(str1);
	string str2 = std::to_string(str1);
	cout<<str2;

	// string str2 = (string)str1;
	// str2 += " "+ 1+ltm->tm_mon + " " + ltm->tm_mday+ " "+ltm->tm_hour;
	 clog<<"Logged with error: @  "<<str2<<"\t"<<str<<endl;

	return 0;
}