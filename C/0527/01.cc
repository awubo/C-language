#include<unistd.h>
#include<fcntl.h>
#include<iostream>
using namespace std;

struct EMP
{
char name[256];
int age;
double salary;
};

EMP e={"wubo",40,2000.50};

void writeFile()
{
        char name[256]="wubo";
        double salary=20000.50;
        int fd=open("T.txt",O_WRONLY|O_CREAT);
write(fd,&e,sizeof(e));
write(fd,&salary,sizeof(salary));
write(fd,name,sizeof(name));

        close(fd);
}

void readFile()
{
        EMP e;
        int fd=open("T.txt",O_RDONLY);
        int size=read(fd,&e,sizeof(e));
        double salary;
        char name[256];
        size=read(fd,&salary,sizeof(salary));
        size=read(fd,name,sizeof(name));
        cout<<e.name<<"\t"<<e.age<<"\t"<<e.salary<<endl;
        cout<<salary<<endl;
        cout<<name<<endl;
        close(fd);
}
main()
{

        writeFile();
        readFile();


}
