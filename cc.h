#pragma once

#include <cstdlib>
#include <queue>

struct Foo {
};

class CCTest {
public:
  void test();

private:
  std::queue<Foo> queue_;
};
