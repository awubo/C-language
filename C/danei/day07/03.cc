#include<iostream>

using namespace std;


int main()
{

	int *data[5];
	for(int i=0;i<5;i++)
	{
		data[i]=new int[7];
		cout<<data[i]<<endl;
	
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			data[i][j]=i+j;
			cout<<&data[i][j]<<"  ";
		}

		cout<<endl;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			cout<<data[i][j]<<" ";
		}
		cout<<"\n";

	}
/*
	for(int i=0;i<5;i++)
	 delete[] data[i];
*/
	int n;
	cin>>n;
	 }
