#pragma once
#include <iostream>
#include <vector>
#include "Word.h"

class Data
{
private:
	std::vector<Word> data;
public:
	Data();
	Data(Word buf);
	void add(Word buf);
	void rate();
	void range(size_t num);
	void show();
};
