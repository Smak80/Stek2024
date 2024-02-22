#include "stek.h"
#include <iostream>
using namespace std;

void main()
{
	stek_elem* stek = nullptr;
	for (int i = 1; i<=10; i++)
	{
		push(stek, i);
	}
	for (int i = 1; i <= 10; i++)
	{
		int k;
		if (pop(stek, k))
		{
			cout << k << " ";
		}
	}
}