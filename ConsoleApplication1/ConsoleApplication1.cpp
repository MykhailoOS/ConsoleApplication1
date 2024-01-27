#include <iostream>
#include <cstdlib>

using namespace std;

// Функция с игровым циклом
void game_state() {
	const int NUMBER = rand() % 10 + 1;
	int tries = 0;
	int answer;
	do
	{
		cout << "Ведите ваше число: \n";
		cin >> answer;
		tries += 1;
		if (answer > NUMBER) {
			cout << "Слишком далеко <<< /?\n\n";
		}
		else if (answer < NUMBER) {
			cout << "Слишком далеко <<< /?\n\n";
		}
		else
		{
			cout << "Точно в цель!!!\nСделаные попытки: " << tries << "ответов!\n";
		}
	} while (tries!=answer);
}




// Главное меню...
int main() {
	setlocale(LC_ALL, "RU");
	srand(static_cast<unsigned int>(time(0)));
	cout << "\tFind number\n\n" << endl;
	game_state();
	return 0;
}