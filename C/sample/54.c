#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 10

typedef struct node
{
        char name[20];
        struct node *link;
}stud;


stud *creat(stud *p)
{
        if((p=(stud*)malloc(sizeof(stud)))==NULL)
        {
                printf("cannot find space!");
                exit(0);
        }
        strcpy(p->name,"head");
        p->link=NULL;
        return p;
}

stud* addtail(stud *p)
{
        char str[20];
        stud *tail=(stud *)malloc(sizeof(stud));
        if(tail==NULL)
        {
                printf("cannot find space!");
                exit(0);
        }
        p->link=tail;
        printf("input studnet name!\n");
        gets(str);
        strcpy(tail->name,str);
        tail->link=NULL;
        return tail;
}

void show(stud *p)
{
        printf("%s\n",p->name);
}
void addhead(stud *p)
{

}

int main()
{
        stud *head;
        stud *tail;
        tail=creat(head);
        printf("%X\n",head);
        printf("%X",tail);
}
