#include <iostream>
#include <algorithm> //copy() method
#include <vector>
#include <iterator> //back_inserter()

using namespace std;

int main()
{
	vector <int>v1;

	for(int i=1;i<=5;i++){
		v1.push_back(i);
		int *ptr = v1.data();
		for(int j=1;j<=i;j++,ptr++){
			
			cout<<j<<" element of vector using pointer: "<<*ptr<<" add="<<ptr<<endl;
		}
	}

	for(auto it : v1)
		cout<<it<<" ";
	cout<<endl;
	for(auto ir = v1.rbegin(); ir!= v1.rend();ir++)
		cout<<*ir<<" ";
	cout<<endl;
	cout<<v1.front()<<endl;
	cout<<"Size: "<<v1.size()<<endl;
	cout<<"Capacity: "<<v1.capacity()<<endl;

	//v1.resize(3);

	cout<<"Size: "<<v1.size()<<endl;
	cout<<"Capacity: "<<v1.capacity()<<endl;

	if(v1.empty() == false)
		cout<<"Vector is not empty"<<endl;
	else
		cout<<"Vector is empty"<<endl;

	//Shrinks the vector
	//v1.shrink_to_fit();

	for(auto it = v1.begin(); it != v1.end();it++)
		cout<<*it<<" ";
	cout<<endl;


	//data() return a direct pointer to the mem array used internally by the 
	// vector to store its owned elements

	int *ptr = v1.data();
	cout<<"\n1 element of vector using pointer: "<<*ptr<<" add="<<ptr<<endl;
	ptr++;
	cout<<"\n2 element of vector using pointer: "<<*ptr<<" add="<<ptr<<endl;
	ptr++;
	cout<<"\n3 element of vector using pointer: "<<*ptr<<" add="<<ptr<<endl;
	ptr++;
	cout<<"\n4 element of vector using pointer: "<<*ptr<<" add="<<ptr<<endl;
	ptr++;
	cout<<"\n5 element of vector using pointer: "<<*ptr<<" add="<<ptr<<endl;
	//ptr++;
	//cout<<"\n6 element of vector using pointer: "<<*ptr<<" add="<<ptr<<endl;

	//emplace => it extends vector container by inserting new elemnt at some position

	//insert in the begining with value 5
	v1.emplace(v1.begin()+3, 15);

	//emplace_back() => insert values at the end of vector

	for(auto it = v1.begin(); it != v1.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	v1.emplace_back(20);
	for(auto it = v1.begin(); it != v1.end();it++)
		cout<<*it<<" ";
	cout<<endl;


	vector<int>v2;
	for(int i=100;i<105;i++)
		v2.push_back(i);

	cout<<"v2 values"<<endl;
	for(auto it = v2.begin(); it != v2.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	v1.swap(v2);

	cout<<"v1 after swap values"<<endl;
	for(auto it = v1.begin(); it != v1.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	cout<<"v2 after swap values"<<endl;
	for(auto it = v2.begin(); it != v2.end();it++)
		cout<<*it<<" ";
	cout<<endl;


	vector <int> v3;

	for(int it=0;it<v2.size();it++)
		v3.push_back(v2.at(it));

	cout<<"v3 values"<<endl;
	for(auto it = v3.begin(); it != v3.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	v2[1] = 10000;
	cout<<v2[1]<<endl;
	cout<<v3[1]<<endl;

	vector<int> v4;

	v4 = v3;

	cout<<"v4 values"<<endl;
	for(auto it = v4.begin(); it != v4.end();it++)
		cout<<*it<<" ";
	cout<<endl;


	v3[1] = 10001;
	cout<<v3[1]<<endl;
	cout<<v4[1]<<endl;


	vector<int> v5(v4);

	cout<<"v5 values"<<endl;
	for(auto it = v5.begin(); it != v5.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	v4[1] = 10002;
	cout<<v4[1]<<endl;
	cout<<v5[1]<<endl;


	//copy()=>  copy the content of one obj to another obj
	//algorithm header file
	
	vector<int> v6;
	copy(v5.begin(),v5.end()-2,back_inserter(v6));


	cout<<"v6 values"<<endl;
	for(auto it = v6.begin(); it != v6.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	vector<int> v7;
	v7.assign(v6.begin()+2,v6.end());


	cout<<"v7 values"<<endl;
	for(auto it = v7.begin(); it != v7.end();it++)
		cout<<*it<<" ";
	cout<<endl;


	return 0;
}