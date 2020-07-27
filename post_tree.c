#include <stdio.h>
#include <stdlib.h>
  struct node {
    int data;
    struct node *left;
    struct node *right;
};
  struct node*  build_tree(int a[], struct node* root,int i,int n);  
  struct node*  new_node(int data);
  void  inorder(struct node* root);
 int main (){
    int n,k;
   scanf("%d",&n);
   int a[n];
   for(k=0;k<n;k++)
   scanf("%d",&a[k]);
   struct  node* root=build_tree(a,root,0,n);
   inorder(root);  
 }
   struct node* build_tree(int a[],struct node*root,int i,int n){
   if(i<n){
   struct node* temp=new_node(a[i]);
   root=temp;
   root->left=build_tree(a,root->left,2*i+1,n);
   root->right=build_tree(a,root->right,2*i+2,n);
   }
   return root;
 }
   struct node* new_node(int a){
  struct node* nod=(struct node*)malloc(sizeof(struct node));
   nod->data=a;
   nod->left=NULL;
   nod->right=NULL;
   return nod;
   }  
   void inorder(struct node* root){
       if(root!=NULL){
     inorder(root->left);
     printf("%d ",root->data);
     inorder(root->right);
   } 
 }
