#include<iostream>
using namespace std;


int main()
{


int data[]={1,2,3,4,5};


for(int i=0,*p=data;i<5;i++)
	cout<<*p++<<endl;

 
int *q=new int[10];
for(int i=0;i<10;i++)
cout<<*q++<<endl;
delete[] q;
}
