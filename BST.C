#include<stdio.h>
#include<conio.h>
typedef struct tree
{
 int data;
 struct tree *left,*right;
}node;

node* insert(int,node*);
void inorder(node*);
//node* del(int,node*);

void main()
{
 int c,x;
 node *T=NULL;
 clrscr();
do
{
 printf("\n 1.Insert 2.Display ");
 scanf("%d",&c);

 switch(c)
 {
  case 1:
  printf("\n Enter element: ");
  scanf("%d",&x);
  T=insert(x,T);
  break;
  case 2:
  inorder(T);
  case 3:
  printf("\n Delete element: ");
  scanf("%d",&x);
//  T=del(x,T);
  break;
 }
}while(c<3);
getch();
}

node* insert(int x,node *T)
{
 if(T==NULL)
 {
 T=(node*)malloc(sizeof(struct tree));
 if(T==NULL)
 {
 printf("\n Empty");
 }
 else
 {
 T->data=x;
 T->left=T->right=NULL;
 }
 }
 else if(x<T->data)
 T->left=insert(x,T->left);

 else if(x>T->data)
 T->right=insert(x,T->right);

 return T;
}

void inorder(node *T)
{
if(T!=NULL)
 {
  inorder(T->left);
 printf("%d",T->data);
 inorder(T->right);
 }
}

/*node* del(int x,node *T)
{
 if(T==NULL)
 printf("\n First create the ");
 else if(T->left!=NULL&&T->right!=NULL)
 T->right=findmin(T->right);            */

