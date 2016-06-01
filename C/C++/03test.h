#include<iostream>

#include<vector>
using namespace std;
namespace Test{
class Ghost{
	
public:
    ~Ghost()
    {
        cout<<"~Ghost()"<<endl;
    }
	Ghost(string name="",int age=0)
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
};
}

class my_vector{
	vector<int> v;
	public:
	void insert(int n)
	{
		v.push_back(n);
	}
	int largest()
	{
		int r=0;
		for(int i=0;i<v.size();i++)
			r=(r,v[i]);
		return r;
	}
	void show()
	{
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<"\t";
	}
};
