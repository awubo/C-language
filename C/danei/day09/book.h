#include<string.h>
#include<iostream>

using namespace std;


#ifndef _BOOK_H_

#define _BOOK_H_
class book
{
	string name;
	int num;
	float price;


	public:
	book()
	{
		name="noname";
		num=0;
		price=0.0;
	}
	book(string name,int num,float price):name(name),num(num),price(price)
	{
			
	}
	void set(string name,int num,float price)
	{
		this->name=name;
		this->num=num;
		this->price=price;
	}
	void show()
	{
		cout<<"name=  "<<name<<"\tnum=  "<<num<<"\tprice=  "<<price<<endl;
	}
};

#endif
