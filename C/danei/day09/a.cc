#include<iostream>

using namespace std;

void fun(const char **a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;

}
int main()
{

	const char *a[]={"wubo","wufang","wusiyuan","wusirui"};

	fun(a,4);

}
