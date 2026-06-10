///////Length based approach

/*#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* createnode(int data)
{
	Node *newnode=(Node*)malloc(sizeof(Node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
int middlenode(Node *head,int n)
{
	int midindex=n/2;
    while(midindex--)
	{
		head=head->next;
	
	}	
		return head->data;
}
 
 int main()
 {
 	int n,data;
 	scanf("%d",&n);
 	if(n<=0)
 	{
 		printf("empty list");
	 }
	 Node *head=NULL;
	 Node *temp=NULL;
	 Node *newnode=NULL;
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&data);
	 	newnode=createnode(data);
	 	if(head==NULL)
	 	{
	 		head=newnode;
	 		temp=head;
		 }
		 else 
		 {
		 	temp->next=newnode;
		 	temp=newnode;
		 }
	 }
	 printf("LL:");
	 temp=head;
	 while(temp!=NULL)
	 {
	 	printf("%d ",temp->data);
	 	temp=temp->next;
	 }
	 printf("\nMiddle-> %d",middlenode(head,n));
	 return 0;
 }
 */
 
 //////Hare and Tortoise approach
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* createnode(int data)
{
	Node *newnode=(Node*)malloc(sizeof(Node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
int middlenode(Node *head)
{
    Node *slow=head;
    Node *fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->data;
}
 
 int main()
 {
 	int n,data;
 	scanf("%d",&n);
 	if(n<=0)
 	{
 		printf("empty list");
	 }
	 Node *head=NULL;
	 Node *temp=NULL;
	 Node *newnode=NULL;
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&data);
	 	newnode=createnode(data);
	 	if(head==NULL)
	 	{
	 		head=newnode;
	 		temp=head;
		 }
		 else 
		 {
		 	temp->next=newnode;
		 	temp=newnode;
		 }
	 }
	 printf("LL:");
	 temp=head;
	 while(temp!=NULL)
	 {
	 	printf("%d ",temp->data);
	 	temp=temp->next;
	 }
	 printf("\nMiddle-> %d",middlenode(head));
	 return 0;
 }
