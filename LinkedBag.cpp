#include "LinkedBag.h"

template
LinkedBag::LinkedBag():headPtr(nullptr), itemCount(0)
{}

template
LinkedBag::LinkedBag(const LinkedBag& aBag)
{
itemCount = Bag_itemCount;
Node* originalPtr = aBag.headPtr; // Points to nodes in original chain

if (originalPtr == nullptr)
headPtr = nullptr;
else
{
headPtr = new Node();
headPtr->setItem(originalPtr->getItem()); 
};
