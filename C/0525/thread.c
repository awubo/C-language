#include<pthread.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
using namespace std;

struct stu{
char name[20];
int age;

}s;

void *thread(void *argc)
{
int i;
struct stu *p=(struct stu *)argc;

cout<<p->name<<"\t"<<p->age<<endl;
for(i=0;i<4;i++)
{
        cout<<"this is a pthread"<<endl;
        sleep(3);

}
return (void*)0;

}


void * show(void *p)
{
cout<<"+";
}

int main()
{

pthread_t id;
int i,ret;
ret=pthread_create(&id,NULL,show,NULL);

if(ret!=0)
{
        cout<<"create pthread error"<<endl;
        exit(1);
}
for(i=0;i<10;i++)
{
        sleep(1);
}

pthread_join(id,NULL);
return 0;


}
