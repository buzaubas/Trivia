#include <iostream>
#include <fstream>
#include "Word.h"
#include "Data.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	Data book;
	ifstream ifs("C:\\Users\\БексултановД\\Desktop\\Поле чудес\\example.txt", ios::in);
	if (!ifs.bad())
	{
		char buffer[255];
		while (!ifs.eof())
		{
			ifs.getline(buffer, 255);
			book.add(Word(buffer));
		}
		ifs.close();
	}

	book.range(3);
	book.show();
	system("pause");

	return 0;
}
