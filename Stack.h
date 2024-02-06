#pragma once
#include "Element.h"

class Stack{
	friend Stack& operator ++ (Stack& other, int);
	friend Stack& operator -- (Stack& other, int);
private:
	Element* front;	// �������� ����� �����
	Element* rear;	// ������ �����
	float tmp_data;
public:
	Stack(const Stack& other);
	Stack();
	Stack(float tmp_data);
	~Stack();

	void Set_data_for_element(float data = 0);
	float Get_data_for_element();
	Element* Get_front();
	Element* Get_rear();
	void Set_front(Element* front = nullptr);
	void Set_rear(Element* rear = nullptr);

	void Insert();		// �������� ������� 
	void Retrieve();	// ������� �������
	void ShowStack();	// ������� ���� �� �����
	void Empty(Stack TheStack, bool* empty = nullptr);
	void Clear();

	Stack& operator ++ ();
	Stack& operator -- ();
	Stack& operator ! ();
};