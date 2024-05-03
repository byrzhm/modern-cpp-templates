int max(int a, int b)
{
  return b < a ? a : b;
}

template<typename T>
T max(T a, T b)
{
  return b < a ? a : b;
}

int main()
{
  ::max(7, 42); // calls the nontemplate for two ints
  ::max(7.0, 42.0); // calls the template for two doubles
  ::max('a', 'b'); // calls the template for two chars
  ::max<>(7, 42); // calls the template for two ints
  ::max<double>(7, 42); // calls the template for two doubles
  ::max('a', 42.7); // calls the template for a char and a double
  return 0;
}
