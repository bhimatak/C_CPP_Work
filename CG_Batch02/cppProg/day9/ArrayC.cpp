//demo on Array class

#include <iostream>

using namespace std;

const int MAX=10;

class Array
{
private:
	int a[MAX];
public:
	void read(){
		for (int i=0;i<MAX;i++){
			cout<<"\nEnter item ["<<i<<"]";
			cin>>a[i];
		}
	}

	void show()
	{
		cout<<"\n=============Array Elements=========="<<endl;
		for(int i=0;i<MAX;i++)
			cout<<a[i]<<" ";
		cout<<"\n====================================="<<endl;
		cout<<endl;
	}

	//implementation of algorithms

	void reversed(){
		int t;
		for(int i=MAX-1, j=0;j<i;i--,j++)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}

	}

	void sort_it()
	{
		//selection sort
		for(int i=0;i<MAX-1;i++){
			int min = i; 
			for(int j=i+1;j<MAX;j++)
			{
				if(a[j]<a[min])
					min = j;
			}
			if(i != min)
			{
				int t=a[i];
				a[i] = a[min];
				a[min] = t;
			}
		}
	}
};


int main()
{
	Array a;
	a.read();
	cout<<"\nOriginal Elements\n";
	a.show();
	cout<<"\nAfter Reversing\n";
	a.reversed();
	a.show();
	cout<<"\nAfter Sorting using selection sort"<<endl;
	a.sort_it();
	a.show();

	return 0;
}
