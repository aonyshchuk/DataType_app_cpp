#include <iostream>
using namespace std;

int main()
{
	/* �������� 2. ���������� ������� � ��������� ��� � ��������, �� ����� � ������� �������� ���. ����������, 
������ ����� ����� ���� ���������� ����� �� �����, 
���� ������� ���� � 8 �����.
	*/

	double time, end{};

	cout << "Enter time ->";
	cin >> time;

	cout << "Time for brief freedom ->" << end << 8 - (time * 3600) << endl;

	return 0; 
}