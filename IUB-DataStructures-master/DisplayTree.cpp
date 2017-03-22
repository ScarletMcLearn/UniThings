#include <iostream>
#include"DisplayTreeHeader.cpp"
using namespace std;
/*struct TreeNode
	{
		float data;
		struct TreeNode *left;
		struct TreeNode *right;
	};*/
class TreeDisplay{

public:
    void preorder(TreeNode * root)
    {
        if(root==NULL) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(TreeNode * root)
    {
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void postorder(TreeNode * root)
    {
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

};

int main()
{

Tree obj(10);


TreeDisplay tObj;
cout<<endl<<"Display in Preorder: "<<endl;
tObj.preorder(obj.root);
cout<<endl;

cout<<endl<<"Display in Inorder: "<<endl;
tObj.inorder(obj.root);
cout<<endl;

cout<<endl<<"Display in Postorder: "<<endl;
tObj.postorder(obj.root);
cout<<endl;


return 0;
}

