#pragma once

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