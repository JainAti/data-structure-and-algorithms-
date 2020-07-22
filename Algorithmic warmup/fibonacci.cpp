#include <iostream>
#include <cassert>
#include<bits/stdc++.h>
using namespace std;
/*Task. Given an integer n, find the last digit of the nth Fibonacci number F n (that is, F n mod 10).
Input Format. The input consists of a single integer n.
Constraints. 0 ≤ n ≤ 10 7 .
Output Format. Output the last digit of F n .*/


int fib(int n) 
{ 

  int f[n+2];
  int i; 
  
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
  
int main () 
{ 
  int n;
  cin>>n;
  cout<<fib(n);
  return 0; 
} 
