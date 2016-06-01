#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
string name;
static string address;
static string teacher;
static int number;
	public:
	Student(const string &name)
	{
		this->name=name;
		number++;
	}
	void show()
	{
		cout<<name<<"\t"<<teacher<<"\t"<<address<<endl;
	}

};
int Student::number=0;
string Student::address="jiangsu changzhou";
string Student::teacher="jiangfangli";

int main()
{
	Student s("wubo");
	Student s1("wufang");

	vector <Student> v;
	v.push_back(s);
	v.push_back(s1);
	
	for(int i=0;i<2;i++)
		v[i].show();

}
