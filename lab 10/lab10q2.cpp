#include <iostream>
using namespace std;

template <class T>
void Bsearch(T *a, T item, int n)
{
  int beg = 0, end = n - 1;
  int mid = beg + end / 2;

  while ((a[mid] != item) && (n > 0))
  {
    if (item > a[mid])
      beg = mid;
    else
      end = mid;

    mid = (beg + end) / 2;

    n--;
  }

  if (a[mid] == item)
    cout << "\n Item found at position = " << mid + 1 << "\n\n";
  else
    cout << "\n Item not found in the list\n\n";
}

int main()
{
  int iarr[10] = {2, 42, 56, 86, 87, 99, 323, 546, 767, 886};
  int iele;

  cout << "\n Elements of Integer Array \n";
  for (int i = 0; i < 10; i++)
  {
    cout << " " << iarr[i] << " ,";
  }
  cout << "\n\n Enter an item to be search: ";
  cin >> iele;

  cout << "\n\n Binary Search method\n";
  Bsearch(iarr, iele, 10);
  return 0;
}
