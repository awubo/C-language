#include<iostream>
#include<string>
using namespace std;

template<class T> T GetMax(T a,T b)
{
	T result;
	result=(a>b)?a:b;
	return result;
}

int main()
{

	string a="wubo";
	string b="wufang";

	cout<<GetMax(a,b)<<endl;
}
