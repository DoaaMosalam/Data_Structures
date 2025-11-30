//
// Created by DoaaM on 30/11/2025.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H



class LinkedList {
public:
    class Node {
    public:
        char data;
        int key;
        Node *next;
        //default constructor
        Node(int k, char d);

    };

    Node *head;
    Node* prev;
    Node *cursor;
public:
    LinkedList();
    bool ListIsEmpty();
    bool CursIsEmpty();
    void add_items(int k, char d);
    void FillListFromUser(LinkedList &myList);
    void printList() const;
    void toFirst();
    bool atFirst();
    void toEnd();
    bool atEnd();
    void Advance();
    void insertAtFirst(const int &k, const char &d);
    void insertAtLast(const int &k, const char &d);
    void insertAfter(const int &k, const char &d);
    void insertBefore(const int &k, const char &d);
    void updateData(const char &d);
    void updateKey(const int &k);
    void retrieveData(const char &d, const int &k);
    void deleteNode();
    void MakeListEmpty();

    void searchList( int k);
    void traverseList();
    int countNodes();





};



#endif //LINKEDLIST_H
