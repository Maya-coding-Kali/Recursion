// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
int term[1000];
int factorial(int n)
{
	int product = 1;
	for (int i = 1; i <= n; i++)
	{
		product *= i;
	}
    return product;
}
int FactorialRecursion(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return n * FactorialRecursion(n - 1);
}
int FibonacciIter(int n)
{
	
	int first = 0, second = 1;
	int sum = 0;
	for (int i = 0; i < (n - 2); i++)
	{
		sum = first + second;
		first = second; 
		second = sum;
	}
	if (n == 2)
	{
		return 1;
	}
	return sum;
}
int FibonacciRecursion(int n)
{
	
	if (n < 2)
	{
		return n;
	}
	return FibonacciRecursion(n - 1) + FibonacciRecursion(n - 2);
}
int MemoizedFib(int n)
{
	if (n<=1)
	{
		return n;
	}
	if (term[n] != -1)
	{
		return term[n];
	}
		term[n] = MemoizedFib(n - 1) + MemoizedFib(n - 2);
		return term[n];
}
int main()
{
	for (int i = 0; i < 1000; i++)
	{
		term[i] = -1;
	}
    std::cout << MemoizedFib(9);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
