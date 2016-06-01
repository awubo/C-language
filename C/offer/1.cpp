#include <iostream>
#include <vector>
#include<string.h>
using namespace std;

string change(string s);

int main() 
{

	string s="http://www.zhidao.baidu.com";
	cout<<s<<endl;
	cout<<change(s);
}
string change(string s)
{
string t;

	vector<string>T;
	int i=0;
	int j=0;
	char ch;
	do{
		i=s.find('.',i);
		string t1=s.substr(j,i-j);
		i=i+1;
		j=i;
		T.push_back(t1);
	}while(i!=0);

	for(i=T.size()-1;i>=0;i--)
	{
		t.append(T[i]);
		if(i!=0)
			t.append("\\");
	}


	return t;
}
