#include<iostream>
using namespace std;
class Animal{

public:
	Animal(string name="Animal",int age=0)
	{
		set(name,age);
	}
	void setAge(int age)
	{
		this->age=age;
	}

	void setName(string name)
	{
		this->name=name;
	}
	void set(string name,int age)
	{

		setAge(age);
		setName(name);
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	void show()
	{
		cout<<"Name= "<<name<<"\tage= "<<age<<endl;
	}
private:
	string name;
	int age;
	int weight;
};


class Bird:public Animal{

};

union
{
        int i;
        char a[4];
}*p,u;


int main()
{
        p=&u;
        p->a[0]=0x39;
        p->a[1]=0x38;
        p->a[2]=0x37;
        p->a[3]=0x36;
        cout<<hex<<p->i<<endl;
        return 0;
}
