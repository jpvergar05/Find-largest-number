#ifndef INT_NODE_H
#define INT_NODE_H

class IntNode
{
private:
    int data;
    IntNode* link;
public:
    IntNode();
    IntNode(int theData, IntNode* theLink);
    IntNode* getLink() const;
    int getData() const;
    void setData(int theData);
    void setLink(IntNode* pointer);
};

#endif
