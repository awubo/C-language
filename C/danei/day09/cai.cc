#include<iostream>
using namespace std;


class nongchanpin{



};


class shucai:virtual public nongchanpin
{};

class shuiguo:virtual public nongchanpin
{};

class xihongshi:public shucai,public shuiguo
{};


int main()
{
xihongshi x;
}
