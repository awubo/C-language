#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<string>
#include<fstream>

#define FILENAME "employee.txt"
using namespace std;
#include<vector>

#ifndef _EMPLOYEE_

#define _EMPLOYEE_


void StringSplit(string s,int len,vector<string>& vec)
{
if(vec.size()>0)
        vec.clear();
int length=s.length();
int start=0;
do
{
//        cout<<"start= "<<start<<"len= "<<len<<"length= "<<length<<endl;
//      cout<<s.substr(start,start+len-1).length()<<endl;
        vec.push_back(s.substr(start,len));
        start+=len;
        length-=len;
}while(length>0);

}

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

        void friend writeFile();
        friend ostream& operator<<(ostream &os,const employee &emp)
        {
                vector<string> vec;
                vector<string>::iterator it_emp;
                StringSplit(emp.resume,20,vec);

                it_emp=vec.begin();
                {
                os<<"------------------------------------------------------------------------------";
                os<<endl;
                os<<"|"<<std::right<<setw(4)<<emp.num;
                os<<"|"<<std::right<<setw(10)<<emp.name;
                os<<"|"<<std::right<<setw(3)<<emp.age;
                os<<"|"<<std::right<<setw(5)<<emp.sex;
                os<<"|"<<std::right<<setw(20)<<emp.id;
                os<<"|"<<std::right<<setw(8)<<setprecision(2)<<setiosflags(ios::fixed|ios::showpoint)<<emp.salary;
                os<<"|"<<std::left<<setw(20)<<*it_emp<<"|"<<endl;
                 }

                for(it_emp++;it_emp!=vec.end();it_emp++)
                {
                os<<"|"<<std::right<<setw(4)<<"";
                os<<"|"<<std::right<<setw(10)<<"";
                os<<"|"<<std::right<<setw(3)<<"";
                os<<"|"<<std::right<<setw(5)<<"";
                os<<"|"<<std::right<<setw(20)<<"";
                os<<"|"<<std::right<<setw(8)<<setprecision(2)<<setiosflags(ios::fixed|ios::showpoint)<<"";
                os<<"|"<<std::left<<setw(20)<<*it_emp<<"|"<<endl;
                }
                return os;
        }
        friend istream& operator>>(istream &is,employee &emp);
        friend ifstream& operator>>(ifstream &ifs,employee &emp);
};

#endif


vector<employee> emp;

istream& operator>>(istream &is,employee &emp)
        {
                cout<<"input num, ex 100 : ";
                is>>emp.num;
                while(is.fail())
                {
                        is.clear();
                        is.sync();
                        cout<<"input num, ex 100 : ";
                        is>>emp.num;
                }
                cout<<"input name, ex wubo : ";
                is.ignore();
                getline(is,emp.name);
                while(is.fail())
                {
                        is.clear();
                        is.sync();
                        cout<<"input name, ex wubo : ";
                        is.ignore();
                        getline(is,emp.name);
                }
                        cout<<"input age : ";
                        is>>emp.age;
                        while(is.fail())
                        {
                                is.clear();
                                is.sync();
                                cout<<"input age : ";
                                is>>emp.age;
                        }

                cout<<"input sex: ";
                is>>emp.sex;
                cout<<"input id: ";
                is>>emp.id;
                cout<<"input salary: ";
                is>>emp.salary;
                cout<<"input resume: ";
                is.ignore();
                getline(is,emp.resume);
                return is;
        }

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
ifstream &operator>>(ifstream &ifs,employee &emp)
{
        char str[1000];
        vector <string>vec;

        int pos=0;
        int npos=0;

        ifs.getline(str,sizeof(str));

        char *p;
        p=strtok(str,"\t");
        while(p)
        {
        vec.push_back(string(p));
        p=strtok(NULL,"\t");
        }
        if(vec.size()!=0)
        {
        emp.num=vec[0];
        emp.name=vec[1];
        emp.age=atoi(vec[2].c_str());
        emp.sex=vec[3];
        emp.id=vec[4];
        emp.salary=atof(vec[5].c_str());
        emp.resume=vec[6];
        } 
        return ifs;
}

void readFile()
{
        employee emp;

        int n=0;
        ifstream file(FILENAME);
        if(!file.is_open())
        {
                cout<<"Error opening file";
                cout<<endl;
                return;
        }
        while(!file.eof())
        {
                file>>emp;
                if(file.fail())
                        break;
                ::emp.push_back(emp);
        }

        file.close();
}

void writeFile()
{

        employee emp;
        ofstream file(FILENAME);
        vector<employee>::iterator it_emp;
        for(it_emp=::emp.begin();it_emp!=::emp.end();it_emp++)
        {
                emp=*it_emp;
                file<<emp.num<<"\t";
                file<<emp.name<<"\t";
                file<<emp.age<<"\t";
                file<<emp.sex<<"\t";
                file<<emp.id<<"\t";
                file<<emp.salary<<"\t";
                file<<emp.resume<<endl;
        }
        file.close();


}


void showEmployee()
{

        vector<employee>::iterator it_emp;
        for(it_emp=::emp.begin();it_emp!=::emp.end();it_emp++)
        {
                cout<<*it_emp;
        }
}


void fun()
{
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
cout<<"1. add employee"<<endl;
cout<<"2. show employee"<<endl;
cout<<"3. delete employee"<<endl;



}
void menu()
{
int n=0;
while(true)
{
        fun();
        cin>>n;
switch(n)
{
        case 1:
                inputEmployee();
                break;
        case 2:
                showEmployee();
                break;
        case 3: 
                break;
        case 4:
                break;
        case 0:
                return ;

}

}

}
