#include<iostream>
using namespace std;

class A{

	
	public:
	A()
	{
		cout<<"A()"<<endl;
	}
		virtual void show()
		{
			cout<<"A is class"<<endl;
		}

		~A()
		{
			cout<<"~A()"<<endl;
		}
};

class B:public A
{
	public:
		B()
		{
			cout<<"B()"<<endl;
		}
	void show()
	{
		cout<<"B is class"<<endl;
	}
	~B()
	{
		cout<<"~B()"<<endl;
	}
};
class C:public A
{
	public:
	void show()
	{
		cout<<"C is class"<<endl;
	}
};

void display(A &a)
{
	a.show();
}


int main()
{

	B *p=new B;
	delete p;

return 0;
}
