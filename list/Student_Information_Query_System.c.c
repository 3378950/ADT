#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stud_node
{
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *Creat_stu_Doc();
struct stud_node *Insert_stu_Doc(struct stud_node *head,struct stud_node *stud);
struct stud_node *Delet_stu_Doc(struct stud_node *head,int num);

int main()
{
    struct stud_node *head,*p;
    int score,num,choice;
    char name[20];
    int size = sizeof(struct stud_node);
    do
    {
        printf("1:Create 2:Insert 3:Delete 4:Print 0:Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head = Creat_stu_Doc(); break;
            case 2:
            case 3:
            case 4:
            case 0:break;
        }
    } while (choice!=0);
    system("pause");
    return 0;
}

struct stud_node *Creat_stu_Doc()
{
    struct stud_node *head,*p;
    int num,score;
    char name[20];
    int size = sizeof(struct stud_node);
    head = NULL;
    printf("Input num,name and score:\n");
    scanf("%d%s%d",&num,name,&score);
    while(num!=0)
    {
    	p =(struct stud_node*)malloc(size);
    	p->num = num;
    	p->score = score;
    	strcpy(p->name,name);
    	head = Insert_stu_Doc(head, p);    /* 调用插入函数 */
		scanf("%d%s%d",&num,name,&score);
	}
	return head;
}

struct stud_node *Insert_stu_Doc(struct stud_node *head,struct stud_node *stud)
{
	struct stud_node *ptr,*ptr1,*ptr2;
	ptr2 = head;ptr = stud;
	if(head==NULL)
	{
		head = ptr;
		head->next = NULL;
	}
	else
	{
		while(ptr->num > ptr2->num&&ptr2->next!=NULL)//找到插入位置 
		{
			ptr1 = ptr2;
			ptr2=ptr2->next; 
		}
		if(ptr->num<=ptr2->num)//插入位置在中间位置 
		{
			if(head==ptr2) head = ptr;
			ptr1->next = ptr;
			ptr->next = ptr2;
		}
		else//插入位置在尾部； 
		{
			ptr2->next = ptr;
			ptr->next = NULL;
		}
	}
	return head;
}

struct stud_node *Delet_stu_Doc(struct stud_node *head,int num)
{
	struct stud_node *ptr1,*ptr2;
	if(head->num==num)
	{
		head=head->next;
	}
	else if(head->next==NULL) return NULL;
	else
	{
		ptr1 = head;
		ptr2 = head->next;
		while(ptr2->next!=NULL)
		{
			if(ptr2->num==num)
			{
				ptr1->next = ptr2->next;
				free(ptr2);
			}
			else 
			{
				ptr1 = ptr2;
				ptr2 = ptr2->next;
			}
		}
	}
	return head;
}
void Print_stud_node(struct stud_node *head)
{
	struct stud_node *ptr;
	if(head == NULL)
	{
        printf("\nNo Records\n");
        return;
    }
    printf("\nThe Students' Records Are: \n");
    printf("Num\t Name\t Score\n");
    for(ptr = head;ptr!=NULL;ptr = ptr->next)
    {
    	 printf("%d\t%s\t%d \n", ptr->num, ptr->name, ptr->score);
	}
}
