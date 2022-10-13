// C++ program to add two number
// using log and exponential
#include <bits/stdc++.h>
using namespace std;

// Function to return sum
// of two number
int addTwoNumber(int A, int B)
{
	// Return sum of A and B
	return log(exp(A) * exp(B));
}

// Driver Code
int main()
{
	// Given two number
	int A = 4, B = 11;

	// Function call
	printf("sum = %d", addTwoNumber(A, B));
	return 0;
}
