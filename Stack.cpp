#include <iostream>
#include "Stack.h"

Stack::Stack(const Stack& other) {
	this->front = nullptr;
	this->rear = nullptr;
	this->tmp_data = 0;

	if (other.front == nullptr)
		return;

	this->tmp_data = other.tmp_data; 

	Element* first_element = new Element(other.rear->Get_data());
	this->rear = first_element;
	Element* new_rear_tmp = first_element;

	Element* tmp_rear = other.rear->Get_next();
	while (tmp_rear != nullptr) {
		Element* element = new Element(tmp_rear->Get_data());
		this->front = element;
		element->Set_prev(new_rear_tmp);
		new_rear_tmp->Set_next(element);
		new_rear_tmp = new_rear_tmp->Get_next();
		tmp_rear = tmp_rear->Get_next();
	}
}

Stack::Stack() {
	front = nullptr;
	rear = nullptr;
	tmp_data = 0;
}

Stack::Stack(float tmp_data) {
	front = nullptr;
	rear = nullptr;
	this->tmp_data = tmp_data;
}

Stack::~Stack() {
	while (front != nullptr)
		Clear();
}

void Stack::Set_data_for_element(float data) { this->tmp_data = data; }
float Stack::Get_data_for_element() { return tmp_data; }
Element* Stack::Get_front() { return front; }
Element* Stack::Get_rear() { return rear; }
void Stack::Set_front(Element* front) { this->front = front; }
void Stack::Set_rear(Element* rear) { this->rear = rear; }

void Stack::Insert() {
	float data = Get_data_for_element();
	Element* element = new Element(data);
	if (rear == nullptr)	// стек пустой
		rear = element;
	if (front != nullptr) {
		element->Set_prev(front);
		front->Set_next(element);
	}
	front = element;
}

void Stack::Retrieve() {

	if (front == nullptr) {
		return;
	}

	if (front == rear) {
		delete rear;
		front = nullptr;
		rear = nullptr;
		return;
	}

	Element* tmp_element = front;
	front = tmp_element->Get_prev();
	front->Set_next(tmp_element->Get_next());
	delete tmp_element;
	

	std::cout << "Элемент стека успешно извлечён !!!\n\n";
}

void Stack::ShowStack() {
	std::cout << "\nСтек:\n";
	int cnt = 0;
	Element* tmp_front = front;
	while (front != nullptr) {
		std::cout << front->Get_data() << " ";
		front = front->Get_prev();
		cnt++;
	}
	std::cout << "\nКоличесвто элементов в стеке: " << cnt << "\n\n";
	front = tmp_front;
	tmp_front = nullptr;
}

Stack& Stack::operator ++ () {
	Element* tmp_front = front;
	while (front != nullptr) {
		float x = front->Get_data();
		x = (float)x + 0.5;
		front->Set_data(x);
		front = front->Get_prev();
	}
	front = tmp_front;
	tmp_front = nullptr;

	std::cout << "\nВсе элементы стека успешно увеличены на 0.5\n";

	return *this;
}

Stack& Stack::operator -- () {
	Element* tmp_front = front;
	while (front != nullptr) {
		float x = front->Get_data();
		x = x - 1;
		front->Set_data(x);
		front = front->Get_prev();
	}
	front = tmp_front;
	tmp_front = nullptr;

	std::cout << "\nВсе элементы стека успешно уменьшены на 1\n";

	return *this;
}

Stack& Stack::operator ! () {
	Element* tmp_front = front;
	while (front != nullptr) {
		float x = front->Get_data();
		x = -x;
		front->Set_data(x);
		front = front->Get_prev();
	}
	front = tmp_front;
	tmp_front = nullptr;

	std::cout << "\nЗнаки у всех элементов стека успешно поменялись !!!\n";

	return *this;
}

void Stack::Empty(Stack TheStack, bool* empty) {

	if (rear == nullptr)
		*empty = true;

	if (*empty)
		std::cout << "\nСтек пустой !!!\n\n";
}

void Stack::Clear() {
	if (front == nullptr) {
		return;
	}

	if (front == rear) {
		delete rear;
		front = nullptr;
		rear = nullptr;
		return;
	}

	Element* tmp_element = front;
	front = tmp_element->Get_prev();
	delete tmp_element;
}