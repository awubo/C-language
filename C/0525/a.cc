#include<iostream>
#include<string.h>

using namespace std;

struct stu
{
        char name[20];
        int age;

};
int main()
{

        struct stu s;
        strcpy(s.name,"wubo");
        s.age=10;

}
