#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
ifstream inf("ok.txt");
string s;
while(inf!=0)
{
	getline(inf,s,';');
	if(s=="\n")
		break;
	cout<<s;
}


return 0;
}
