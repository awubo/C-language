#include<stdio.h>
#include<memory.h>


void proc()
{
        char proc[102];
        char buff[4]={'|','/','-','\\'};

        int i=0;

        memset(proc,'\0',sizeof(proc));

        for(i=0;i<=100;i++)
        {
        
                proc[i]='#';
                printf("[%-100s][%d%%]\r",proc,i);
                fflush(stdout);
                printf("%c",buff[i%4]);
        }
        printf("\n");



}


int main()
{
proc();

}
