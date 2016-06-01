#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int image;
	public:
		Complex(int r=0,int i=0)
		{
			real=r;
			image=i;
		}
		void show()
		{
			if(image<0)
			cout<<"复数("<<real<<""<<image<<"i)"<<endl;
			else
			cout<<"复数("<<real<<"+"<<image<<"i)"<<endl;

		}
		Complex operator+(const Complex &C)
		{
			int realsum=this->real+C.real;
			int imagesum=this->image+C.image;
			return Complex(realsum,imagesum);
		}

		Complex operator-(const Complex &C)
		{
			int realsum=this->real-C.real;
			int imagesum=this->image-C.image;
			return Complex(realsum,imagesum);
		}

		Complex operator*(const Complex &C)
		{
			int a=this->real;
			int b=this->image;
			int c=C.real;
			int d=C.image;

			int realsum=a*c-b*d;
			int imagesum=a*d+c*b;
			return Complex(realsum,imagesum);
		}
		friend Complex add(Complex c1,Complex c2)
		{
			int realsum=c1.real+c2.real;
			int imagesum=c1.image+c2.image;
			return Complex(realsum,imagesum);
		}

		friend ostream& operator<<(ostream &cout,const Complex &c)
		{
			cout<<c.real<<"+"<<c.image<<"i"<<endl;
			return cout;
		}

		friend istream& operator>>(istream &cin,Complex &c)
		{
			cout<<"real"<<endl;
			cin>>c.real;
			cout<<"image"<<endl;
			cin>>c.image;
			return cin;
		}
};

int main() 
{

	Complex c(12,13);
	cout<<c<<endl;
}
