#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int v){
    data=v;
    next=nullptr;
    }

};
void add_back(node*&head,int val){
    node*newnode=new node(val);
    if(head==nullptr){
        head=newnode;
        return;
    }
   node*temp=head;
   while(temp->next!=nullptr){
    temp=temp->next;

    }
    temp->next=newnode;
}
void display(node*head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<temp->data;

}
int main(){
    node*head=nullptr;
    vector<int>nums={5,6,7,8,9};
    for(int i=0;i<nums.size();i++){
    add_back(head,nums[i]);
}

display(head);


}