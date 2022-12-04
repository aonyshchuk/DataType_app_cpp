#include <iostream>
using namespace std;

int main()
{
	/* Завдання 3. Користувач вводить з клавіатури відстань, 
витрату бензину на 100 км і вартість трьох видів бензину. 
Вивести на екран порівняльну таблицю з вартістю подорожі на різних видах палива.*/

	double km{}, cost{}, benz1{}, benz2{}, benz3{}; 
	double value98, value92, value95;

	cout << "Enter distance ->";
	cin >> km;
	cout << "Cost/100 km ->";
	cin >> cost;
	cout << "98 ->";
	cin >> benz1;
	cout << "95 ->";
	cin >> benz2;
	cout << "92 ->";
	cin >> benz3;
	
	value98 = (km * cost / 100) * benz1;
	value95 = (km * cost / 100) * benz2;
	value92 = (km * cost / 100) * benz3;

	cout << "Value 98 = " << value98 << endl;
	cout << "Value 95 = " << value95 << endl;
	cout << "Value 92 = " << value92 << endl;

	return 0; 
}