/*
demo on stl :: string
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	string s,t;
	s.push_back('a');
	const char st[] = "afaf";
	cout<<s<<endl;
	t = st;
	cout<<t<<endl;

	t = t+s;

	cout<<t<<"\t"<<t.size()<<endl;
	cout<<t.length()<<endl;
	cout<<t.max_size()<<endl;
	cout<<t.capacity()<<endl;
	// cout<<t.empty()<<endl;
	// t.clear();
	// cout<<"after clear t:"<<t<<endl;
	// cout<<t.empty()<<endl;

	//cout<<t.at(3)<<endl;
	t.pop_back();
	cout<<t<<endl;
	t.pop_back();
	cout<<t<<endl;

	t = "This is a Cpp Programming class";
	s = t.substr(5,10);
	cout<<s<<endl;

	t = "Bhima:Shankar";
	int pos = t.find(":");
	cout<<"pos="<<pos<<endl;
	s = t.substr(pos+1);
	cout<<s<<endl;
	s = t.substr(0,pos);
	cout<<s<<endl;

	

	return 0;
}