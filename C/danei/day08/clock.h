#include<time.h>
#include<iostream>

using namespace std;

#ifndef _CLOCK_H_
#define _CLOCK_H_
struct Time
{

	int hour;
	int minute;
	int second;
};


void setTime(Time &T,int h,int m,int s);
void display(const Time &T);
void tick(Time &T);
void *run(void *t);

#endif

void setTime(Time &t,int h,int m,int s)
{
	if(h<0||h>60)
		t.hour=0;
	else
		t.hour=h;
	if(m<0||m>60)
		t.minute=0;
	else
		t.minute=m;
	if(s>24||s<0)
		t.second=0;
	else
		t.second=s;
}

void display(Time &t)
{
	cout<<"\033[5m";
	cout<<"\033[34m";
	cout<<"\033[s";
	cout.width(2);
	cout.fill('0');
	cout<<t.hour<<":";
	cout.width(2);
	cout.fill('0');
	cout<<t.minute<<":";
	cout.width(2);
	cout.fill('0');
	cout<<t.second<<flush;
	cout<<"\033[u";
}

void tick(Time &t)
{
	time_t t1=time(NULL);
	while(time(NULL)==t1);
	t.second++;

	if(t.second>=60)
	{
		t.second=0;
		t.minute++;
		if(t.minute>=60)
		{
			t.minute=0;
			t.hour++;
			if(t.hour>=24)
				t.hour=0;
		}
	}

}
void *run(void *s)

{
	Time t;
	setTime(t,23,58,45);

	while(1)
	{
	tick(t);
	display(t);
	}

}
