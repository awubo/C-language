#include "book.h"

int main()
{

	int fenzi=6000;
	int fenmu=12000;

	int n,m;
	n=10,m=20;
	int min;
	if(fenzi>=fenmu)
		 min=fenmu;
	else
		 min=fenzi;
	for(int i=min;i>2;i--)
	{
		if(fenzi%i==0&&fenmu%i==0)
		{
			cout<<i<<endl;
			break;
		}
	}
}
