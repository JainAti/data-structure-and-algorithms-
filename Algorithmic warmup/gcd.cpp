#include <iostream>
#include <bits/stdc++.h>
using namespace  std;


int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd(int a , int b)
{
  if(a>b && a != 0 && b!=0)
  {
    if(a%b != 0)
    {
      a = a%b;
      gcd(a , b);
    }
    else 
    {
      return b;

    }
  }
  else if(b>a && a != 0 && b!=0)
  {
    if(b%a != 0)
    {
      b = b%a;
      gcd(a,b);
    }
    else
    {
      return a;
    }
  }
  else
  {
    return a;
  }


}


int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}
