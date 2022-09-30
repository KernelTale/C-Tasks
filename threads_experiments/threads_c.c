#include <stdio.h>
#include <pthread.h>

long a = 0;
pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;

void *thread_calc(void *args)
{
    int i, tmp;
    for (i = 0; i < 500010; i++)
    {
	pthread_mutex_lock(&m1);
	tmp = a;
	tmp ++;
	a = tmp;
	if(a >= 1000000) pthread_cond_signal(&cond1);
        pthread_mutex_unlock(&m1);
    }
    return NULL;
}

void *thread_wait(void *args)
{
    pthread_mutex_lock(&m1);
    pthread_cond_wait(&cond1, &m1);
    printf("a>=1000000\n %ld\n", a);
    pthread_mutex_unlock(&m1);
}

int main(void)
{
    int index[5];
    int i, i1;
    int *s;
    pthread_t thread[5];
}
