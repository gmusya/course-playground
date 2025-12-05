#include "gtest/gtest.h"

#include "hash_table/b.h"
#include <cstdlib>
#include <iostream>

TEST(A, B) {
  std::map<int, int> x;
  x[5] = 4;

  ASSERT_EQ(x[5], 4);

  ASSERT_FALSE(x.contains(5));

  ASSERT_EQ(x[0], 0);

  x.clear();

  ASSERT_FALSE(x.contains(5));
}
