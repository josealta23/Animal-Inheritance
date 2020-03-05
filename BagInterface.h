using namespace std;

#ifndef BAG_INTERFACE_
#define BAG_INTERFACE_

template
class BagInterface
{
public:
  virtual int getCurrentSize() const=0;

  virtual bool isEmpty() const=0;

  virtual bool Add(const ItemType& newEntry)=0;

  virtual bool Remove(const ItemType& anEntry)=0;

  virtual void Clear()=0;

  virtual int getFrequencyOf(const ItemType& anEntry) const=0;

  virtual bool Contains(const ItemType& anEntry) const=0;

  virtual vector toVector() const=0;

  virtual -BagInterface() {}
};
#endif
 
