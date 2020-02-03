#include<iostream>
using namespace std;

class linked{

public:
    int data;
    linked* next;

    linked(int d){

        data = d;
        next = NULL;

    }

};

void insert(linked* &head,linked* &tail,int data){

    if(head == NULL){

        linked *n = new linked(data);
        head  = n;
        tail = n;

    }

    else
    {
        linked *n = new linked(data);
        tail->next = n;
        tail = n;
    }    

}

void print(linked *head){

    while (head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;

    }
    
    cout<<"X";

}

linked* RemoveDuplicates(linked *head)
{
    if (head == NULL) {
        
        return nullptr;
        
    }
    linked *curr = head;
    linked *aux;

    while (curr->next != nullptr) {
      if (curr->data == curr->next->data) {
          aux = curr->next->next;
          delete curr->next;
          curr->next = aux;
      }
      else {
          curr = curr->next;
      }  
  }
  return head;
}


int main(){

    linked *A,*tail;
    A = tail = NULL;

    insert(A,tail,1);
    insert(A,tail,2);
    insert(A,tail,2);
    insert(A,tail,3);
    insert(A,tail,3);
    insert(A,tail,3);
    insert(A,tail,4);
    insert(A,tail,5);

    print(A);
    cout<<endl;

    RemoveDuplicates(A);

    print(A);

}