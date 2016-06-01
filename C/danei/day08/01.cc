#include<iostream>

using namespace std;

struct A
{
	int n;
	char ch;
	
};

int main(int argc ,char *argv[])
{
	A a;
A *p= &a;
cout<<p->n<<endl;


}
