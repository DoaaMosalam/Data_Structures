#include <iostream>

#include "linkedList/LinkedList.h"

using namespace std;
int main() {
    LinkedList list;
    // list.ListIsEmpty();
    // list.CursIsEmpty();
    list.add_items(1,'A');
    list.add_items(2,'B');
    list.add_items(3,'C');
    list.add_items(4,'D');
    list.add_items(5,'E');
        list.printList();
    cout<< "============================="<<endl;
    cout<<"insert item at first list"<<endl;
    list.insertAtFirst(0,'Z');
        list.printList();
    cout<< "============================="<<endl;
    cout<<"insert item at Last End list"<<endl;
    list.insertAtLast(6,'F');
        list.printList();
    cout<< "============================="<<endl;
    cout<<"insert item at after list"<<endl;
    list.insertAfter(3,'G');
        list.printList();
    cout<< "============================="<<endl;
    cout<<"insert item at before list"<<endl;
    list.insertBefore(4,'H');
        list.printList();
    cout<< "============================="<<endl;
    cout<<"Retrieve data Key and data"<<endl;
    list.retrieveData(1,'A');
    list.printList();
    cout<< "============================="<<endl;
    cout<<"Update data at current position"<<endl;
    list.updateData('X');
    list.printList();
    cout<< "============================="<<endl;
    cout<<"Search for key "<<endl;
    list.searchList(5);
    list.printList();
    cout<< "============================="<<endl;
    cout<<"Traverse list "<<endl;
    list.traverseList();
    cout<< "============================="<<endl;
    cout<<"Count nodes in the list "<<endl;
    int count = list.countNodes();
    cout<<"Number of nodes = "<< count << endl;
    list.printList();

    return 0;
}
