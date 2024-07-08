#include "node.cpp"
class linkedlist{
    public:
        node* head;
    linkedlist(){
        head=NULL;
        
    }
  node* insert(int value){
    node* newNode=new node(value);
    //case1:If linked list is empty
    if(head==NULL){
        head=newNode;
    }
    //case2:Insert at the end if linked list is not empty
    else{
        node* temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newNode;
   
 }
 return head;

 }

 void print(){
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<", ";
        temp=temp->next;
        
    }


 } 
       
};
int main(){
  linkedlist obj;
  for(int i=10;i<100;i+=10){
    obj.insert(i);
}
obj.print();



}