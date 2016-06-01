#include<iostream>
#include<string.h>
using namespace std;


int main()
{
char a[100];

int i=0;

cin.getline(a,100);

int n=strlen(a);
for(;i<n;i++)
{
if(a[i]==' ')
        cout<<"kongke"<<endl;
else if(a[i]!=' ')
        cout<<"zifu"<<endl;

}

}
