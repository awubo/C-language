#include<iostream>
#define N 2
using namespace std;

void show(int n)
{
	if(n==0)
		return;
	else
	{
		show(n/N);
	}
	cout<<n%N<<":";
}

int main()
{
	int n;
	cin>>n;
	show(n);

}
