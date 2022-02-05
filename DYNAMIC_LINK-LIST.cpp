



#include <iostream>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *node2 = new Node(20);
    node1 -> next = node2;

    Node *node3 = new Node(20);
    node2 -> next = node3;

    Node *node4 = new Node(20);
    node3 -> next = node4;

    
    print(head);
