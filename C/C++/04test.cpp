#include<iostream>
using namespace std;

class A{
	public:
		int a;
		int b;
		void show()
		{
			cout<<"this=  "<<this<<endl;
		}
		~A()
		{
			cout<<"~A()"<<endl;
		}
};


class B{
	public:
		int a;
		int b;
		void show()
		{
			cout<<"this=  "<<this<<endl;
		}
		~B()
		{
			cout<<"~B()"<<endl;
		}
}; 


class C{
	public:
		int a;
		int b;
		void show()
		{
			cout<<"this=  "<<this<<endl;
		}
		~C()
		{
			cout<<"~C()"<<endl;
		}
}; 


class D:public A,public B,public C  
{

	public:
		void show()
		{
			cout<<"this=  "<<this<<endl;
		}

		~D()
		{
			cout<<"~D()"<<endl;
		}
}; 
int main()  
{
	D d;
	d.show();
	d.A::show();
	d.B::show();
	d.C::show();
	return 0;
}
