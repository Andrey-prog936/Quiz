#include<iostream>
#include<string>
#include <fstream>
#include "quiz.h"
#include "coloring.h"


using namespace std;

int main() {
	init();
	int a = 0;
	do
	{
		cout << "1. Add quiz\n2. Take the quiz\n3. Exit" << endl;
		cout << "Enter action: ";
		cin >> a;
		switch (a)
		{
		case 1:
		{
			addQuiz();
		}break;
		case 2:
		{
			showQuizes();
			passQuiz();
		}break;
		case 3:
		{
			red
				cout << "Goodbye" << endl;
			def
				return 0;
		}break;
		default:
		{
			cout << "Error" << endl;
		}break;
		}
	} while (a!=3);

	system("pause");
	return 0;
}