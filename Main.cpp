#include <iostream>
using namespace std;

int main()
{
	/* Завдання 2. Користувач вводить з клавіатури час у секундах, що минув з початку робочого дня. Порахувати, 
скільки цілих годин йому залишилося сидіти на роботі, 
якщо робочий день — 8 годин.
	*/

	double time, end{};

	cout << "Enter time ->";
	cin >> time;

	cout << "Time for brief freedom ->" << end << 8 - (time * 3600) << endl;

	return 0; 
}