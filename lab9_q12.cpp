/*
12. Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this. 
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
Assign values a=2 and b = 3. Print the values of a, b and *p. 
Now point p to b. Print the values of a, b and *p.
*/#include <iostream>
using namespace std;

int main()
{
	//declare two variables a,b and a pointer variable p (all integer type)
	int a,b;
	int* p;
	
	p=&a;//Point p to a
	
	b=*p;//And store the value pointed by p in b
	
	cout<<"the value of a= "<<a<<endl;
	cout<<"the value of b= "<<b<<endl;
	cout<<"the value of *p= "<<*p<<endl;
	
	//Assign values a=2 and b = 3
	a=2;
	b=3;
	
	// Print the values of a, b and *p. 
	cout<<"the value of a= "<<a<<endl;
	cout<<"the value of b= "<<b<<endl;
	cout<<"the value of *p= "<<*p<<endl;
	
	//Now point p to b
	p=&b;
	
	//Print the values of a, b and *p.
	cout<<"the value of a= "<<a<<endl;
	cout<<"the value of b= "<<b<<endl;
	cout<<"the value of *p= "<<*p<<endl;
	
	return 0;
}
