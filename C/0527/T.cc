#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



typedef struct Employee {
char name[256];
int age;
double salary;
}EMP;
//以二进制方式写bin.dat文件
void binwrite(void){
char name[256]="张飞";
int age=30;
double salary=20000.5;
EMP emp={"赵云",20,10000.5};
int fd=open("bin.dat",O_WRONLY|O_CREAT);
if(fd==-1){
perror("open");
exit (-1);//退出进程
}
write(fd,name,sizeof(name));
write(fd,&age,sizeof(age));
write(fd,&salary,sizeof(salary));
write(fd,&emp,sizeof(emp));
close(fd);
}
//以二进制方式读bin.dat文件
void binread(void){
char name[256];
int age;
double salary;
EMP emp;
int fd=open("bin.dat",O_RDONLY);
if(fd==-1){
perror("read");
exit (-1);
}
read(fd,name,sizeof(name));
read(fd,&age,sizeof(age));
read(fd,&salary,sizeof(salary));
read(fd,&emp,sizeof(emp));


printf("%s %d %g\n",name,age,salary);
printf("%s %d %g\n",emp.name,emp.age,emp.salary);
close(fd);
}


int main(void){
binwrite();
binread();
return 0;
}
