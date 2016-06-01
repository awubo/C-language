#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

bool isRun(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
		return true;
	else
		return false;
}

int dayMonth[2][13]={{365,31,28,31,30,31,30,31,31,30,31,30,31},
				{366,31,29,31,30,31,30,31,31,30,31,30,31}};

struct Date{
int Y;
int M;
int D;

};

bool input(Date *D)
{
	cout<<"input date e.g. 2001/12/12"<<endl;
	char date[255];
	cin>>date;

	char *p;
	p=strtok(date,"/");
	D->Y=atoi(p);
	p=strtok(NULL,"/");
	D->M=atoi(p);
	p=strtok(NULL,"/");
	D->D=atoi(p);

	int r=isRun(D->Y);
	if(D->M>13||D->M<=0)
	{
		D->Y=0;
		D->M=1;
		D->D=1;
		return false;
	}
	else
	{
		if(dayMonth[r][D->M]>=D->D)
			return true;
	
	}


}

int numDays(int year,int month,int day)
{
	int n=isRun(year);
	for(int i=1;i<month;i++)
		day+=dayMonth[n][i];
	return day;
}
void show(Date *s)
{
	char ch[20];

	sprintf(ch,"%d/%d/%d",s->Y,s->M,s->D);
	cout<<ch;
	return ;

}
void distance(Date *d1,Date *d2)
{

	int n;
	int day=0;
	int r;
	show(d1);
	cout<<"-";
	show(d2);

	for(n=d1->Y;n<d2->Y;n++)
	{
		r=isRun(n);
		day+=dayMonth[r][0];
	}

	int day1=numDays(d1->Y,d1->M,d1->D);
	int day2=numDays(d2->Y,d2->M,d2->D);

	cout<<" = "<<day+day2-day1<<" days"<<endl;
	return ;
}

int main()
{
	Date d1;
	Date d2;
	while(!input(&d1));	
	while(!input(&d2));	



	distance(&d1,&d2);

}
