/*Sum of Two Digits Problem
Compute the sum of two single digit numbers.
2+3 = 5
Input: Two single digit numbers.
Output: The sum of these num-
bers.
We start from this ridiculously simple problem to show you the
pipeline of reading the problem statement, designing an algorithm, im-
plementing it, testing and debugging your program, and submitting it to
the grading system.
Input format. Integers a and b on the same line (separated by a space).
Output format. The sum of a and b.
Constraints. 0 ≤ a, b ≤ 9.*/
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

int main()
{
	int n,max=0 ;
	long long int c=0;
	std::cin >> n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin() , a.end() , greater<int>());
	c = a[0] * a[1];
	cout>>c;




}





