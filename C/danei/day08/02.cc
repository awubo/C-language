#include<iostream>
using namespace std;

class A{
int n;

	public:
	A()
	{
		cout<<"A()"<<endl;
	}
	~A()
	{
		cout<<"~A()"<<endl;

	}

};



class B{

	class A a;
	public:
	B()
	{
		cout<<"B()"<<endl;
	}
	~B()
	{
		cout<<"~B()"<<endl;

	}

};


int main()
{
	B b;

}
