#include"01.h"


int main()
{

        Complex c1;
        Complex c2(2.01,3.0);
        Complex c3=c1;
        c1.show();
        c2.show();
        c3.show();

        c2+=c2;
        c2.show();
        c1=c2;
        c1.show();

        Complex c4(1,-3);
        c4.show();

        c1=c2+c4;
        c1.show();
}
