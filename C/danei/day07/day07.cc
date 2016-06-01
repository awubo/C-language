#include<iostream>
using namespace std;


void reset(int a[],int n)
{
	for(int i=0;i<n;i++)
		a[i]=0;
}

void input(int a[],int n)
{
	cin>>a[n];
}
void ouput(int a[],int n)
{
	cout<<a[n]<<endl;
}
void sort(int a[],int n)
{
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<"a["<<i<<"]"<<a[i]<<endl;
}

int main()
{
void (*func)(int a[],int n)=NULL;
int a[]={1,2,3,4,5};
func=display;
func(a,5);
cout<<"after reset ---------------"<<endl;
func=reset;
func(a,5);
func=display;
func(a,5);
}
