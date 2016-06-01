#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
int a=1233435454;
double b=3.45;

cout<<setw(10)<<a<<endl;
cout<<setfill('*')<<setw(10)<<b<<endl;
cout<<setw(8)<<b<<endl;
cout<<setw(6)<<b<<endl;
cout<<setw(4)<<b<<endl;

}
