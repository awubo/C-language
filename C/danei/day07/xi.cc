#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
#define M 128

static int N=0;
struct ch{
char c[20];
int n;
};

void set(struct ch *p)
{

	for(int i=0;i<M;i++)
	{
		memset(p[i].c,0,sizeof(p[i].c));
		p[i].n=0;
	}
}
int find(struct ch *p,char *c)
{
	for(int i=0;i<N;i++)
	{
		if(strcmp(p[i].c,c)==0)
			return i;
	
	}
	return -1;
}

void insert(struct ch *p,int n,char *ch)
{
	if(n==-1)
	{
		strcpy(p[N].c,ch);
		p[N].n+=1;
		N++;
	}
	else
	{
		p[n].n+=1;
	}
}


void display(struct ch *p)
{
	for(int i=0;i<N;i++)
		cout<<p[i].c<<":"<<p[i].n<<endl;
}

int main()
{
	struct ch *c=new ch[1000];

	char ch[500];



	fstream in("xi.txt");

	while(in.getline(ch,500))
	{
	
		char *str=strtok(ch," ");
		while(str!=NULL)
		{
			int n=find(c,str);
			insert(c,n,str);
			str=strtok(NULL," ");
		}
	}
	display(c);

	delete[] c;
}
