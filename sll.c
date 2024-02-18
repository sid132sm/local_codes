/*
linked list is linear data structure where datas stored in different location are connected linearly
3 type
1.singly linked list
2.doubly linked list
3.circular linkled list
*/

#include<stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *next;
};
typedef struct sll node;
node *first=NULL;
node *last=NULL;
void create(int ele);
void insertfront(int ele);
void insertlast(int ele);
void insertmid(int ele);
void frontdel();
void lastdel();
void middel();
void number();
void reverse();
void display();
int main()
{
printf("===============Original One============\n");
create(10);
create(20);
create(30);
display();
/*printf("===============Front Insertion============\n");
insertfront(5);
insertfront(1);
display();
printf("===============Last Insertion============\n");
insertlast(40);
insertlast(50);
display();
printf("===============Mid Insertion============\n");
insertmid(25);
insertmid(45);
display();
printf("===============Front deletion============\n");
frontdel();
display();
printf("===============Last deletion============\n");
lastdel();
display();
printf("===============Mid deletion============\n");
middel();
display();*/
number();
reverse();
display();
return 0;
}
void create(int ele)
{
    node *new=(node*)malloc(sizeof(node));
    if(first==NULL)
    {
        new->data=ele;
        new->next=NULL;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=NULL;
        last->next=new;
        last=new;
    }
}
void insertfront(int ele)
{
    node *new=(node*)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    first=new;
}
void insertlast(int ele)
{
    node *new=(node*) malloc(sizeof(node));
    new->data=ele;
    new->next=NULL;
    last->next=new;
    last=new;

}
void insertmid(int ele)
{
    int key;
    printf("Enter the key element\n");
    scanf("%d",&key);
    node *temp=first,*temp1;
    while(temp->data!=key)
    {
        temp1=temp;
        temp=temp->next;
    }
    node *new=(node*)malloc(sizeof(node));
    new->data=ele;
    new->next=temp;
    temp1->next=new;
}
void frontdel()
{
    node *temp=first;
    first=first->next;
    free(temp);

}
void lastdel()
{
    node *temp=first, *temp1;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
}
void middel()
{
    int key;
    printf("Enter the key element\n");
    scanf("%d",&key);
    node *temp=first, *temp1;
    while(temp->data!=key)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);
}
void number()
{
    int count=0;
    node *temp=first;
    
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("number of node is %d\n",count);
}
void reverse()
{
    node *cur,*nextn,*prev;
    cur=nextn=first;
    while(nextn !=NULL)
    {
        nextn=nextn->next;
        cur->next=prev;
        prev=cur;
        cur=nextn;


    }
    first=prev;
}
void display()
{
    
    node *temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}













