#include <iostream>
#include <conio.h>
#include <fstream>
#include <time.h>

using namespace std;

int main() {

	char increment = '1';
	char exit = '0';

	char c = ' ';
	int count = 0;

	std::ofstream outfile;
	outfile.open("Okay Data.txt", std::ios_base::app);

	char date[9];
	_strdate_s(date);

	while (c != exit) {
		c = _getch();

		if (c == increment) {
			count++;
		}
		cout << "running Total: " << count << endl;
	}

	cout << "Final total: " << count << endl;

	outfile << date << " " << count << endl;

	cin.ignore();
	return 0;
}