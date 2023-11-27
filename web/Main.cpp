#include <iostream>

using namespace std;

void TrimRight(char* s);

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Введите строку:";
	char s[255]{};
	cin >> s;

	TrimRight(s);

	cout << s << endl << endl;

	system("pause");
	return 0;
}

void TrimRight(char* s)
{
	if (s == nullptr)                    // если строка просто пустая
	{
		return; 
	}

	char* space = nullptr;               // место пробела

	//for (; *s != '\0'; ++s) 
	while (*s != '\0')                   // пока не встретили конец строки...
	{
		if (*s != ' ')                   // если не пробел, то метка остается "обнуленной"
		{
			space = nullptr; 
		}
		else if (space == nullptr)       // если пробел, то проверяем "обнулена" ли метка 
		{
			space = s;                   // если обнулена, значит это первый пробел (запоминаем это место в строке)
		}                                // если не первый , то ничего не делаем
		s++;                             // итерируемся по строке
	}
	
	if (space != nullptr)                // если в метке запомнено какое-то место, значит отрезаем все остальное \0
	{
		*space = '\0';
	}
}
