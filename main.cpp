#include "IntNode.h"
#include "findLargest.h"
#include <iostream>

using namespace std;

IntNode* inputList();
void printList(IntNode* list);

int main() {
   cout << "Enter list: " << endl;
   IntNode* list = inputList();
   int result = findLargest(list);

   cout << "Result of calling function is: " << result << endl;

   cout << endl << "List after calling function: ";
   printList(list);
}

void printList(IntNode* list) {
   IntNode* current = list;
   
   while (current != nullptr) {
      cout << current->getData() << " ";
      current = current->getLink();
   }
   cout << endl;
}

IntNode* inputList() {
   int numItems;
   cout << "How many items in list? ";
   cin >> numItems;
   cout << endl;
   
   IntNode* head = nullptr;
   IntNode* tail = nullptr;
   
   cout << "Enter items: ";
   for (int i = 0; i < numItems; i++) {
      int data;
      cin >> data;
      
      IntNode* newNode = new IntNode(data, nullptr);
      if (head == nullptr) {
         head = newNode;
         tail = newNode;
      } else {
         tail->setLink(newNode);
         tail = newNode;
      }
   }
   
   cout << endl;
   return head;
}
