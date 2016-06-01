#include<iostream>

using namespace std;

void bin(int n)
{
	if(n/2==0)
		return; 
	else
	{
		bin(n/2);
		cout<<n%2;
	}
}


int main()
{
	bin(10);

}
