#include<iostream>
using namespace std;

class Ghost{
string name;
int age;
	public:
Ghost(string name="Test",int age=0)
{
	this->name=name;
	this->age=age;
}

Ghost(Ghost &g)
{
	name=g.name;
	age=g.age;
}
void show()
{
	cout<<name<<"\t"<<age<<endl;
}
~Ghost()
{
	cout<<"~Ghost"<<endl;
}
};


int main()
{
	Ghost g("xiaoqian",22);
	g.show();
	cout<<"-------------"<<endl;
	Ghost g1;
	g1.show();
	g1=g;
	g1.show();
	return 0;
}
