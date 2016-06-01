#include<iostream>
using namespace std;

void func(int x)
{

switch(x)
{
case 0:
        {
        int i=10;
        }
case 1:
        int k=2;

}


}

#define p int *
typedef  int * q;






int main()
{
p a,b;

q c,d;

a=&b;
b=1;
cout<<*a<<endl;

c=&b;
d=&b;
cout<<*c<<endl;
cout<<*d<<endl;

}
