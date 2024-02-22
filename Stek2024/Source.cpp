#include "stek.h"
#include <iostream>
using namespace std;

void main()
{
	stek_elem<double>* stek = nullptr;
	for (int i = 1; i<=10; i++)
	{
		push(stek, i / 10.);
	}
	for (int i = 1; i <= 10; i++)
	{
		double k;
		if (pop(stek, k))
		{
			cout << k << " ";
		}
	}
}