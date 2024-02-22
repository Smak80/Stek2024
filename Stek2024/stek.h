#pragma once

struct stek_elem
{
	int x;
	stek_elem* next;
};

void push(stek_elem*& stek, int value);
bool pop(stek_elem*& stek, int& value);
bool peek(stek_elem* stek, int& value);