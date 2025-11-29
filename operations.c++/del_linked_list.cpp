#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int v)
    {
        data=v;
        next=nullptr;
    }
};

void del_front(node*&head){
    if(head==nullptr){
        cout<<"not posiible to del";
    }
    if(head->next==nullptr){
        head=nullptr;   
    }
    head=head->next;
}

void del_end(node*&head){
    if(head==nullptr){
        cout<<"not posiible to del";
    }
    if(head->next==nullptr){
        head=nullptr;   
    }
    node*t=head;
    while(t->next->next!=nullptr){
        t=t->next;
    }
    t->next=nullptr;

}

void del_pos(node*&head,int p){
    node*t=head;
    for(int i=0;i<p-1;i++){
        t=t->next;
    }
    t->next=t->next->next;
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
    node*head=new node(5);
    head->next=new node(6);
    head->next->next=new node(7);
    head->next->next->next=new node(9);
    head->next->next->next->next=new node(10);
    display(head);
    cout<<endl;
    del_front(head);
    display(head);
    cout<<endl;
    del_end(head);
    display(head);
    cout<<endl;
    del_pos(head,2);
    display(head);
    cout<<endl;
}