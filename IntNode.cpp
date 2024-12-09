#include "IntNode.h"

IntNode::IntNode() {
	data = 0;
	link = nullptr;
}
IntNode::IntNode(int theData, IntNode* theLink) {
	data = theData;
	link = theLink;
}

IntNode* IntNode::getLink() const {
	return link;
}

int IntNode::getData() const {
	return data;
}

void IntNode::setData(int theData) {
	data = theData;
}

void IntNode::setLink(IntNode* pointer) {
	link = pointer;
}
