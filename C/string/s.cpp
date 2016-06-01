#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	char ch[]="username=appleboy&password=1234&action=delete";

	char *p=ch;

	char *key_point;
	char *t;
	char *key;
		while((key_point=strsep(&p,"&"))!=NULL)
		{
				printf("%s\n",key_point);
				t=key_point;
				while((key=strsep(&t,"="))!=NULL)
						printf("%s\n",key);
		}

}
