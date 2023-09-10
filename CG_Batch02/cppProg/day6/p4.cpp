/* 
demo on hybrid inheritence
*/

#include <iostream>

using namespace std;


//BC1
class Student{

protected:
	int rno;
public:
	void setRNo(int i) { rno = i; }
	int getRNo(){ return rno; }
	void printRNo() { cout<<"\nRNo: "<<rno<<endl; }
};


//DC1
class Test: public Student
{
protected:
	float s1, s2;
public:
	void setMarks(int x, int y) { s1 = x; s2 = y; }
	void printMarks() { cout<<"\nSub 1: "<<s1<<"\nSub 2: "<<s2<<endl; }
};

//BC 2
class Sports
{
protected:
	float score;
public:
	void setScore(int s) { score = s; }
	void printScore() {
		cout<<"\nSports Score: "<<score<<endl;
	}
};

class Result: public Test, public Sports
{
private:
	float total;
public:
	void display()
	{
		total = s1 + s2 + score;
		printRNo();
		printMarks();
		printScore();
		cout<<"\nTotal: "<<total<<endl;

	}
};

int main()
{
	Result R;
	R.setRNo(1001);
	R.setMarks(66,77);
	R.setScore(88);
	R.display();
	return 0;
}