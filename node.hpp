#ifndef NODE
#define NODE
#include<string>

class Node
{
  public:
    Node(std::string val) { this->word = val; this->next = nullptr; }
    std::string getWord() {  return word; }
    Node * getNext() { return next; }
  private:
    std::string word;
    Node * next;
    friend class HashTable;
};

#endif
