#include <stdio.h>
#include <pthread.h>

void *thread_start(void *args)
{
    int *index;
    index = (int *) args;
    printf("index = %d\n", *index);

    return NULL;
}

int main(void)
{
    int index[5];
    int i;
    int index_1;
    int *s;
    pthread_t thread[5];

    for(i = 1; i <= 5; i++)
    {
	index[i-1] = i;
	pthread_create(&thread[i-1], NULL, thread_start, &index[i - 1]);
    }

    for(index_1 = 0; index_1 < 5; index_1++)
    {
	pthread_join(thread[index_1], (void **) &s);
    }

    return 0;
}
