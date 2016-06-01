#include<iostream>
using namespace std;
#include"02test.h"

CStr::CStr(CStr const &s)
{
	strcpy(this.sData,s.get());
}
void CStr::cpy(char *s)
{
	strcpy(sData,s);
}

void CStr::cat(char *s)
{
	strcat(sData,s);
}

CStr::CStr(char *s)
{
	strcpy(sData,s);
}

char* CStr::get(void)
{
	return sData;
}

int CStr::getlength(void)
{
	return strlen(sData);	
}

int main()
{

	CStr s="wubo";

	CStr s1="";
//	s1=s;
	cout<<s.get()<<endl;
	cout<<s.getlength()<<endl;
	s.cat(" is my name");
	cout<<s.get()<<endl;
	return 0;
}
