/* Begin project */
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

//var user input
string uinput;

//var for exiting
char optExit;

//add function
double add(double a, double b)
{
	double sum;
	sum = a + b;
	return sum;
}

//subtract function
double sub(double a, double b)
{
	double dif;
	dif = a - b;
	return dif;
}

//multiply function
double mult(double a, double b)
{
	double prod;
	prod = a*b;
	return prod;
}

//divide function
double div(double a, double b)
{
	double quot;
	quot = a / b;
	return quot;
}

//gotoxy function
void gotoxy(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
}

int main() {

	gotoxy(50, 3);
	cout << "=== Calculator ===" << endl;
	gotoxy(41, 4);
	cout << "Enter problem or type 'exit' to exit\n\n" << endl;

	cout << " _____________________" << endl;
	cout << "|  _________________  |" << endl;
	cout << "| |                 | |" << endl;
	cout << "| |                 | |" << endl;
	cout << "| |_________________| |" << endl;
	cout << "|  __ __ __ __ __ __  |" << endl;
	cout << "| |__|__|__|__|__|__| |" << endl;
	cout << "| |__|__|__|__|__|__| |" << endl;
	cout << "| |__|__|__|__|  ___| |" << endl;
	cout << "| |__|__|__|__| |  Y| |" << endl;
	cout << "|  ___ ___ ___  |_X_| |" << endl;
	cout << "| | 7 | 8 | 9 | | + | |" << endl;
	cout << "| |___|___|___| |___| |" << endl;
	cout << "| | 4 | 5 | 6 | | - | |" << endl;
	cout << "| |___|___|___| |___| |" << endl;
	cout << "| | 1 | 2 | 3 | | x | |" << endl;
	cout << "| |___|___|___| |___| |" << endl;
	cout << "| | . | 0 | = | | / | |" << endl;
	cout << "| |___|___|___| |___| |" << endl;
	cout << "| Code by Raphi S.    |" << endl;
	cout << "|_____________________|" << endl;

	while (uinput != "exit" && uinput != "Exit" && uinput != "EXIT")
	{
		gotoxy(4, 9);
		cout << "                ";
		gotoxy(4, 10);
		cout << "                ";
		gotoxy(4, 9);
		cin >> uinput;

		if (uinput.find('+') != string::npos)
		{
			//establish numbers
			string plusDelim = "+";
			size_t delimPos = (uinput.find_first_of("+") + 1);
			string plusA = uinput.substr(0, uinput.find(plusDelim));
			size_t start;
			size_t end;
			string plusB = uinput.substr(size_t(start) = delimPos, size_t(end) = 100);
			//turn string #'s to doubles
			double plusNumA = stold(plusA);
			double plusNumB = stold(plusB);
			//compute and print
			double ansPlus = add(plusNumA, plusNumB);
			gotoxy(4, 10);
			cout << ansPlus << "\n" << endl;
			//ask if exit calc
			gotoxy(4, 9);
			cout << "Exit? y/n";
			gotoxy(15, 9);
			cin >> optExit;
			if (optExit == 'y' || optExit == 'Y')
			{
				gotoxy(26, 8);
				cout << "Calculator exited!\n\n| |                 | |   ";
				uinput = "exit";
			}
			else
			{
				uinput = "";
			}
		}
		else if (uinput.find('-') != string::npos)
		{
			//establish numbers
			string minusDelim = "-";
			size_t delimPos = (uinput.find_first_of("-") + 1);
			string minusA = uinput.substr(0, uinput.find(minusDelim));
			size_t start;
			size_t end;
			string minusB = uinput.substr(size_t(start) = delimPos, size_t(end) = 100);
			//turn string #'s to doubles
			double minusNumA = stold(minusA);
			double minusNumB = stold(minusB);
			//compute and print
			double ansMinus = sub(minusNumA, minusNumB);
			gotoxy(4, 10);
			cout << ansMinus << "\n" << endl;
			//ask if exit calc
			gotoxy(4, 9);
			cout << "Exit? y/n";
			gotoxy(15, 9);
			cin >> optExit;
			if (optExit == 'y' || optExit == 'Y')
			{
				gotoxy(26, 8);
				cout << "Calculator exited!\n\n| |                 | |   ";
				uinput = "exit";
			}
			else
			{
				uinput = "";
			}
		}
		else if (uinput.find('*') != string::npos)
		{
			//establish numbers
			string multipDelim = "*";
			size_t delimPos = (uinput.find_first_of("*") + 1);
			string multipA = uinput.substr(0, uinput.find(multipDelim));
			size_t start;
			size_t end;
			string multipB = uinput.substr(size_t(start) = delimPos, size_t(end) = 100);
			//turn string #'s to doubles
			double multipNumA = stold(multipA);
			double multipNumB = stold(multipB);
			//compute and print
			double ansMultip = mult(multipNumA, multipNumB);
			gotoxy(4, 10);
			cout << ansMultip << "\n" << endl;
			//ask if exit calc
			gotoxy(4, 9);
			cout << "Exit? y/n";
			gotoxy(15, 9);
			cin >> optExit;
			if (optExit == 'y' || optExit == 'Y')
			{
				gotoxy(26, 8);
				cout << "Calculator exited!\n\n| |                 | |   ";
				uinput = "exit";
			}
			else
			{
				uinput = "";
			}
		}
		else if (uinput.find('/') != string::npos)
		{
			//establish numbers
			string divid, dividDelim = "/";
			size_t delimPos = (uinput.find_first_of("/") + 1);
			string dividA = uinput.substr(0, uinput.find(dividDelim));
			size_t start;
			size_t end;
			string dividB = uinput.substr(size_t(start) = delimPos, size_t(end) = 100);
			//turn string #'s to doubles
			double dividNumA = stold(dividA);
			double dividNumB = stold(dividB);
			//compute and print
			double ansDivid = div(dividNumA, dividNumB);
			gotoxy(4, 10);
			cout << ansDivid << "\n" << endl;
			//ask if exit calc
			gotoxy(4, 9);
			cout << "Exit? y/n";
			gotoxy(15, 9);
			cin >> optExit;
			if (optExit == 'y' || optExit == 'Y')
			{
				gotoxy(26, 8);
				cout << "Calculator exited!\n\n| |                 | |   ";
				uinput = "exit";
			}
			else
			{
				uinput = "";
			}
		}
		else if (uinput.find('^') != string::npos)
		{
			//establish numbers
			string exponDelim = "^";
			size_t delimPos = (uinput.find_first_of("^") + 1);
			string exponA = uinput.substr(0, uinput.find(exponDelim));
			size_t start;
			size_t end;
			string exponB = uinput.substr(size_t(start) = delimPos, size_t(end) = 100);
			//turn string #'s to doubles
			double exponNumA = stold(exponA);
			double exponNumB = stold(exponB);
			//compute and print
			double ansExpon = pow(exponNumA, exponNumB);
			gotoxy(4, 10);
			cout << ansExpon << "\n" << endl;
			//ask if exit calc
			gotoxy(4, 9);
			cout << "Exit? y/n";
			gotoxy(15, 9);
			cin >> optExit;
			if (optExit == 'y' || optExit == 'Y')
			{
				gotoxy(26, 8);
				cout << "Calculator exited!\n\n| |                 | |   ";
				uinput = "exit";
			}
			else
			{
				uinput = "";
			}
		}
		else if (uinput == "exit" || "Exit" || "EXIT")
		{
			gotoxy(26, 8);
			cout << "Calculator exited!\n\n| |                 | |   ";
		}
		else if (uinput == "clear")
		{
			gotoxy(4, 9);
			cout << "                ";
			gotoxy(4, 10);
			cout << "                ";
		}
		else
		{
			cout << "Invalid function. Please try again.\n" << endl;
		}
	}
}
/* End project */
