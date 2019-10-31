#include"hash.hpp"

HashTable::HashTable()
{
  for(int i = 0; i < TABLESIZE; i++)
    table[i] = nullptr;
}

void HashTable::buildTable()
{
  std::string word;
  
  std::ifstream in("dictionary.txt");
  if(in.fail())
    std::cout << "file not open" << std::endl;
  while(in >> word)
  {
  std::cout << "word " << word << std::endl;
    insert(word);
  }
  show();
}

void HashTable::insert(std::string word)
{
  int pos = hash(word);
  Node * tmp = new Node(word);
  tmp->next = table[pos];
  table[pos] = tmp;
}

bool HashTable::lookup(std::string word)
{
  int pos = hash(word);
  Node * tmp = table[pos];
  while(tmp !=nullptr)
    if(tmp->word == word)
      return true;
    else
       tmp = tmp->next;
  return false;  
}

int HashTable::hash(std::string key)
{
  int tot = 0;
  for(unsigned int i = 0; i < key.length(); i++)
    tot += 27 * (i+1) * key.at(i);
  return tot % TABLESIZE;
}

std::string HashTable::show()
{
  std::string theSt = "";
  for(int i = 0; i < TABLESIZE; i++)
  {
    Node * tmp = table[i];
    while(tmp != nullptr)
    {
      theSt += tmp->word + " ";
      tmp = tmp->next;
    }   
  }
  return theSt;
}
