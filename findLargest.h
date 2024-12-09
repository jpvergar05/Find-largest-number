#include "IntNode.h"

int findLargest(IntNode* head) {
    if (head == nullptr) {
        return 0; 
    }

    
    int largest = head->getData();
    IntNode* current = head;
    while (current != nullptr) {
        if (current->getData() > largest) {
            largest = current->getData();
        }
        current = current->getLink();
    }

    
    IntNode* newNode = new IntNode(largest, nullptr); 
    current = head;
    while (current->getLink() != nullptr) { 
        current = current->getLink();
        current = current->
    } 
    current->setLink(newNode);
    
    return largest;
}
