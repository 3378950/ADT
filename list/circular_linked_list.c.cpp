#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *countoff(); 
int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    //scanf("%d", &min_score);
    //head = deletelist(head, min_score);
    p = head;
    int i =0;
    for ( p; ;p = p->next)
    {
    	printf("%d ",p->num);
    	i++;
    	if(i==100) break;
	}

    return 0;
} 
struct stud_node *createlist()
{
	struct stud_node * head = (struct stud_node *)malloc(sizeof(struct stud_node));
	int i;scanf("%d",&i);
	struct stud_node *p = head;
	while(i)
	{
		p->next = (struct stud_node*) malloc(sizeof(struct stud_node));
		p = p->next;
		p->num = i;
		p->next = NULL;
		scanf("%d",&i);
	}
	struct stud_node * tail = p;
	p->next = head->next; 
	return head->next;
}


