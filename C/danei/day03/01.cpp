#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int n=5;

	long t=time(NULL);
	while(n>0)
	{

		t+=1;
	
		while(time(NULL)<t);
			cout<<"."<<endl;


		n--;
	
	}



}
