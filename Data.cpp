#include "Data.h"

Data::Data()
{
}

Data::Data(Word buf)
{
	this->data.push_back(buf);
}

void Data::add(Word buf)
{
	this->data.push_back(buf);
}

void Data::rate()
{
	std::cout << data[0].getNum() << data[0].getWord() << std::endl;
}

void Data::range(size_t num)
{
	/*size_t SIZE = data.size();*/
	std::string buffer;
	for (auto i = 0; i < data.size();)
	{
		buffer = data[i].getWord();
		if (buffer.size() != num)
		{
			data.erase(data.begin() + i);
			i = 0;
		} // can not access to 0 element
	}

}

void Data::show()
{
	size_t SIZE = data.size();
	std::string buffer;
	for (auto i = 0; i < SIZE; i++)
	{
		std::cout << data[i].getNum() << " " << data[i].getWord() << std::endl;
	}
}
