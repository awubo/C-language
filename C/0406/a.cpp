#include<iostream>
#include<string>

using namespace std;

class GeShi{
int width;
char ch;
	public:
GeShi(int width,char ch){this->width=width;this->ch=ch;}
friend ostream& operator<<(ostream &on,GeShi& geshi)
{
	on.width(geshi.width);
	on.fill(geshi.ch);
	return on;
}

};

int main()
{

	GeShi My(40,'*');
	cout<<My<<"hello world";
return 0;
}
