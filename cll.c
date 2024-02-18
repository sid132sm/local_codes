#include<stdio.h>
#include<stdlib.h>
struct cll
{
    int data;
    struct cll *next;
};
typedef struct cll node;
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
    printf("================original=================\n");
    create(10);
    create(20);
    display();   
    printf("================Front insert==============\n");
    insertfront(5);
    insertfront(1);
    display();
    printf("================Last insert==============\n");
    insertlast(30);
    insertlast(40);
    display();
    printf("================Mid insert==============\n");
    insertmid(25);
    insertmid(35);    
    display();
    printf("===============Front delete==============\n");
    delfront();
    display();
    printf("===============Last delete==============\n");
    dellast();
    display();
    printf("===============Mid delete==============\n");
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
        new->next=new;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=first;
        last->next=new;
        last=new;
    }
}
void insertfront(int ele)
{
    node *new=(node*)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    last->next=new;
    first=new;
}
void insertlast(int ele)
{
    node *new=(node*)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    last->next=new;
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
    temp1->next=new;
}
void delfront()
{
    node *temp=first;
    first=temp->next;
    last->next=first;
    free(temp);
}
void dellast()
{
    node *temp=first,*temp1;
    do
    {
    temp1=temp;
    temp=temp->next;
    }
    while(temp->next!=first);
    temp1->next=first;
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
    free(temp);
}    
void display()
{
    node *temp=first;
    do
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    while(temp!=first);
}
