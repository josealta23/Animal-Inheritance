#ifndef LINKED_BAG_
#define LINKED_BAG_
#include "BagInterface.h"
#include "Node.h"

template
class LinkedBag : public BagInterface
{
private:
Node* headPtr;
int itemCount;
Node* getPointerTo(const ItemType& target) const;

public:

LinkedBag();

LinkedBag(cont LinkedBag& aBag);

virtual ~LinkedBag();


int getCurrentSize() const;

bool isEmpty() const;

public void add(NODE *node1,int x){

while(node1->next!=null){

node1++;//increments 
}
node1->value=x;
node1->next=0;
}

bool remove(const ItemType& anEntry);
void clear();
bool contains(const ItemType& anEntry) const;
int getFrequencyOf(const ItemType& anEntry) const;
std::vector toVector() const;
};
