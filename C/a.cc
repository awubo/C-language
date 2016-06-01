#include<iostream>
#include<string.h>
using namespace std;
#define M 128

static int N=0;
struct ch{
char c;
int n;
};

void set(struct ch *p)
{

	for(int i=0;i<M;i++)
	{
		p[i].c='\0';
		p[i].n=0;
	}
}
int find(struct ch *p,char c)
{
	for(int i=0;i<N;i++)
	{
		if(p[i].c==c)
			return i;
	}
	return -1;
}

void insert(struct ch *p,int n,char ch)
{
	if(n==-1)
	{
		p[N].c=ch;
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
	struct ch *c=new ch[26];

	char ch[200];
	cin.getline(ch,200);
	char *p=ch;

	int cnt[256]={};
	for(int i=0;i<strlen(ch);i++)
	{
		cnt[(int)p[i]]++;
	}

	for(int i=0;i<strlen(ch);i++)
	{
		char T=*p;
		int n=find(c,T);
		insert(c,n,T);
		p++;
	}


	display(c);

	delete[] c;
}
