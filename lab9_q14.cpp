/*
14. [STRING] Create a string and store your name in it. 
Use a loop to print string character by character using the normal index method as well as the pointer method
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char name[]="Arnab";
	//Use a loop to print string character by character using the normal index method
	for(int i=0;name[i]!='\0';i++)
	{
		cout<<name[i];
	}
	cout<<endl;
	
	/*
	int i=0;
	while(name[i]!='\0')
	{
		cout<<name[i++];
	
	}
	cout<<endl;
	*/

	//pointer method
	char* p=name;
	while(*p!='\0')
	{
		cout<<*p++;
	
	}
	cout<<endl;
} 

