#pragma once

template <typename T>
struct stek_elem
{
	T x;
	stek_elem* next;
};

template <typename T>
void push(stek_elem<T>*& stack_top, T value)
{
	auto* new_el = new stek_elem<T>;
	new_el->x = value;
	new_el->next = stack_top;
	stack_top = new_el;
}

template <typename T>
bool pop(stek_elem<T>*& stack_top, T& value)
{
	if (stack_top)
	{
		value = stack_top->x;
		auto* del = stack_top;
		stack_top = stack_top->next;
		delete del;
		return true;
	}
	return false;
}

template <typename T>
bool peek(stek_elem<T>* stack_top, T& value)
{
	if (stack_top)
	{
		value = stack_top->x;
		return true;
	}
	return false;
}