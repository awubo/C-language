#include<iostream>
#include<string>
#include<vector>

using namespace std;

template <class T> void display(T *t,int n)
{
	for(int i=0;i<n;i++)
		cout<<t[i]<<"\t";
	cout<<endl;

}
template <class T> void sort(T *t,int n)
{
	T *s=t;
	T c;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(s[j]>=s[i])
				;
			else
			{
				c=s[j];
				s[j]=s[i];
				s[i]=c;
			}
		}
}


template <class T,class S> void display(T* a,S* b,int n)
{
	for(int i=0;i<n;i++)
		cout<<b[i]<<"---->"<<a[i]<<endl;

	cout<<endl;

}

template<class T,class S> class Ghost
{
T t;
S s;
	public:
	Ghost(T t,S s)
	{
		this->t=t;
		this->s=s;
	}
	void show()
	{
		cout<<"t--->"<<t<<endl;
		cout<<"s--->"<<s<<endl;
	}

};
 int main()
{

	vector<char > myvector;
	vector<char >::iterator myiterator;

	for(int i=65;i<91;i++)
	myvector.push_back((char)i);
	
	for(myiterator=myvector.begin();myiterator!=myvector.end();myiterator++)
		cout<<*myiterator<<endl;
/*

	Ghost<string,int>* G=new Ghost<string,int>("Wubo",40);
	G->show();

	Ghost<int,int> g=Ghost<int,int>(100,100);
	g.show();
	const char *a[]={"sunday","monday","tuesday","wendsday","thursday","friday","saturday"};
	int b[]={1,2,3,4,5,6,7};
	display(a,b,7);
	display(b,a,7);


	int s[]={10,22,23,42,52,26,27,28};
	sort(s,8);

	display(s,8);

*/
}
