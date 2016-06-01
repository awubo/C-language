#include<iostream>

using namespace std;


class A{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
		A()
		{
			a=0;
			b=0;
			c=0;
		}
	protected:
		void show()
		{
		}

};

class B: public A 
{
	public:
	void fun()
	{
		show();
		cout<<b<<c<<endl;
	}
};


int main()
{
	A a;
	B b;
	b.c=10;
	b.fun();


}
