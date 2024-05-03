#include <iostream>
#include <cstring>

template<typename T>
T const& max(T const& a, T const& b)
{
  return b < a ? a : b;
}

char const* max(char const* a, char const* b)
{
  return std::strcmp(b, a) < 0 ? a : b;
}

template<typename T>
T const& max(T const& a, T const& b, T const& c)
{
  return max(max(a, b), c); // ! buggy
}

int main()
{
  auto m1 = ::max(7, 42, 68);
  auto m2 = ::max(7.0, 42.0, 68.0);
  auto m3 = ::max('a', 'b', 'c');
  char const* s1 = "seven";
  char const* s2 = "forty-two";
  char const* s3 = "sixty-eight";
  auto m4 = ::max(s1, s2, s3);
  std::cout << m4 << std::endl;
  
  return 0;
}