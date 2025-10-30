class node{
    int data;
    node next=null;
    node(int data){
        this.data=data;
        this.next=null;
    } 
    
}

class linked_list{

    node head;
    void insert(int val){
        node newnode=new node(val);
        if(head ==null){
            head=newnode;
            return;
        }
        node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=newnode;

    }
    void display(){
        node temp=head;
        while(temp.next!=null){
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.println(temp.data);
    }
    public static void main(String[] args) {
       linked_list list=new linked_list();
       list.insert(10);
       list.insert(11);
       list.insert(55);
       list.display();


    }
    
}

