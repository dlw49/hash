#include"hash.hpp"

#include<iostream>
using namespace std;

void process(HashTable h, string word)
{
  bool found = h.lookup(word);
  if(found)
    cout << word << " found" << endl;
  else
    cout << word << " not found" << endl;

}

int main()
{
  HashTable h;
  h.buildTable();
  process(h, "hello");
  process(h, "the");
  process(h, "fine");
  process(h, "hurricane"); 
  process(h, "baseball");
  process(h, "teh");  
  return 0;
}