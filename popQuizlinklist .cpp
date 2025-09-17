//
// Created by Daniel A on 9/17/2025.
//

#include <iostream>
#include <string>

using namespace std;

struct Node {
    char data;
    Node* next;
};

int main() {
    string myStr = "abDdefg";

    Node* head = nullptr;

    for (char ch : myStr) {
        Node* newNode = new Node{ch, head};
        head = newNode;
    }

    Node* current = head;
    while (current) {
        cout << current->data;
        current = current->next;
    }
    cout << endl;
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
