#pragma once
#include <iostream>
#include <math.h>
using namespace std;

void swapArg(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	return;
}
int gcd(int a, int b)
{
	if (a < 0 || b < 0)
		return -1;
	if (a < b)
		swapArg(a, b);
	if (b == 0)
		return a;
	return gcd(b, a % b);

}
int kmm(int a, int b)
{
	return (a * b) / gcd(a, b);
}
void printc(int color, const char str[])
{
	setcolor(color);
	cout << str;
	setcolor(7);
}
template<typename T>
void printc(int color, T data)
{
	setcolor(color);
	cout << data;
	setcolor(7);
}


bool isPrime(int a)
{
	if (a <= 0)
		return false;
	if (a % 2 == 0)
		return false;
	for (int b = 3; b <= sqrt(a); b += 2)
	{
		if (a % b == 0)
			return false;
	}
	return true;
}