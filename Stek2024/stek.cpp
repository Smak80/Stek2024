#include "stek.h"

void push(stek_elem*& top, int value)
{
	stek_elem* new_el = new stek_elem;
	new_el->x = value;
	new_el->next = top;
	top = new_el;
}

bool pop(stek_elem*& top, int& value)
{
	if (top)
	{
		value = top->x;
		auto* del = top;
		top = top->next;
		delete del;
		return true;
	}
	return false;
}

bool peek(stek_elem* top, int& value)
{
	if (top)
	{
		value = top->x;
		return true;
	}
	return false;
}
