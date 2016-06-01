#include<iostream>
using namespace std;
#include<string>

class FuShu{

int real;
int image;
	public:
FuShu(int r,int i)
	{
		real=r;
		image=i;
	}
~FuShu()
{
	cout<<"析构"<<endl;
}

friend ostream& operator<<(ostream &out,const FuShu &f)
{
	out<<f.real<<"+"<<f.image<<"i"<<endl;
	return out;
}
FuShu operator+(const FuShu &f)
{
	int r=real+f.real;
	int i=image+f.image;
	return FuShu(r,i);
}
void show()
{
	cout<<real<<"+"<<image<<"i"<<endl;
}
};


int main()
{
FuShu f(10,10);
FuShu f1(10,10);
FuShu f2(10,10);
f2=f1+f;

cout<<f2<<endl;

}
