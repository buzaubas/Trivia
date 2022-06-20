#include "Word.h"

Word::Word()
{
}

Word::Word(const char* str)
{
	std::string word(str);
	auto len = word.find_first_of('\t');
	this->num = std::stoi(word.substr(0, len));
	this->word = word.substr(len + 1);
}

size_t Word::getNum()
{
	return this->num;
}

std::string Word::getWord()
{
	return this->word;
}
