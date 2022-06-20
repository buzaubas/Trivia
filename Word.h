#pragma once
#include <string>

class Word
{
private:
	size_t num;
	std::string word;
public:
	Word();
	Word(const char* str);
	size_t getNum();
	std::string getWord();
};
