#pragma once
#include "Stack.h"

// извлечь элемент из стека
Stack& operator -- (Stack& other, int) {
	other.Retrieve();
	return other;
}