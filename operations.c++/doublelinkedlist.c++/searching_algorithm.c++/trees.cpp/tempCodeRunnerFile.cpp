#include<bits/stdc++.h>
using namespace std;
struct tree{
    int data;
    tree*left;
    tree*right;
    tree(int val){
        data =val;
        left=nullptr;
        right=nullptr;
    }
};

void inorder (tree*root,vector<int>&res)
{
    if(root==nullptr)
    return;
res.push_back(root->data);
inorder(tree->left,res);
inoder(tree->right,res);

}




int main(){
    tree*root=new tree(1);
    root->left=new tree(2);
    root->right=new tree(3);
    root->left->left=new tree(4);
    root->left->right=new tree(5);
    root->right->left=new tree(6);
    root->right->right=new tree(7);
    vector<int> result;
    inorder(root,result);


for(int i=0;i<res.size();i++);
cout<<result[i];
return 0;
}

