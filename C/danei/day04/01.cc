#include<iostream>
using namespace std;

int main()
{

	for(int i=1,j=1;i<=9&&j<=9;i++)
	{
		cout<<i<<"*"<<j<<"="<<i*j;
		if(i<j)
			cout<<"  ";
		else
			{
				cout<<endl;
				j++;
				i=0;
			}
	
	}










}
