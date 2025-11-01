class node{
    int data;
    node address;
    node(int data){
        this.data=data;
        this.address=null;

    }
}
class linked_list{
    node head;
    void insert(int val){
        node newnode=new node(val);
        if(head==null){
            head=newnode;
            return;
        }
        node temp=head;
        while(temp.address!=null){
            temp=temp.address;
        }
        temp.address=newnode;
        

    }
    void print(){
        node temp=head;
        while(temp.address!=null){
            System.out.println(temp.data);
            temp=temp.address;
        }
        System.out.println(temp.data);
        
    }
    public static void main(String[] args) {
        
        linked_list list=new linked_list();
        list.insert(7);
        list.print();

    }
}