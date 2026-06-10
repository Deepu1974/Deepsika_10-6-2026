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
Node* middlenode(Node *head)
{
    Node *slow=head;
    Node *fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}
 
 Node* merge(Node *left,Node *right)
{
    if(left==NULL)
        return right;

    if(right==NULL)
        return left;

    if(left->data <= right->data)
    {
        left->next=merge(left->next,right);
        return left;
    }
    else
    {
        right->next=merge(left,right->next);
        return right;
    }
}

Node* mergesort(Node *head)
{
    if(head==NULL || head->next==NULL)
        return head;

    Node *mid=middlenode(head);

    Node *second=mid->next;

    mid->next=NULL;

    Node *left=mergesort(head);

    Node *right=mergesort(second);

    return merge(left,right);
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
	 head=mergesort(head);
	 printf("Sorted LL:");
	 temp=head;
	 while(temp!=NULL)
	 {
	 	printf("%d ",temp->data);
	 	temp=temp->next;
	 }
	 
 }
