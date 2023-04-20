/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node* left;
    struct node* right;
}LIST;


void LDN(LIST* hN);
LIST* recAdd(LIST* node,int data);
struct node* newNode(int data);
void LND(LIST* hN);
void NLD(LIST* hN);

int main()
{
    
    char ip[10]="";
    char *p=ip;
    
    
    struct node* root=NULL;
    for(int i=0;i<10;i++){
        root=recAdd(root,ip[i]);
    }
    //LDN(root);
    //LND(root);
    NLD(root);
    

   
    return 0;
}

LIST* recAdd(LIST* node,int data){
    
    if(node==NULL){
       return newNode(data);
    }
    if (data < node->data)
        node->left  = recAdd(node->left,data);
    else if (data > node->data)
        node->right = recAdd(node->right,data);  
    return node;
    
        
    
}


struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
  
    node->data = data;

    node->left = NULL;
    node->right = NULL;
    return node;
}

void LDN(LIST* hN){
    if (hN->left !=NULL){
     
     LDN(hN->left);   
    }
    if(hN->right !=NULL){
       
        LDN(hN->right);
    }
    printf("%c",hN->data);
    
}

void LND(LIST* hN){
    if (hN->left !=NULL){
     
     LND(hN->left);
     
    }
    printf("%c",hN->data);
    if(hN->right !=NULL){
       
        LND(hN->right);
    }
    
    
}

void NLD(LIST* hN){
    printf("%c",hN->data);
    if (hN->left !=NULL){
     
     NLD(hN->left);
     
    }
    
    if(hN->right !=NULL){
       
        NLD(hN->right);
    }
    
    
}
