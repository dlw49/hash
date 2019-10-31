#define CATCH_CONFIG_MAIN

#include<sstream>

#include "catch/catch.hpp"
#include "../node.hpp"
#include "../hash.hpp"

TEST_CASE("class Node")
{
  Node n("hello");
  REQUIRE(n.getWord() =="hello");
  REQUIRE(n.getNext() == nullptr);
}

TEST_CASE("class HashTable")
{
  HashTable h;
  h.buildTable();
  REQUIRE(h.show() == "today i apple am hello you how the fine world an are a tree ");
  REQUIRE(h.lookup("hello") == true);
  REQUIRE(h.lookup("asdfg") == false);
}
