#include <iostream>
#include "data.h"
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	DB shopList = {"Shop list"};
	string answer;
	do {
		cout << "Выберите действие:\n";
		cout << "add;\n";
		cout << "clear;\n";
		cout << "show;\n";
		cout << "end.\n";
		cout << "Введите команду ->";
		getline(cin, answer);
		if (answer == "add")
			addNote(shopList);
		else
			if (answer == "clear") {
				clearNotes(shopList);
				cout << "Список очищен\n";
			}
			else
				if (answer == "show")
					showDB(shopList);
				else
					if (answer == "end")
						cout << "Программа завершена\n";
					else
						cout << "Команда не обнаружена\n";
		cout << endl;
	} while (answer!="end");

	return 0;
}