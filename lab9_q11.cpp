#include<iostream>
using namespace std;

int main()
{
	int a;
	long b;
	char c;
	double d;
	float e;
	
	int* pa=&a;
	long* pb=&b;
	char* pc=&c;
	double* pd=&d;
	float* pe=&e;
	
	cout<<"size of int= "<<sizeof(a)<<endl;
	cout<<"size of long= "<<sizeof(b)<<endl;
	cout<<"size of char= "<<sizeof(c)<<endl;
	cout<<"size of double= "<<sizeof(d)<<endl;
	cout<<"size of float= "<<sizeof(e)<<endl;
	cout<<"size of pointer to int= "<<sizeof(pa)<<endl;
	cout<<"size of ointer to long= "<<sizeof(pb)<<endl;
	cout<<"size of pointer to char= "<<sizeof(pc)<<endl;
	cout<<"size of pointer to double= "<<sizeof(pd)<<endl;
	cout<<"size of pointer to float= "<<sizeof(pe)<<endl;
	
	return 0;
}
