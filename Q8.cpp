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
        head = n;
        tail = n;

    }
    else{

        linked* n = new linked(data);
        tail->next = n;
        tail = n;

    }

}

void cycle(linked* head){

    linked *temp = head;

    while (temp->next!= NULL)
    {

        temp = temp->next;

        
    }
    
    temp->next = head->next->next;

}

bool checkcycle(linked* head){

    linked *fast = head;
    linked *slow = head;

    while(fast){

        fast = fast->next;
        slow = slow->next;

        if (fast = slow)
        {
            
            return true;


        }
    }

    return false;

}



int main(){

    linked *A,*tail;
    A = tail = NULL;
    insert(A,tail,1);
    insert(A,tail,2);
    insert(A,tail,3);
    insert(A,tail,4);
    insert(A,tail,5);
    insert(A,tail,6);
    insert(A,tail,7);
    insert(A,tail,8);

    cycle(A);

    if (checkcycle(A))
    {
        cout<<"True"<<endl;
    }
    else{

        cout<<"False"<<endl;

    }
    

}