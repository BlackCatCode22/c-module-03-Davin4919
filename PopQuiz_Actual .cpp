//
// Created by BE129 on 9/17/2025.
//
#include <iostream>
#include <string>

using namespace std;

struct Node {
    char data;
    Node* next;
};

int main() {

string myStr = "abcDefg";
    Node* pHead = nullptr;
    Node* pNew = new Node;
    pNew -> data = myStr[0];
    pNew -> next = nullptr;
    cout << "\n output the data and next: \n";
    cout << pNew -> data << endl;
    cout << pNew -> next -> data << endl;

    pHead  =pNew;
    cout << pHead -> data << endl;

    cout << "\n output that pHead and next: \n";
    cout << pHead -> data << endl;
    cout << pHead -> next -> data << endl;

    return 0;

}