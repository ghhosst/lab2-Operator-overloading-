#pragma once
class Long{
	friend Long operator - (const Long& a, const Long& b);
	friend Long operator * (const Long& a, const Long& b);
private:
	long data;
public:
	Long(const Long& other);
	Long();
	Long(int data);
	~Long();
	long Get_data();
	void Set_data(long data = 0);

	Long operator + (const Long& other);
	Long operator / (const Long& other);
};