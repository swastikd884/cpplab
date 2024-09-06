#include <iostream>
using namespace std;
int checkPrime_103(int n_103);
int main() {
  int n_103, i_103, flag_103 = 0;
  cout<<"Enter a positive integer: ";
  cin>>n_103;

  for (i_103 = 2; i_103 <= n_103 / 2; ++i_103) {
    
    if (checkPrime_103(i_103) == 1) {
      
      if (checkPrime_103(n_103 - i_103) == 1) {
        cout<<n_103<<"="<<i_103<<"+"<<n_103 - i_103;
        flag_103 = 1;
      }
    }
  }

  if (flag_103 == 0)
    cout<<n_103<<"cannot be expressed as the sum of two prime numbers.";

  return 0;
}


int checkPrime_103(int n_103) {
  int i_103, isPrime_103 = 1;

  if (n_103 == 0 || n_103 == 1) {
    isPrime_103 = 0;
  }
  else {
    for(i_103 = 2; i_103 <= n_103/2; ++i_103) {
      if(n_103 % i_103 == 0) {
        isPrime_103 = 0;
        break;
      }
    }
  }

  return isPrime_103;
}
