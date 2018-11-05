/*
13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method
*/
#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	int* p=&arr[0];
	cout<< "enter 10 integers"<<endl;
	
	for(int x=0;x<10;x++)
	{
		cin>>arr[x];
	}
	
	//print array using the normal index method
	for(int x=0;x<10;x++)
	{
		cout<<arr[x]<<",";
	}
	cout<<endl;
	
	//print array using the pointer method
	for(int x=0;x<10;x++)
	{
		cout<<*(p+x)<<",";
	}
	cout<<endl;
	return 0;
}
