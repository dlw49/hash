#ifndef HASH
#define HASH
#include<iostream>
#include<fstream>
#include"hash.hpp"
#include"node.hpp"

class HashTable
{
  public:
    HashTable();
    void buildTable();
    void insert(std::string word);
    bool lookup(std::string word);
    int hash(std::string key);
    std::string show();
  private:
    static const int TABLESIZE = 101;
    Node * table[TABLESIZE];
};

#endif
