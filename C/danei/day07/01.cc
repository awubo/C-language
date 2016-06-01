#include<iostream>
#include<string.h>

using namespace std;

int main()
{
const char *ch="my name is wubo. ";

cout<<ch<<endl;
cout<<strlen(ch)<<endl;
char D[30]="what's your name?  ";

strcat(D,ch);
cout<<D<<endl;



}
