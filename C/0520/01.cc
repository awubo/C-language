#include<iostream>
using namespace std;


class A
{
        public:
                A(int a=0):a(a)
                {};
                virtual void show()
                {
                        cout<<"A show()"<<endl;
                }

        private:
                int a;

};


class B:public A
{
        public:
                B(int a=0):A(a)
                {
                }
                void show()
                {
                        cout<<"B show()"<<endl;
                }

};
int main()
{


A a;
a.show();
B b;
b.show();

B *p=(B*)&a;
p->show();


A *q=(A*)&b;
q->show();
}
