#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ifstream in("01test.cpp");
	char ch[80];
	string S;
	while(in)
	{
		in.getline(ch,80);
		cout<<ch<<endl;
		/*
		getline(in,S);	
		cout<<S<<endl;
		*/
	}
	in.close();
	return 0;
}
