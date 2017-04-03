#include <iostream>
#include "DisplayTreeHeader.cpp"
using namespace std;
class BSTree{
    /*
struct TreeNode
	{
		float data;
		struct TreeNode *left;
		struct TreeNode *right;
	};
	*/


public:
    TreeNode *r;
    BSTree()
    {
        r=NULL;
    }
    /*void recInsert(TreeNode *root, TreeNode *newNode)
    {
        if(r==NULL)
        {
            r=newNode;
        }
        else if(newNode->data<root->data)
        {
            if(root->left==NULL)
                root->left=newNode;
            else recInsert(root->left,newNode);
        }
        else
        {
            if(root->right==NULL)
                root->right=newNode;
            else recInsert(root->right,newNode);
        }
    }*/
//    TreeNode* recInsert(TreeNode *root, TreeNode *newNode)
//    {
//        if(root==NULL)
//        {
//            return newNode;
//        }
//        else if(newNode->data<root->data)
//        {
//            root->left=recInsert(root->left,newNode);
//        }
//        else
//        {
//            root->right=recInsert(root->right,newNode);
//        }
//
//        return root;
//    }


//     TreeNode* recInsert(TreeNode *root, TreeNode *newNode)
//    {
//        TreeNode * corner_node;
//
//        if(root==NULL)
//        {
//            return newNode;
//        }
//        else if(newNode->data<root->data)
//        {
//            corner_node =recInsert(root->left,newNode);
//
//            root -> left = corner_node;
//        }
//        else
//        {
//            corner_node =recInsert(root->right,newNode);
//
//            root -> right = corner_node;
//        }
//
//        return root;
//    }



TreeNode* recInsert(TreeNode *root, TreeNode *newNode)
    {
        TreeNode * corner_node;

        if(root==NULL)
        {
            return newNode;
        }
        else if(newNode->data<root->data)
        {
            corner_node =recInsert(root->left,newNode);

            root -> left = corner_node;
        }
        else
        {
            corner_node =recInsert(root->right,newNode);

            root -> right = corner_node;
        }

        return root;
    }



    float findMinBST(TreeNode *root)
    {
        if(root->left==NULL)
            return root->data;
        return findMinBST(root->left);
    }
    float findMaxBST(TreeNode *root)
    {
        if(root->right==NULL)
            return root->data;
        return findMaxBST(root->right);
    }
    TreeNode* findMaximum(TreeNode *root)
    {
        if(root->right==NULL)
            return root;
        return findMaximum(root->right);
    }

    bool findBST(TreeNode *root, float sVal)
    {
        if(root==NULL)
        {
            return false;
        }
        else if(sVal<root->data)
        {
            return findBST(root->left,sVal);
        }
        else if(sVal>root->data)
        {
            return findBST(root->right,sVal);
        }
        else{
            return true;
        }
    }
    bool recDelete(TreeNode *root, float sVal, TreeNode *parent=NULL, int child=0)
    {
        TreeNode *delNode, *largest;

        if(root==NULL) return false;
        if(sVal<root->data)
        {
            return recDelete(root->left,sVal,root,0);
        }
        else if(sVal>root->data)
        {
            return recDelete(root->right,sVal,root,1);
        }
        else{
            if(root->left==NULL)
            { //node have only right child
                if(parent==NULL) r=root->right;
                else if(child==0)
                {
                    parent->left=root->right;
                    delete root;
                    return true;
                }
                else{
                    parent->right=root->right;
                    delete root;
                    return true;
                }
            }
            else if(root->right==NULL)
            {
                //node have only left child
                if(parent==NULL) r=root->left;
                else if(child==0)
                {
                    parent->left=root->left;
                    delete root;
                    return true;
                }
                else{
                    parent->right=root->left;
                    delete root;
                    return true;
                }
            }
            else{
               //node have both children
               delNode=root;
               largest=findMaximum(root->left);
               delNode->data=largest->data;
               return recDelete(delNode->left,largest->data,delNode,0);

            }

        }

    }
    void bstDelete()
    {
        float sVal;
        cout<<"\nEnter Data to Delete: ";
        cin>>sVal;
        if(recDelete(r,sVal)==true)
        {
            cout<<"Successfully Deleted!!"<<endl;
        }
        else{
            cout<<"Not Deleted or Data not found!!"<<endl;
        }
    }


    void bstinsert()
    {
        TreeNode *newNode;
        newNode=new TreeNode;
        cout<<"\nEnter Data for Node: ";
        cin>>newNode->data;
        newNode->left=NULL;
        newNode->right=NULL;
        //recInsert(r,newNode);
        r=recInsert(r,newNode);
    }
    void preorder(TreeNode *root)
    {
        if(root==NULL) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(TreeNode *root)
    {
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void postorder(TreeNode *root)
    {
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};

int main()
{
    Tree dObj;
    BSTree obj;
    char c;
    float sVal;

    do
    {
    obj.bstinsert();
    cout<<"\nEnter another? Y/N: ";
    cin>>c;
    }while(c=='y'||c=='Y');

    dObj.prnttree(obj.r, dObj.findHeight(obj.r));
/*
    cout<<"\nMaximum value: "<<obj.findMaxBST(obj.r)<<endl;
    cout<<"\nMinimum value: "<<obj.findMinBST(obj.r)<<endl;
    cout<<"Enter a search value:"<<endl;
    cin>>sVal;
    if(obj.findBST(obj.r,sVal)==true)
    {
        cout<<"The given value is found in the BST"<<endl;
    }
    else{
        cout<<"Data not found!"<<endl;
    }


    cout<<endl<<"Preorder display: "<<endl;;
    obj.preorder(obj.r);
    cout<<endl;
*/
    do
    {
    obj.bstDelete();
    dObj.prnttree(obj.r, dObj.findHeight(obj.r));
    cout<<"\nEnter another? Y/N: ";
    cin>>c;
    }while(c=='y'||c=='Y');





}
