#include<stdio.h>
#include<stdlib.h>
struct dll
{
    int data;
    struct dll *next;
    struct dll *prev;
};
typedef struct dll node;
node *first=NULL;
node *last=NULL;
void create(int ele);
void insertfront(int ele);
void insertlast(int ele);
void insertmid(int ele);
void delfront();
void dellast();
void delmid();
void display();
int main()
{
    printf("==============Original==============\n");
    create(10);
    create(20);
    display();
    printf("=============Front insert===========\n");
    insertfront(5);
    display();
    printf("=============Last insert===========\n");
    insertlast(30);
    display();
    printf("=============Mid insert===========\n");
    insertmid(15);
    display();
    printf("=============Front deletion===========\n");
    delfront();
    display();
    printf("=============Last deletion===========\n");
    dellast();
    display();
    printf("=============Mid deletion===========\n");
    delmid();
    display();
    return 0;
}
void create(int ele)
{
    node *new=(node*)malloc(sizeof(node));
    if(first==NULL)
    {
        new->data=ele;
        new->prev=NULL;
        new->next=NULL;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=NULL;
        last->next=new;
        new->prev=last;
        last=new;
    }
}
void insertfront(int ele)
{
    node *new=(node*)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    new->prev=NULL;
    first=new;
}
void insertlast(int ele)
{
    node *new=(node*)malloc(sizeof(node));
    new->data=ele;
    new->next=NULL;
    last->next=new;
    new->prev=last;
    last=new;
}
void insertmid(int ele)
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
    node *new=(node*)malloc(sizeof(node));
    new->data=ele;
    new->next=temp;
    new->prev=temp1;
    temp1->next=new;
    temp->prev=new;
}
void delfront()
{
    node *temp=first;
    first=first->next;
    first->prev=NULL;
    free(temp);
}    
void dellast()
{
    node *temp=first, *temp1;
    while(temp!=last)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    last=temp1;
    free(temp);
}
void delmid()
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
    temp->next->prev=temp;
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














