//2016年3月12日20:25:08
//
//P.41

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include<iostream>

class String {
	char *p;
	int length;
	public:
	int find(char c)
	{
		int i;
		for(i=0;i<length;i++)
			if(c==p[i])
				return i;
		return -1;
	}

	bool empty()
	{
		bool b=true;
		for(int i=0;i<length;i++)
			if(p[i]!='\0')
				b=false;
		return b;
	}
	String& clear()
	{
		for(int i=0;i<length;i++)
			this->p[i]='\0';
		
		return *this;
	}
	String(int number)
	{
		p=new char[number+1];
		memset(p,0,number);
		p[number+1]='\0';
		length=number;
	}
	char* c_str()
	{
		return this->p;
	}
	String& operator=(char *p)
	{
		delete[] this->p;
		this->length=strlen(p);
		this->p=new char[this->length+1];
		for(int i=0;i<this->length;i++)
			this->p[i]=p[i];
		this->p[this->length]='\0';
		return *this;
	}
	String();
	String(char *ch);
	bool operator==(const String &s)
	{
		if(strcmp(p,s.p)==0)
			return true;
		else
			return false;
	}
	int len()
	{	
		return length;
	}
	char &operator[](int n)
	{
		//return *(p+n);
		return p[n];
	}
	String operator+(const String &s)
	{
		char *ch;
		int len=length+s.length;
		ch=new char[len+1];
		int i=0;
		for(i=0;i<this->length;i++)
			ch[i]=this->p[i];
		int j=0;
		for(j=0;j<s.length;j++,i++)
			ch[i]=s.p[j];
		ch[len+1]='\0';
		return String(ch);
	}
	friend istream& operator>>(istream &in,String &s)
	{
		/*
		string S;
		getline(in,S);
		strcpy(s.p,S.c_str());
		s.length=strlen(s.p);
		return in;
	*/

		gets(s.p);
		s.length=strlen(s.p);
		return in;

		//两个
		}
	friend ostream& operator<<(ostream &out,const String &S)
	{
		out<<S.p<<":"<<S.length;
		return out;
	}
	~String()
	{
		cout<<"~String()"<<endl;
		if(length==1)
		delete p;
		else
		delete[] p;
	}
	String(const String &s)
	{
		
		length=s.length;
		p=new char[length+1];
		for(int i=0;i<length;i++)
			p[i]=s.p[i];
		p[length+1]='\0';
	}
	String &operator=(const String &s)
	{
		if(*this==s)
			return *this;
		else
		{
		delete []p;
		p=new char[s.length+1];
		length=s.length;

		for(int i=0;i<s.length;i++)
			p[i]=s.p[i];
		p[s.length+1]='\0';
		return *this;
		}
	}
	/*
	String &operator=(char *ch)
	{
		delete []p;
		p=new char[strlen(ch)+1];
		for(int i=0;i<strlen(ch);i++)
			p[i]=ch[i];
		p[strlen(ch)]='\0';
		length=strlen(ch);
		p[length+1]='\0';
		return *this;
	}
	*/
};

String::String(char *ch)
{	
	int i=0;
	length=strlen(ch);
	p=new char[length+1];
	for(i=0;i<length;i++)
	p[i]=ch[i];
	p[i]='\0';
}
String::String()
{
	length=255;
	p=new char[256];
	p[255]='\0';
} 

int main()
{
	String s;

	cout<<s.clear()<<endl;
	cout<<s.empty()<<endl;

}
