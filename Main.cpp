#include <iostream>
#include <time.h>
using namespace std;
/* �������� 2. ���������� ������� � ��������� ��� ������� 
� ��� ���������� ������������ ������� (������, ������� 
�� �������). ���������� ������� �������, ���� ������� 
������� � 2 �����
*/
int main()
{
	double time_ttime2, time_ttime1;

	double difftime(time_ttime2, time_ttime1);
	

	cout << "Starting -> "; 
	cin >> time_ttime1; 

	cout << endl;

	cout << "Ending -> ";
	cin >> time_ttime2;

	cout << endl;

	cout << "Your time using motorbike is " << difftime << endl;

	cout << "The cost of a 60 sec is 2 UAH" << endl;
	cout << endl;



	return 0; 
}