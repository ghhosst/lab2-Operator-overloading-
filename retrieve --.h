#pragma once
#include "Stack.h"

// ������� ������� �� �����
Stack& operator -- (Stack& other, int) {
	other.Retrieve();
	return other;
}