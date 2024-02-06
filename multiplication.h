#pragma once
#include "Long.h"

Long operator * (const Long& a, const Long& b) {
	Long res;
	res.data = a.data * b.data;
	return res;
}