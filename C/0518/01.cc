#include<iostream>
using namespace std;


int index=0;

int data[]={10,20,30,40};
int &center()
{
        return data[index];
}

int main()
{
        for(index=0;index<4;index++)
                cout<<center()<<"\t";
        index=0;
        center()=50;
        index=3;
        center()=60;

        for(index=0;index<4;index++)
                cout<<center()<<"\t";



}
