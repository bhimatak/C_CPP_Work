/*
 demo on time and date
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t now = time(0); // current time is assigned to 'now' variable

	cout<<"Now ="<<now<<endl;

	char * dt = ctime(&now);
	cout<<"dt = "<<dt<<endl;

	tm *gmt = gmtime(&now);
	dt = asctime(gmt);
	cout<<"Now dt = "<<dt<<endl;

	cout<<"============================"<<endl;

	tm *ltm = localtime(&now);

	cout<<" Month = "<<1+ltm->tm_mon<<endl;
	cout<<"\n Year = "<<1900+ltm->tm_year<<endl;
	cout<<"\n Day = "<<ltm->tm_mday<<endl;
	cout<<"\n Time = "<<ltm->tm_hour<<endl;
	cout<<"\n Min = "<<ltm->tm_min<<endl;
	cout<<"\n Secs = "<<ltm->tm_sec<<endl;

	return 0;
}