#include<iostream>
using namespace std;

class A
{
        public:
                friend class B;
                void disPlay()
                {
                        cout<<x<<endl;
                }
        private:
                int x;


};

class B
{
        public:
                void set(int i)
                {
                        a.x=i;

                }
                void disPlay()
                {
                        a.disPlay();
                }
        private:
                A a;

};


int main()
{

        B b;
        b.set(100);
        b.disPlay();

}
