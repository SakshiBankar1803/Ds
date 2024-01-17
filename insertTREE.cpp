#include<stdio.h>
#include<stdlib.h>
#define MEMORY (NODE *)malloc(sizeof(NODE))
 typedef struct node
 {
 	int data;
 	struct node *left,*right;
 }NODE;
 
 NODE *create(NODE *root)
 {
 	NODE *temp,*newnode,*parent;
 	int i,n;
 	printf("enter limit::");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 	  newnode=MEMORY;
	  printf("enter element::");
	  scanf("%d",&newnode->data);
	  newnode->left=NULL;
	  newnode->right=NULL;
	  if(root==NULL)
	  {
	  	root=newnode;
	  	continue;
	  }
	  temp=root;
	  while(temp!=NULL)
	  {
	  	parent=temp;
	  	if(newnode->data>temp->data)
	  	  temp=temp->right;
	  	else
	  	  temp=temp->left;
	  }
	  if(newnode->data>parent->data)
	    parent->right=newnode;
	  else
	   parent->left=newnode;
	}
	return root;
 }
 
 void inorder(NODE *root)
 {
 	NODE *temp=root;
 	if(temp!=NULL)
 	{
 		inorder(temp->left);
 		printf("%d\t",temp->data);
 		inorder(temp->right);
	}
 }
 
 void preorder(NODE *root)
 {
 	NODE *temp=root;
 	if(temp!=NULL)
 	{
 		printf("%d\t",temp->data);
 		preorder(temp->left);
 		preorder(temp->right);
	}
 }
 
 void postorder(NODE *root)
 {
 	NODE *temp=root;
 	if(temp!=NULL)
 	{
 		postorder(temp->left);
 		postorder(temp->right);
 		printf("%d\t",temp->data);
	}
 }
 
 NODE *insert(NODE *root)
 {
 		NODE *newnode,*temp,*parent;

 	
 	  newnode=MEMORY;
	  printf("enter value::");
	  scanf("%d",&newnode->data);
	  newnode->left=newnode->right=NULL;
	  
	  if(root==NULL)
	  {
	  	root=newnode;
	  //	continue;
      }
	  temp=root;
	  while(temp!=NULL)
	  {
	  	parent=temp;
	  	if(newnode->data<=temp->data)
	  	 temp=temp->left;
	  	else
	  	 temp=temp->right;
	  }
	  if(newnode->data<=parent->data)
	    parent->left=newnode;
	  else
	    parent->right=newnode;
	
	return root;
 }
 
 NODE *search(NODE *root)
 {
 	int num;
 	NODE *temp=root;
 	printf("enter number::");
 	scanf("%d",&num);
 	while(temp!=NULL)
 	{
 	 if(num==temp->data)
	   return num;
	 else if(num<temp->data)
	   temp=temp->left;
	 else
	   temp=temp->right;	
	}
	return -1;
 }
 
 
 int main()
 {  
    int ch,ans;
 	NODE *root=NULL;
 	root=create(root);
 	do
 	{
	 
 	printf("\n1=inorder\n2=preorder\n3=postorder\n4=insert\n5=searchenter choice::");
 	scanf("%d",&ch);
 	switch(ch)
 	{
 	  case 1 :inorder(root);break;
	  case 2 :preorder(root);break;
	  case 3 :postorder(root);break;
	  case 4 :root=insert(root);break;
	  case 5 :ans=search(root);
	          if(ans==-1)
	           printf("number found");
	          else
	           printf("number not found");
	           break;
	        	
	}
  }while(ch<6);
  

 }
