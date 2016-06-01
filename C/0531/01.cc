#include<iostream>
using namespace std;


class Test
{
int x,y;
        public:
Test(int x=0,int y=0):x(x),y(y){z++;}
static void show(Test &t)
{
        cout<<t.x<<"\t"<<t.y<<endl;
        cout<<z<<endl;

}

        static int z;

};


int Test::z=0;

int main()
{
Test t1(1,2);
Test t2(3);
Test::show(t1);
Test::show(t2);





}
