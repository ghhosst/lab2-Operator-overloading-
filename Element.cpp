#include "Element.h"

Element::Element(const Element& other) {
	this->data = other.data;
	this->next = other.next;
	this->prev = other.prev;
}

Element::Element() {
	this->data = 0;
	this->next = nullptr;
	this->prev = nullptr;
}

Element::Element(float data) {
	this->data = data;
	this->next = nullptr;
	this->prev = nullptr;
}

Element::~Element() {
	this->next = nullptr;
	this->prev = nullptr;
}

float Element::Get_data() { return data; }
Element* Element::Get_next() { return next; }
Element* Element::Get_prev() { return prev; }
void Element::Set_data(float data) { this->data = data; }
void Element::Set_next(Element* next) { this->next = next; }
void Element::Set_prev(Element* prev) { this->prev = prev; }