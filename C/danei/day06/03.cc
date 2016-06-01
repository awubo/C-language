#include<iostream>
using namespace std;

int main()
{

	int data[3]={1,2,3};
	int (*p)[3];
	p=&data;
	cout<<(*p)[0]<<endl;
	cout<<(*p)[1]<<endl;
	cout<<(*p)[2]<<endl;


	int *D[3];
	int a=100;
	int b=200;
	int c=300;
	D[0]=&a;
	D[1]=&b;
	D[2]=&c;
	cout<<*D[0]<<endl;
	cout<<*D[1]<<endl;
	cout<<*D[2]<<endl;


}
