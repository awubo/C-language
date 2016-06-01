#include<iostream>

using namespace std;


struct Student{
char name[20];
bool gender;
int age;
char address[255];
double score;

};

void show(Student s)
{
	cout<<"name:"<<s.name<<endl;
	cout<<"sex:"<<s.gender<<endl;
	cout<<"age:"<<s.age<<endl;
	cout<<"address:"<<s.address<<endl;
	cout<<"score:"<<s.score<<endl;
	cout<<"------------------"<<endl;
}

void set(Student *s)
{
	

}
int main()
{
	struct Student s[3]=
	{
		{"gaosu",true,20,"beijing",90},
		{"zhangxiaoliang",false,21,"changsha",91},
		{"wenxiu",false,22,"nanjin",89}
	
	
	};

	for(int i=0;i<3;i++)
		show(s[i]);

}
