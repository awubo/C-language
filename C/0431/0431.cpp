#include<iostream>
using namespace std;

class Animal{
	string name;

	public:
	Animal(string name)
	{
		this->name=name;
	}
		
	void setName(string name)
	{
		this->name=name;
	}

	string getName()
	{
		return name;
	}
	void show()
	{
		cout<<name<<endl;
	}

};

class Bird:public Animal
{
	public:
		Bird(string name):Animal(name)
		{
		}
};

class Fish:public Animal{
	public:
		Fish(string name):Animal(name)
	{
	}
};

class Ququ:public Animal{
	public:
		Ququ(string name):Animal(name)
	{
	}
};

class Women{
	public:
	void showLove(Animal* A)
		{
			A->show();
		}
};


int main()
{

	Bird b("bird");
	Ququ q("ququ");
	Fish f("fish");

	Women W;
	W.showLove(&b);
	W.showLove(&q);
	W.showLove(&f);

	return 0;
}
