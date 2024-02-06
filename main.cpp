#include <iostream>
#include "Stack.h"
#include "Long.h"
#include "insert ++.h"
#include "retrieve --.h"
#include "subtraction -.h"
#include "multiplication.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	float data;

	Stack TheStack;
	Long a, b, c;

	bool empty = true;

	int n, n1, n2;
	do {
		system("cls");

		cout << "\n1) Задание 1. Унарная операция\n"
			<< "2) Задание 2. Бинарная операция\n"
			<< "3) Выход из программы\n\n"
			<< "Выбранный пункт меню: ";
		cin >> n;

		switch (n){
		case 1:
			do {
				system("cls");

				cout << "\n1) Добавить элемент в стек\n"
					<< "2) Извлечь элемент из стека\n"
					<< "3) Вывести стек на экран\n"
					<< "4) Увеличить значение всех элементов на 0.5\n"
					<< "5) Уменьшить значение всех элементов на 1\n"
					<< "6) Поменять знак у всех элементов на противоположный\n"
					<< "7) Выход из программы\n\n"
					<< "Выбранный пункт меню: ";
				cin >> n1;

				switch (n1) {
				case 1:
					cout << "\nВведите элемент: ";
					cin >> data;
					TheStack.Set_data_for_element(data);
					TheStack++;
					empty = false;
					break;
				case 2:
					TheStack--;
					TheStack.Empty(TheStack, &empty);
					system("pause");
					break;
				case 3:
					if (!empty)
						TheStack.ShowStack();
					TheStack.Empty(TheStack, &empty);
					system("pause");
					break;
				case 4:
					if (!empty)
						++TheStack;
					TheStack.Empty(TheStack, &empty);
					system("pause");
					break;
				case 5:
					if (!empty)
						--TheStack;
					TheStack.Empty(TheStack, &empty);
					system("pause");
					break;
				case 6:
					if (!empty)
						!TheStack;
					TheStack.Empty(TheStack, &empty);
					system("pause");
					break;
				case 7:
					break;
				default:
					cout << "\nНекорректный выбор !!!\nПожалуйста, выберете пункт от 1 до 7.\n\n";
					system("pause");
					break;
				}
			} while (n1 != 7);
			break;
		case 2:
			long num1, num2, res;

			system("cls");

			cout << "Числа для выполнения арифметических операций\n\n";
			cout << "Введите первое число\na = ";
			cin >> num1;
			cout << "\nВведите второе число\nb = ";
			cin >> num2;
			cout << "\n\n";

			system("pause");

			do {
				Long a = num1;
				Long b(num2);

				system("cls");

				cout << "a = " << a.Get_data() << endl;
				cout << "b = " << b.Get_data() << endl;
				cout << "\n1) Сложение двух чисел (long)\n"
					<< "2) Вычитание\n"
					<< "3) Целочисленное деление\n"
					<< "4) Умножение\n"
					<< "5) Выход из программы\n\n"
					<< "Выбранный пункт меню: ";
				cin >> n2;

				switch (n2){
				case 1:
					c = a + b;
					res = c.Get_data();
					cout << "\nРезультат сложения: " << res << "\n\n";
					system("pause");
					break;
				case 2:
					c = a - b;
					res = c.Get_data();
					cout << "\nРезультат вычитания: " << res << "\n\n";
					system("pause");
					break;
				case 3:
					c = a / b;
					res = c.Get_data();
					cout << "\nРезультат целочисленного деления: " << res << "\n\n";
					system("pause");
					break;
				case 4:
					c = a * b;
					res = c.Get_data();
					cout << "\nРезультат умножения: " << res << "\n\n";
					system("pause");
					break;
				case 5:
					break;
				default:
					cout << "\nНекорректный выбор !!!\nПожалуйста, выберете пункт от 1 до 5.\n\n";
					system("pause");
					break;
				}
			} while (n2 != 5);
			break;
		case 3:
			break;
		default:
			cout << "\nНекорректный выбор !!!\nПожалуйста, выберете пункт от 1 до 3.\n\n";
			system("pause");
			break;
		}
	} while (n != 3);
	return 0;
}