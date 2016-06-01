#include<iostream>
#include<pthread.h>
#include<unistd.h>

using namespace std;
int n=0;
void *fun1(void *arg)
{
        while(1)
        {
        n++;
        cout<<"fun1()  "<<n<<endl;
        sleep(1);
        }
}

void *fun2(void *arg)
{
        while(1)
        {
        n++;
        cout<<"fun2()  "<<n<<endl;
        sleep(2);
        }
}
int main()
{

        pthread_t pth1,pth2;
        int ret;
        ret=pthread_create(&pth1,NULL,fun1,NULL);
        if(ret<1)
        {
                cout<<"pthread_create err\n";
        }
        ret=pthread_create(&pth2,NULL,fun2,NULL);
        if(ret<1)
        {
                cout<<"pthread_create err\n";
        }

        pthread_join(pth1,NULL);
        pthread_join(pth2,NULL);
return 0;
}

