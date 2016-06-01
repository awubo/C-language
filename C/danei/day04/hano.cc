#include<iostream>
using namespace std;

void hano(int n,char a,char b,char c)
{

	cout<<n<<"-";
	if(n==1)
		cout<<a<<"=>"<<c<<endl;
	else
	{
		hano(n-1,a,c,b);
		hano(1,a,b,c);
		hano(n-1,b,a,c);
	
	}
}

int main()
{
	hano(3,'A','B','C');


}
