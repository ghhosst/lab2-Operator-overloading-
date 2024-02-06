#pragma once
class Element{
private:
	float data;
	Element* next;
	Element* prev;
public:
	Element(const Element& orher);
	Element();
	Element(float data);
	~Element();
	float Get_data();
	Element* Get_next();
	Element* Get_prev();
	void Set_data(float data = 0);
	void Set_next(Element* next = nullptr);
	void Set_prev(Element* prev = nullptr);
};