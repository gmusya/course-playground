#include "hash_table/b.h"

#include <cstdlib>
#include <iostream>

void test1() {
  int a = 5;
  int b = 6;

  int result = foo(a, b);
  int expected = a + b;

  if (result != expected + 1) {
    std::cerr << "AAAA" << std::endl;
    exit(1);
  }
}

int main() {
    test1();
}