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
void add_front(node*&head,int val){
    node*newnode=new node(val);
    if(head==nullptr){
        head=newnode;
        return;
    }
    //   h= NN=55->22,33,44  
    newnode->next=head;
    head=newnode;
    
    
}
void add_kthposition(node*&head,int p,int val){
    node*newnode=new node(val);
    node*temp=head;
    for(int i=0;i<p-1;i++){
        temp=temp->next;

    }
    node*temp1;
   temp1= temp->next;
   temp->next=newnode;
   newnode->next=temp1;


}
void display(node*head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;

}
int main(){
    node*head=nullptr;
    vector<int>nums={5,6,7,8,9};
    for(int i=0;i<nums.size();i++){
    add_front(head,nums[i]);
    
}
add_kthposition(head,2,33);


display(head);



}