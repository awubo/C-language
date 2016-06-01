#include<iostream>
#include<string>
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
		cout<<number<<endl;
	}

};
int Student::number=0;
string Student::address="jiangsu changzhou";
string Student::teacher="jiangfangli";

int main()
{
	Student s("wubo");
	Student s1("wufang");

	s.show();
}
