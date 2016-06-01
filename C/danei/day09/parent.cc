#include<iostream>

using namespace std;

class parent
{
int mp;

	public:
	parent():mp(0)
	{
		cout<<"parent() "<<mp<<endl;
	}

	parent(int d):mp(d)
	{
		cout<<"parent(int d) " <<mp<<endl;
	}
	~parent()
	{
		cout<<"~parent()"<<endl;
	}

};


class child:public parent 
{
	double mc;
	public:
	child():mc(0.0),parent()
	{
		cout<<"child "<<endl;
	}

	child(double d,double mp):mc(d),parent()
	{
		cout<<"child(doubel d,double mp)"<<endl;
	}
};
int main()
{
	parent *a=new parent(10);
	cout<<"===="<<endl;
}
