#ifndef _DATA_H_H
#define _DATA_H_H_
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
#endif
