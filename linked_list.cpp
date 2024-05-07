#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node(int val ){
            this->val = val;
            next = NULL;
        }
};

void print_node( Node *head ){
    Node *tmp = head;
    while (tmp != NULL )
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void insert_at_tail( Node *head, int val ){
    Node *newNode = new Node(val);
    Node *tmp = head;
    while (tmp->next != NULL )
    {
        tmp = tmp->next;
    }
    
    tmp->next = newNode;
}


void delete_node( Node *head, int pos ){
    Node *tmp = head;
    for( int i=0; i<pos-1; i++ ){
        tmp = tmp->next;
    }
    Node *delNode = tmp->next;
    tmp->next = NULL;
    delete delNode;

}
int main(void){
 

    Node *a = new Node(10);
    Node *b = new Node(20);


    a->next = b;
    b->next = NULL;

    insert_at_tail(a, 99);
    print_node(a);
    delete_node(a,2);
    print_node(a);
    return 0;
}