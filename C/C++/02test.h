#include<iostream>
using namespace std;
#include<string>

class A{
	private:
		string name;
	protected:
		int age;
	public:
		void setName(string name)
		{
			this->name=name;
		}
		void setAge(int age)
		{
			this->age=age;
		}
		void show()
		{
			cout<<"name= "<<name<<"\t"<<"age= "<<age<<endl;
		}
		string getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
};
class B :public A
{
	private:
		int weight;
	protected:
		int tall;
	public:
		void setWeight(int weight)
		{
			this->weight=weight;
		}
		void setTall(int tall)
		{
			this->tall=tall;
		}
		int getWeight()
		{
			return weight;
		}
		int getTall()
		{
			return tall;
		}
	void visit(int age,string name)
	{
		setName(name);
		setAge(age);
		cout<<"age=  "<<getAge()<<endl;
		cout<<"name=  "<<getName()<<endl;
	}

};

class C:private B
{

	public:
		void visit2(int age)
		{
			this->age=age;
			setAge(age);

			cout<<"age=  "<<age<<endl;
		}
};
