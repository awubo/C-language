#include "clock.h"
#include<pthread.h>


void *get(void *arg)
{

	int n;
	cin>>n;
	pthread_exit();
}

int main()
{
	pthread_t id1,id2;
	int i=0;
	int ret=0;
	ret=pthread_create(&id1,NULL,run,(void*)i);
	ret=pthread_create(&id2,NULL,get,(void*)i);
	pthread_join(id1,NULL);
	pthread_join(id2,NULL);
	return 0;
}
