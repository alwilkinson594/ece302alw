#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "add.hpp"

// force template expansion
template class Add<int>;

TEST_CASE("Test add", "[Add]"){

  Add<int> a;
  REQUIRE(a.call(1,2)==3);

  Add<int> b;
  REQUIRE(b.call(5,7)==12);

  Add<int> c;
  REQUIRE(c.call(13,21)==34);

  Add<int> d;
  REQUIRE(d.call(22,53)==75);

  Add<int> e;
  REQUIRE(e.call(4,6)==10);
}
