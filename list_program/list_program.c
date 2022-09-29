#include <stdio.h>
#include <malloc.h>

struct lyst
{
    int data;
    struct lyst *next;
};

typedef struct lyst *node;

node create_node(void)
{
    node tmp;
    tmp = (node)malloc(sizeof(struct lyst));
    tmp->next = 0;
    return tmp;
}

node add_node(node head, int value)
{
    node tmp, p;
    tmp = create_node();
    tmp->data = value;
    if(head == 0)
    {
	head = tmp;
    }
    else
    {
	p = head;
	while(p->next != 0)
	{
	    p = p->next;
	}
	p->next = tmp;
    }
    return head;
}
/*
void drop_node(node list)
{
    node p, m;
    p = list->next;
    m = list;
    while(p->next != 0)
    {
 	p = p->next;
	m = m->next;
    }
    free(p);
    m->next = 0;
}
*/
void drop_node(node list, int pos)
{
    node p, m;
    p = list;
    int ctr = 0;
    while(ctr < pos && p->next != 0)
    {
	m = p;
	p = p->next;
	ctr++;
    }
    m->next = p->next;
    free(p);
}

int main(void)
{
    node list = create_node();
    int i = 0;
    while(i < 10)
    {
	list = add_node(list, i);
	i++;
    }
    i = 0;
    drop_node(list, 2);
    node temp = list;
    while(i < 9)
    {
	printf("[%d] %d\n", i, temp->data);
	temp = temp->next;
	i++;
    }
    i = 0;
    return 0;
}
