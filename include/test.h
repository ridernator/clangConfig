#pragma once
#include <tuple>
class Test {
 public:
  Test(int                           a,
       int                           b,
       const float                   c,
       std::tuple<int,
                  float,
                  std::tuple<int,
                             float>> d,
       [[maybe_unused]] double       e);

 private:
  void privMeth();
  int  privVar;
};
