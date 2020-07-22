#include <iostream>
#include <cassert>
#include<bits/stdc++.h>
#include <math.h> 
using namespace std;


// The following code calls a naive algorithm for computing a Fibonacci number.
//
// What to do:
// 1. Compile the following code and run it on an input "40" to check that it is slow.
//    You may also want to submit it to the grader to ensure that it gets the "time limit exceeded" message.
// 2. Implement the fibonacci_fast procedure.
// 3. Remove the line that prints the result of the naive algorithm, comment the lines reading the input,
//    uncomment the line with a call to test_solution, compile the program, and run it.
//    This will ensure that your efficient algorithm returns the same as the naive one for small values of n.
// 4. If test_solution() reveals a bug in your implementation, debug it, fix it, and repeat step 3.
// 5. Remove the call to test_solution, uncomment the line with a call to fibonacci_fast (and the lines reading the input),
//    and submit it to the grader.

long fib(long n) 
{ 

  long f[n+2];
  long  i; 
  
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
long period(long m)
{
  long pre = 0;
  long curr = 1;
  for( long y = 2 ; y<m*m ; y++)
  {
    pre = curr;
     curr = fib(y) % m;

     if(pre == 0 && curr == 1)
     {
      return y -1;
     }


  }
}
  
int main () 
{ 
  long  n ;
  long  m;
  cin >> n >> m;
  
  long k ;
  long p;
  p = period(m);
  cout << p; 
  cout << " ";
  k = n%p;
  cout<< k;
  cout<< " ";
  
  cout<< fib(k) % m;
  return 0; 
} 
