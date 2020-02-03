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

    else
    {
        linked *n = new linked(data);
        tail->next = n;
        tail = n;
    }

}


void insertfront(linked* &head,int data){

    if(head == NULL){

        linked *n = new linked(data);
        head = n;

    }
    else{

        linked* n = new linked(data);
        n->next = head;
        head = n;

    }
}

void print(linked *head){

    while(head != NULL){

        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<"X";

}

void cycle(linked* head){

    linked *temp = NULL;

    temp = head;

    while(temp->next != NULL){

        temp = temp->next;

    }

    temp->next = head;

}

bool checkcycle(linked* head){

    linked *fast = head;
    linked *slow = head;

    while(fast){

        fast = fast->next->next;
        slow = slow->next;

        if (fast = slow)
        {
            
            return true;


        }
    }

    return false;

}

void deletefront(linked* &head,linked* &tail){

    if(head== NULL){

        return;

    }

    else if(head == tail){

        delete head;
        head = NULL;
        tail = NULL;

    }

    else
    {
        linked *temp = NULL;
        temp = head;
        head = head->next;
        delete temp;
    }
    
}

void deleteend(linked* &head,linked* &tail)

{

	if(head==NULL)

	{

		return;

	}

	else if(head==tail)

	{

		delete head;

		head=NULL;

		tail=NULL;

	}
	else

	{

		linked* n=head;

		while(n->next!=tail)

		{

			n=n->next;

        }

		delete tail;

		n->next=NULL;

		tail=n;
	}

}


int main(){

    linked *A,*B,*tail;

    A = tail = B = NULL;

    insert(A,tail,1);
    insert(A,tail,2);
    insert(A,tail,3);
    insert(A,tail,4);
    insert(A,tail,5);
    insert(A,tail,6);
    insert(A,tail,7);
    insert(A,tail,8);
    
    insertfront(B,1);
    insertfront(B,2);
    insertfront(B,3);
    insertfront(B,4);
    insertfront(B,5);

    print(A);
    cout<<endl;
    print(B);
    deletefront(A,tail);
    cout<<endl;
    print(A);
    deleteend(A,tail);
    cout<<endl;
    print(A);
    // cycle(A);
    // cout<<endl;
    // if(checkcycle(A) == true){

    //     cout<<"True";

    // }

    // else
    // {
    //     cout<<"False";
    // }
    
}