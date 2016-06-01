#include<iostream>
#include<iomanip>
using namespace std;

#ifndef _COMPLEX_
#define _COMPLEX_

class Complex
{
        public:
                Complex(double r=0,double i=0):real(r),img(i)
                {}
                Complex(const Complex &c)
                {
                        this->real=c.real;
                        this->img=c.img;
                }
                Complex operator+(const Complex c)
                {
                        Complex c1;
                        c1.real=this->real+c.real;
                        c1.img=this->img+c.img;
                        return c1;
                }

                Complex operator-(const Complex c)
                {
                        Complex c1;
                        c1.real=this->real-c.real;
                        c1.img=this->img-c.img;
                        return c1;
                }

                Complex &operator=(const Complex &c)
                {
                        this->real=c.real;
                        this->img=c.img;
                        return *this;
                }

                Complex &operator+=(const Complex &c)
                {
                        this->real=this->real+c.real;
                        this->img=this->img+c.img;
                        return *this;
                }

                Complex &operator-=(const Complex &c)
                {
                        this->real=this->real-c.real;
                        this->img=this->img-c.img;
                        return *this;
                }


                void show()
                {
                        cout<<fixed<<setprecision(2);
                        if(real==0&&img!=0)
                                cout<<img<<"i"<<endl;
                        else if(real==0&&img==0)
                                cout<<0<<endl;
                        else if(img>0)
                        cout<<real<<"+"<<img<<"i"<<endl;
                        else
                        cout<<real<<"-"<<-img<<"i"<<endl;
                }


        private:
                double real;
                double img;

};
#endif
