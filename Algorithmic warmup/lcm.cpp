#include <iostream>
#include <bits/stdc++.h>
using namespace  std;




long gcd(long a , long b)
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
  long a, b;
  std::cin >> a >> b;
  long l;
  l = (a*b)/gcd(a,b);
  std::cout << l << std::endl;
  return 0;
}
