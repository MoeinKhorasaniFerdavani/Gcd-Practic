//	 IN THE NAME OF GOD

#include <iostream>


#include "d:\moein proje\source\repos\my library\graphic\color.h"
#include "functions.h"
#include "d:\moein proje\source\repos\my library\web\internet.h"
using namespace std;

int main()
{
	int a, b;
	string answer;
	printc(4, "Welcom to program\n");
	printc(6, "Enter first intiger\n");
	cin >> a;
	printc(6, "Enter secend intiger\n");
	cin >> b;
	printc(3, "bmm is :\t");
	cout << gcd(a, b) << endl;
	printc(3, "kmm is :\t");
	cout << kmm(a, b) << endl<<endl;
	cout << a;
	
	
	if (isPrime(a))
		printc(2, "\t is prime\n");
	else
		printc(4, "\t is not prime\n");
	
	
	cout << b;
	if (isPrime(b))
		printc(2, "\t is prime\n");
	else
		printc(4, "\t is not prime\n");

	printc(3,"\ndo you want to comminucate to programer?\n");
	getchar();
	cin >> answer;
	if (answer == "yes" || answer == "y")
		link("https://iut.ac.ir/");
	cout << endl << endl;
	system("pause");
	return 0;

}