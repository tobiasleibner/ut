#include <boost/ut.hpp>

#define EXPECT_THAT(expr) expect(that % expr) << "\"" #expr "\"\n"

int main() {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "basic"_test = [] {
    int a1 = 1, a2 = 1, a3 = 1, a4 = 1, a5 = 1, a6 = 1;
    int b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0;

    EXPECT_THAT(a1 == b1);
    EXPECT_THAT(a2 == b2);
    EXPECT_THAT(a3 == b3);
    EXPECT_THAT(a4 == b4) << fatal;
    EXPECT_THAT(a5 == b5);
    EXPECT_THAT(a6 == b6);
  };
}
