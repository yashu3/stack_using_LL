#include <stdio.h>
#include <stdlib.h>
struct node
{ int info ;
struct node* link;
};
struct node* add_at_beg(struct node* start,int data );
struct node* del(struct node* start);
void display(struct node* start);
int main()
{  struct node* start=NULL;
int data;
 int i,n;
 while(1)
 {
   printf("1.add\n");
   printf("2.display\n");
   printf("3.delete\n");
   printf("4.quit\n");
   scanf("%d",&n);
   printf("\n\n");
   switch(n)
   {
   case 1: printf("enter data = \n");
           scanf("%d",&data);
       start=add_at_beg(start,data);
       break;
   case 2:
         display(start);
         break;
   case 3:
         start=del(start);
         break;
   case 4:
        exit(1);
        break;
   default:
       printf("enter right choice");
   }
 }
 return 0;
    }
    struct node* add_at_beg(struct node* start,int data)
    {
    struct node* tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=start;
    start=tmp;
    return start;
    }
   void display(struct node* start)
   {
    struct node *p;
    p= start;
    while(p!=NULL)
    {
    printf("%d\n",p->info);
    p=p->link;
    }
   }
   struct node* del(struct node* start)
   {
     struct node *p;
     p=start;
     if(p==NULL)
      printf("underflow\n");
      else
      {
      start=p->link;
      free(p);
      }
      return start;

   }
