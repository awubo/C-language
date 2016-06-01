#include<iostream>
using namespace std;
#include<string.h>
#include<fstream>
#include<unistd.h>


void t(float n=0)
{
	time_t t=time(NULL);
	while(time(NULL)<=t+n);
}

void show(string str,int n=0)
{
	for(int i=0;i<str.length();i++)
	{
		cout<<str.at(i)<<flush;
		usleep(n);
	}
	cout<<endl;
}


int display(const char fileName[],int n)
{
	string s;
	ifstream in;
	in.open(fileName,ios::in);
	if(!in)
	{
		cout<<"can't open file "<<fileName<<endl;
		in.close();
		return -1;
	}
	while(!in.eof())
	{
		getline(in,s);
		show(s,n);
	}
	in.close();
	return 0;
}


int main(int argc,char *argv[])
{
	if(argc==1)
		cout<<argv[0]<<"  filename "<<endl;
	else
	{
		for(int i=1;i<argc;i++)
		{
				
			cout<<"文件:  "<<argv[i]<<endl;
			cout<<"----------------------"<<endl;
			display(argv[i],10000);
			cout<<endl;
		}
	}
}
