#include<iostream>
#include<fstream>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

int main()
{
	string s;
	string name;

ifstream in("1.cpp");
while(getline(in,s))
{
	sleep(1.8);
cout<<s<<endl;
}
return 0;
}
