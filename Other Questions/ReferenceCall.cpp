#include <iostream>
using namespace std;

// CALL BY REFERENCE
void swap(int &x, int &y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a = 10, b = 20;

  cout << "Before swapping a = " << a << " | b = " << b << endl;
  swap(a, b);
  cout << "After swapping a = " << a << " | b = " << b << endl;
  return 0;
}