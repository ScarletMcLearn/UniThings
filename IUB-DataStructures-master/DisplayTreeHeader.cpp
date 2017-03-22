#include <iostream>
#include <cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

struct TreeNode
	{
		float data;
		struct TreeNode *left;
		struct TreeNode *right;
	};

class Tree{
   /* struct TreeNode
	{
		float data;
		struct TreeNode *left;
		struct TreeNode *right;
	};*/

	//TreeNode *root;	// root of the tree
	int tNode, totalNode;

public:

    TreeNode *root;
    Tree()
    {

    }
	Tree(int n)
	{
	    root = NULL;
	    tNode=n;
	    totalNode=n;
	    srand(time(0));
	    genRandomTree();
	    prnttree(root, findHeight(root));
	    cout<<endl;
    }	// constructor
	TreeNode* createTreeNode()
	{
	    TreeNode *cur;
	    //if(tNode>0){
           cur=new TreeNode;
           cur->data=rand()%100;
           cur->left=NULL;
           cur->right=NULL;
           //cout<<cur->data<<" ";
           return cur;
	    //}
	}
	void createRandomTree(TreeNode* curNode=NULL)
	{
       int choice;
	   if(tNode<=0) return;
	   else{
	   if(root==NULL)
       {
         curNode=createTreeNode();
         //cout<<root->data;
         root=curNode;
         tNode--;
        // if(tNode<=0) return;
       }
       if(curNode!=NULL){
       choice=rand()%100;
       if(choice==0)
       {
         curNode->left=createTreeNode();
         tNode--;
         if(tNode<=0) return;
       }
       else if(choice==1)
       {
         curNode->right=createTreeNode();
         tNode--;
         if(tNode<=0) return;
       }
       else{
         curNode->left=createTreeNode();
         tNode--;
         if(tNode<=0) return;
         curNode->right=createTreeNode();
         tNode--;
         if(tNode<=0) return;
       }
    //cout<<curNode->data<<" ";
    if(rand()%2) createRandomTree(curNode->right);
    if(rand()%2) createRandomTree(curNode->left);

       }
    }
}
void deleteTree(TreeNode* root)
{
    if(root!=NULL)
    {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}
void genRandomTree(TreeNode* curNode=NULL)
{
	    createRandomTree(curNode);
        if(tNode>0){
             deleteTree(root);
             root=NULL;
             tNode=totalNode;
             genRandomTree();
        }
}
void prnttree(TreeNode* p,int a)
//a contains the value of maximum Height
{
    int start, end,i;
    TreeNode **q=new TreeNode *[1000];
    for(i=0;i<1000;i++)
        q[i]=new TreeNode;
    int ht=0;
    int c=0;
    TreeNode* n=NULL;
    end=0;
    start=0;
    q[end]=p;
    do
    {
        if(p!=NULL)
        {  //q is an array of pointers to node
            q[++end]=p->left;
            q[++end]=p->right;
        }
        else
        {
            q[++end]=n;
            q[++end]=n;
        }
        if(pow(2,ht)-1==c)
        {
            cout<<"\n\n";
            for(i=1;i<=(pow(2,a-ht+1)-2)/2;i++)
                cout<<" ";
        }
        if(p!=NULL)
            cout<<p->data;
        else
                cout<<" ";
        for(i=1;i<=(pow(2,a-ht+2)-1)/2;i++)
            cout<<" ";
        p=q[++start];
        c++;
        if(c+1==pow(2,ht+1))
            ht++;
    }while(ht<=a);
}
int findHeight(TreeNode* root)
{
   if(root==NULL) return -1;
    {
        return findHeight(root->left)>findHeight(root->right)?1+findHeight(root->left):1+findHeight(root->right);
    }
}
/*
void preorder(TreeNode* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void preorderDisplay()
{
    cout<<endl<<endl<<"The Random tree displayed in preorder is as follows:"<<endl;
    //cout<<root->data;
    preorder(root);
    cout<<endl;
}*/
};
