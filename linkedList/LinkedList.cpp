//
// Created by DoaaM on 30/11/2025.
//

#include "LinkedList.h"
#include <iostream>
using namespace  std;
#include <ranges>
using namespace std;
// constructor
LinkedList::LinkedList() : head(nullptr), prev(nullptr), cursor(nullptr) {}

// constructor of Node
LinkedList::Node::Node(int k, char d) {
    key = k;
    data = d;
    next = nullptr;
}

// Check if list is empty

bool LinkedList::ListIsEmpty() {
   if (head ==nullptr) {
       cout<<"List is empty"<<endl;
       return true;
   } else {
        cout<<"List is not  empty"<<endl;
       return false;
    }
}
bool LinkedList::CursIsEmpty() {
    if (cursor == nullptr) {
        cout<<"Cursor is empty"<<endl;
        return true;
    }else {
        cout<<"Cursor is not  empty"<<endl;
        return false;
    }

}
void LinkedList::add_items(int k, char d) {

    Node *n = new Node(k,d);
    if (ListIsEmpty() && CursIsEmpty()) {
        head = n;
    }else {
        Node * temp = head;
        while (temp -> next != nullptr) {
            temp = temp -> next;
        }
        temp -> next = n;
    }
}
void LinkedList::printList() const {
    // if (ListIsEmpty()) {
    //     return;
    // }

    Node* temp = head;
    cout << "List is: ";
    while (temp != nullptr) {
        cout << "(" << temp->key << ", " << temp->data << ") -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}



void LinkedList::FillListFromUser(LinkedList &myList) {
    int n;
    cout<<"Enter the number of items you want to add: "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int key;
        char data;
        cout<<"Enter key for item "<<i+1<<": "<<endl;
        cin>>key;
        cout<<"Enter data for item "<<i+1<<": "<<endl;
        cin>>data;
        myList.add_items(key,data);
    }
}

void LinkedList::toFirst() {
    cursor =head; prev=NULL;
}
bool LinkedList::atFirst() {
    return cursor == head;
}
void LinkedList::Advance() {
    prev = cursor;
    cursor = cursor -> next;
}

void LinkedList::toEnd() {
    toFirst();
    if (!ListIsEmpty()) {
        while (cursor -> next != nullptr) Advance();
    }
}
bool LinkedList::atEnd() {
    if (ListIsEmpty()) {
        return true;
    }else if (CursIsEmpty()) {
        return false;
    } else {
        cursor = cursor -> next = nullptr;
        return true;

    }
}

void LinkedList::insertAtFirst(const int &k, const char &d) {

    Node* newNode = new Node(k,d);
    newNode->next = head;
    head = newNode;
    cursor = head;
    prev=NULL;



}

void LinkedList::insertAtLast(const int &k, const char &d) {
    if (ListIsEmpty()){
        insertAtFirst(k,d);
    return;
}
        toEnd();
    Node *newNode = new Node(k,d);
    cursor -> next = newNode;
    cursor = newNode;
}

void LinkedList::insertAfter(const int &k, const char &d) {
    Node *newNode = new Node(k,d);
    newNode -> next = cursor;
    prev->next = newNode;
    cursor = newNode;
}

void LinkedList::insertBefore(const int &k, const char &d) {
    Node *newNode = new Node(k,d);
    newNode -> next = cursor;
    prev->next = newNode;
    cursor = newNode;
}

void LinkedList::updateData(const char &d) {
    cursor -> data = d;
}

void LinkedList::updateKey(const int &k) {
    cursor ->key = k;
}

void LinkedList::retrieveData(const char &d, const int &k) {
    cursor -> data = d;
    cursor -> key = k;
}

void LinkedList::deleteNode() {
    if (ListIsEmpty() || CursIsEmpty()) {
        cout<<"List or current position is empty. Cannot delete node."<<endl;
        return;
    }

    if (cursor == head) {
        Node* temp = head;
        head = head->next;
        cursor = head;
        delete temp;
    } else {
        prev->next = cursor->next;
        Node* temp = cursor;
        cursor = cursor->next;
        delete temp;
    }
}

void LinkedList::MakeListEmpty() {
    toFirst();
    while (!ListIsEmpty())
        deleteNode();
}

void LinkedList::searchList(int k){
    toFirst();
    prev = nullptr;

    while (cursor != nullptr) {
        if (cursor->key == k) {
            cout << "Key found: " << cursor->key << ", Data: " << cursor->data << endl;
            return;
        }
        prev = cursor;
        cursor = cursor->next;
    }
    cout << "Key " << k << " not found in the list." << endl;
    cursor = nullptr;
    prev = nullptr;


}

void LinkedList::traverseList() {
    toFirst();
    // while (!CursIsEmpty()) {
        cout<< cursor-> data<< endl;
        Advance();
    // }
}

int LinkedList::countNodes() {

    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}






