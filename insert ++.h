#pragma once
#include "Stack.h"
// �������� ������� � ����
Stack& operator ++ (Stack& other, int) {
	other.Insert();
	return other;
}