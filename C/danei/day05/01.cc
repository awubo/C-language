#include<iostream>
using namespace std;
class A{

	public:
		A()
		{
			cout<<"construction function"<<endl;
		}
		A(A&a)
		{
			cout<<"copy function"<<endl;
		}
		A& operator=(A& a)
		{
			cout<<"&="<<endl;
		}
};

#define N 10
int main()
{
char data[N]={'a','b','c','d','e'};
for(int i=0;i<5;i++)
cout<<data[i]<<endl;
	cout<<"=================="<<endl;
for(int i=0;i<5;i++)
cout<<&data[i]<<endl;

return 0;
}
