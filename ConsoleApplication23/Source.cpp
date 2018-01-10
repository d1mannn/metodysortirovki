#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define size 20
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	short int task;
	do
	{
		cout << "Введите номер задания - ";
		cin >> task;

		switch (task)
		{
		case 1:
		{
			/*Найти минимальное и максимальное значение массива*/
			int m[size] = { 0 }, min = m[0];
			for (int i = 0; i < size; i++)
			{
				m[i] = -100 + rand() % 200;
				/*if (i == 0)
				min = m[i];*/
				cout << i + 1 << "========" << m[i] << endl;
				if (m[i] < min)
					min = m[i];
			}
			cout << "==============\n" << min << endl;
		} break;

		case 2:
		{
			int m[size] = { 0 }, min = m[0];
			for (int i = 0; i < size; i++)
			{
				m[i] = -100 + rand() % 200;
				cout << i + 1 << "========" << m[i] << endl;
			}
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = size - 1; j > i; j--)
				{
					if (m[j - 1] > m[j])
					{
						int temp = m[j - 1];
						m[j - 1] = m[j];
						m[j] = temp;
					}
				}
			}
		} break;

		case 3:
		{
			int m[size], temp;
			for (int i = 0; i < size; i++)
			{
				m[i] = -100 + rand() % 200;
				cout << "index [" << i << "] ===  " << m[i] << endl;
			}
			for (int i = 0; i < size; i++)
			{
				for (int j = size - 1; j > i; j--)
				{
					if (m[j - 1] < m[j])
					{
						temp = m[j - 1];
						m[j - 1] = m[j];
						m[j] = temp;
					}
				}
			} for (int i = 0; i < size; i++)
			{
				cout << m[i] << endl;
			}
		} break;

		case 4:
		{
			int m[size], min, temp;
			for (int i = 0; i < size; i++)
			{
				m[i] = -100 + rand() % 200;
				cout << m[i] << endl;
			}
			cout << "=============" << endl;
			for (int i = 0; i < size; i++)
			{
				min = i;
				for (int j = i + 1; j < size; j++)
				{
					if (m[j] > m[min])
						min = j;
				}
				temp = m[i];
				m[i] = m[min];
				m[min] = temp;
			}
			for (int i = 0; i < size; i++)
			{
				cout << m[i] << endl;
			}
		} break;

		case 5:
		{
			int m[size];
			for (int i = 0; i <size; i++)
			{
				m[i] = 1 + rand() % 100;
				cout << " index [" << i << "] === " << m[i] << endl;
			}
			for (int i = 0; i < size; i++)
			{
				int value = m[i]; // запоминаем значение элемента
				int index = i; // запоминаем также его индекс
				while ((index > 0) && (m[index - 1] > value))
				{
					// смещаем другие элементы к концу массива пока они меньше
					m[index] = m[index - 1];
					index--; //смещаем просмотр к началу массива
				}
				m[index] = value; //рассматриваемы элемент помещаем на освободившееся место
			}
			for (int i = 0; i < size; i++)
			{
				cout << "==================\n" << m[i] << endl;
			}
		} break;

		}
	} while (task < 12);


}