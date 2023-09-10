/*
demo on string class

getline(), push_back()
pop_pack().

*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	char str1[20]={'\0'}, str2[20]="Cpp Programming";

	string s1 = "Hello", s2=" W";
	string s3;
	string s4;

	s3 =  s1+s2;

	cout<<s1<<s2<<endl;
	cout<<"\nS3 = "<<s3<<endl;
	cout<<"\nLen of s3 = "<<s3.size()<<endl;

	getline(cin, s3);
	cout<<"New s3 = "<<s3<<endl;

	//append s3 with 'D' character
	s3.push_back('D');
	cout<<"\nNew s3 = "<<s3<<endl;

	//delete s3 last character
	s3.pop_back();

	cout<<"\nNew s3 = "<<s3<<endl;
	s4 = "Hello Bhima how are you doing, i am doing good how about you?";
	cout<<"\nCapacity of s4="<<s4.capacity()<<endl;
	//s4.resize(120);
	//cout<<"\nCapacity of s4="<<s4.capacity()<<endl;
	cout<<"\nlength of s4="<<s4.length()<<endl;

	//cout<<strcpy(str1,str2)<<endl;

	return 0;
}