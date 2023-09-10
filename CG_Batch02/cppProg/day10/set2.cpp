#include <iostream>
#include <set>

using namespace std;

class Person{
public:
	int age;
	string name;

	bool operator < (const Person &rhs) const { return age<rhs.age; }
	bool operator > (const Person &rhs) const { return age>rhs.age; }

};

int main()
{
<<<<<<< HEAD
	set<Person,greater<Person>> Ps = {{30,"Mahima"}, {25,"Hanif"}, {23,"Parthiba"},{26,"Ruthuja"}};
=======
	//desending order
	set<Person,greater<Person>> Ps = {{30,"Mahima"}, {25,"Hanif"}, {23,"Parthiba"},{26,"Ruthuja"}};
	// asscending order
	//set<Person,less<Person>> Ps = {{30,"Mahima"}, {25,"Hanif"}, {23,"Parthiba"},{26,"Ruthuja"}};
	
>>>>>>> 43556312ce0ba092f1b14ba0901e255beb41600f
	for(const auto &e : Ps)
		cout<<e.age<<"\t"<<e.name<<endl;
	cout<<endl;
	return 0;
}