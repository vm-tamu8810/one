#include <concepts>
#include <external/doctest.h>
#include <one/common/basic_types.hpp>

TEST_CASE("basic_types") {

SUBCASE("Type consistency test") {
  CHECK(std::same_as<one::int8,  std::int8_t>);
  CHECK(std::same_as<one::int16, std::int16_t>);
  CHECK(std::same_as<one::int32, std::int32_t>);
  CHECK(std::same_as<one::int64, std::int64_t>);

  CHECK(std::same_as<one::uint8,  std::uint8_t>);
  CHECK(std::same_as<one::uint16, std::uint16_t>);
  CHECK(std::same_as<one::uint32, std::uint32_t>);
  CHECK(std::same_as<one::uint64, std::uint64_t>);

  CHECK(std::same_as<one::float32, float>);
  CHECK(std::same_as<one::float64, double>);

  CHECK(std::same_as<one::isize, std::ptrdiff_t>);
  CHECK(std::same_as<one::usize, std::size_t>);

  CHECK(std::same_as<one::char8,  char8_t>);
  CHECK(std::same_as<one::char16, char16_t>);
  CHECK(std::same_as<one::char32, char32_t>);
  CHECK(std::same_as<one::wchar,  wchar_t>);
}

SUBCASE("Size consistency test") {
  CHECK(sizeof(one::int8)  == sizeof(std::int8_t));
  CHECK(sizeof(one::int16) == sizeof(std::int16_t));
  CHECK(sizeof(one::int32) == sizeof(std::int32_t));
  CHECK(sizeof(one::int64) == sizeof(std::int64_t));

  CHECK(sizeof(one::uint8)  == sizeof(std::uint8_t));
  CHECK(sizeof(one::uint16) == sizeof(std::uint16_t));
  CHECK(sizeof(one::uint32) == sizeof(std::uint32_t));
  CHECK(sizeof(one::uint64) == sizeof(std::uint64_t));

  CHECK(sizeof(one::float32) == sizeof(float));
  CHECK(sizeof(one::float64) == sizeof(double));

  CHECK(sizeof(one::isize) == sizeof(std::ptrdiff_t));
  CHECK(sizeof(one::usize) == sizeof(std::size_t));

  CHECK(sizeof(one::char8)  == sizeof(char8_t));
  CHECK(sizeof(one::char16) == sizeof(char16_t));
  CHECK(sizeof(one::char32) == sizeof(char32_t));
  CHECK(sizeof(one::wchar)  == sizeof(wchar_t));
}

} // TEST_CASE("basic_types")
