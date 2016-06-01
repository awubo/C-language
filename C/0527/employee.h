#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

#define FILENAME "employee.txt"
using namespace std;
#include<vector>

#ifndef _EMPLOYEE_

#define _EMPLOYEE_
class employee
{
string num;
string name;
int age;
string sex;
string id;
double salary;
string resume;
        public:
        employee(string num="",string name="",\
        int age=0,string sex="",string id="",double salary=0,string resume="")\
        :num(num),name(name),age(age),sex(sex),id(id),salary(salary),resume(resume)
        {}
        employee(const employee &emp)
        {
                num=emp.num;
                name=emp.name;
                age=emp.age;
                sex=emp.sex;
                id=emp.id;
                salary=emp.salary;
                resume=emp.resume;
        }

        string getNum(){return num;}
        string getName(){return name;}
        int getAge(){return age;}
        string getSex(){return sex;}
        string getId(){return id;}
        double getSalary(){return salary;}
        string getResume(){return resume;}

        friend ostream& operator<<(ostream &os,const employee &emp)
        {
                os<<"----------------------------------------------------------------------------";
                os<<endl;
                os<<"|"<<std::right<<setw(4)<<emp.num;
                os<<"|"<<std::right<<setw(10)<<emp.name;
                os<<"|"<<std::right<<setw(3)<<emp.age;
                os<<"|"<<std::right<<setw(5)<<emp.sex;
                os<<"|"<<std::right<<setw(20)<<emp.id;
                os<<"|"<<std::right<<setw(8)<<setprecision(2)<<setiosflags(ios::fixed|ios::showpoint)<<emp.salary;
                os<<"|"<<std::right<<setw(20)<<emp.resume<<"|";
                return os;
        }
        friend istream& operator>>(istream &os,employee &emp)
        {
                cout<<"input num: ";
                os>>emp.num;
                cout<<"input name: ";
                os>>emp.name;
                cout<<"input age: ";
                os>>emp.age;
                cout<<"input sex: ";
                os>>emp.sex;
                cout<<"input id: ";
                os>>emp.id;
                cout<<"input salary: ";
                os>>emp.salary;
                cout<<"input resume: ";
                os>>emp.resume;
                return os;
        }
};

#endif

vector<employee> emp;

void inputEmployee(void)
{
        employee emp;
        string ch;
        do{
                cin>>emp;
                ::emp.push_back(emp);
                cout<<"are you continue? input Q,exit "<<endl;
                cin>>ch;
        }while(ch!="Q");
}
void readFile()
{
        fstream file(FILENAME);
        while(!file)
        {
                
        
        }

}
void writeFile()
{

        fstream file(FILENAME);
        vector<employee>::iterator it_emp;
        for(it_emp=emp.begin();it_emp!=emp.end();it_emp++)
        {
        

        }


}


void showEmployee()
{

        vector<employee>::iterator it_emp;
        for(it_emp=::emp.begin();it_emp!=::emp.end();it_emp++)
        {
                cout<<*it_emp<<endl;
        }
}
