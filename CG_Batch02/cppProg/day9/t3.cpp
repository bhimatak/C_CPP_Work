#include <iostream>
#include <string>
using namespace std;

template <class T>
T minimum(T arr[], int Cap)
{
	T smallest = arr[0];
	for(int i=1;i<Cap;i++)
	{
		if(arr[i]<smallest)
			smallest = arr[i];
	}

	return smallest;
}

int main()
{
	int a[] = {30, 12, 45, 4, 55, 8, 22};
	float f[] = {30.3, 12.2, 45.5, 44.4, 55.6, 8.2, 22.7};
	string str[] = {"Hanif","avanish", "Deepankar", "Rubi", "Sanjay","Ruthuja"}; 

	cout<<"\nMinimum of the list of array of Integers is: "<<minimum<int>(a,(sizeof(a)/sizeof(a[0])))<<endl;
	cout<<"\nMinimum of the list of array of float is: "<<minimum<float>(f,(sizeof(f)/sizeof(f[0])))<<endl;
	cout<<"\nMinimum of the list of array of strings is: "<<minimum<string>(str,(sizeof(str)/sizeof(str[0])))<<endl;

	return 0;

}