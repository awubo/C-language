#include<iostream>

using namespace std;
#include<string.h>
void t(const char * const p,char ch[])
{

	cout<<sizeof(p)<<endl;
	cout<<sizeof(p)<<endl;
	cout<<strlen(p)<<endl;
	cout<<strlen(ch)<<endl;
}


void a(const char &ch)
{

}

void show(int &n)
{
	cout<<n<<endl;
	n++;
}

void inc(int &n)
{
	++n;
}

void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}


void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;

}
int main(int argc,char *argv[])
{

	int a=100;
	int b=200;
	swap(&a,&b);
	cout<<a<<"------"<<b<<endl;
	swap(a,b);
	cout<<a<<"------"<<b<<endl;
}
