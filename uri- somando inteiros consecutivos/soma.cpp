#include "soma.h"
#include <iostream>

using namespace std;

soma::soma()
{
	this->sum = sum;
}

void soma::calculo(int a, int n)
{
	int sum = this->sum;
	int aux = a;

	for (int i = 0; i <= n - 1; i++) {
		sum = sum + a;
	}

	cout << sum << endl;

}

