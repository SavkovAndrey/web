#include <iostream>

using namespace std;

void TrimRight(char* s);

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "������� ������:";
	char s[255]{};
	cin >> s;

	TrimRight(s);

	cout << s << endl << endl;

	system("pause");
	return 0;
}

void TrimRight(char* s)
{
	if (s == nullptr)                    // ���� ������ ������ ������
	{
		return; 
	}

	char* space = nullptr;               // ����� �������

	//for (; *s != '\0'; ++s) 
	while (*s != '\0')                   // ���� �� ��������� ����� ������...
	{
		if (*s != ' ')                   // ���� �� ������, �� ����� �������� "����������"
		{
			space = nullptr; 
		}
		else if (space == nullptr)       // ���� ������, �� ��������� "��������" �� ����� 
		{
			space = s;                   // ���� ��������, ������ ��� ������ ������ (���������� ��� ����� � ������)
		}                                // ���� �� ������ , �� ������ �� ������
		s++;                             // ����������� �� ������
	}
	
	if (space != nullptr)                // ���� � ����� ��������� �����-�� �����, ������ �������� ��� ��������� \0
	{
		*space = '\0';
	}
}
