#pragma once
#include "Stack.h"
// добавить элемент в стек
Stack& operator ++ (Stack& other, int) {
	other.Insert();
	return other;
}