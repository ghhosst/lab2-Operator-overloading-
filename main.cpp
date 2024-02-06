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

		cout << "\n1) ������� 1. ������� ��������\n"
			<< "2) ������� 2. �������� ��������\n"
			<< "3) ����� �� ���������\n\n"
			<< "��������� ����� ����: ";
		cin >> n;

		switch (n){
		case 1:
			do {
				system("cls");

				cout << "\n1) �������� ������� � ����\n"
					<< "2) ������� ������� �� �����\n"
					<< "3) ������� ���� �� �����\n"
					<< "4) ��������� �������� ���� ��������� �� 0.5\n"
					<< "5) ��������� �������� ���� ��������� �� 1\n"
					<< "6) �������� ���� � ���� ��������� �� ���������������\n"
					<< "7) ����� �� ���������\n\n"
					<< "��������� ����� ����: ";
				cin >> n1;

				switch (n1) {
				case 1:
					cout << "\n������� �������: ";
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
					cout << "\n������������ ����� !!!\n����������, �������� ����� �� 1 �� 7.\n\n";
					system("pause");
					break;
				}
			} while (n1 != 7);
			break;
		case 2:
			long num1, num2, res;

			system("cls");

			cout << "����� ��� ���������� �������������� ��������\n\n";
			cout << "������� ������ �����\na = ";
			cin >> num1;
			cout << "\n������� ������ �����\nb = ";
			cin >> num2;
			cout << "\n\n";

			system("pause");

			do {
				Long a = num1;
				Long b(num2);

				system("cls");

				cout << "a = " << a.Get_data() << endl;
				cout << "b = " << b.Get_data() << endl;
				cout << "\n1) �������� ���� ����� (long)\n"
					<< "2) ���������\n"
					<< "3) ������������� �������\n"
					<< "4) ���������\n"
					<< "5) ����� �� ���������\n\n"
					<< "��������� ����� ����: ";
				cin >> n2;

				switch (n2){
				case 1:
					c = a + b;
					res = c.Get_data();
					cout << "\n��������� ��������: " << res << "\n\n";
					system("pause");
					break;
				case 2:
					c = a - b;
					res = c.Get_data();
					cout << "\n��������� ���������: " << res << "\n\n";
					system("pause");
					break;
				case 3:
					c = a / b;
					res = c.Get_data();
					cout << "\n��������� �������������� �������: " << res << "\n\n";
					system("pause");
					break;
				case 4:
					c = a * b;
					res = c.Get_data();
					cout << "\n��������� ���������: " << res << "\n\n";
					system("pause");
					break;
				case 5:
					break;
				default:
					cout << "\n������������ ����� !!!\n����������, �������� ����� �� 1 �� 5.\n\n";
					system("pause");
					break;
				}
			} while (n2 != 5);
			break;
		case 3:
			break;
		default:
			cout << "\n������������ ����� !!!\n����������, �������� ����� �� 1 �� 3.\n\n";
			system("pause");
			break;
		}
	} while (n != 3);
	return 0;
}