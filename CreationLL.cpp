#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
};

int main(){
    node *head=new node;
    head->data=10;
    head->next=NULL;
    
    node *second=new node;
    second->data=20;
    second->next=NULL;
    head->next=second;

    node *third=new node;
    third->data=30;
    third->next=NULL;
    second->next=third;

    node *p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }

}