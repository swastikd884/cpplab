#include <iostream>
using namespace std;

int main() {

  int low103, high_103, i;
  bool is_prime = true;

  cout << "Enter two numbers (intervals): ";
  cin >> low103 >> high_103;

  cout << "\nPrime numbers between " << low103 << " and " << high_103 << " are: " << endl;

  while (low103 < high_103) {
    is_prime = true;

    // 0 and 1 are not prime numbers
    if (low103 == 0 || low103 == 1) {
      is_prime = false;
    }
 
    for (i = 2; i <= low103/2; ++i) {
      if (low103 % i == 0) {
        is_prime = false;
        break;
      }
    }
        
    if (is_prime)
      cout << low103 << ", ";

    ++low103;
  }

  return 0;
}
