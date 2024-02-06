#include "Long.h"

Long::Long(const Long& other) {
	this->data = other.data;
}

Long::Long() {
	data = 0;
}

Long::Long(int data){
	this->data = data;
}

Long::~Long(){
	data = 0;
}

long Long::Get_data() { return data; }
void Long::Set_data(long data) { this->data = data; }

Long Long::operator + (const Long& other) {
	Long res;
	res.data = this->data + other.data;
	return res;
}

Long Long::operator / (const Long& other) {
	Long res;
	res.data = this->data / other.data;
	return res;
}