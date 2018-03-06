#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//1.5
int stringmain();
int cstylemain();

int main()
{
	//stringmain();
	cstylemain();
	return 0;
}

int stringmain() {
	string usr_id;
	while (size(usr_id) <= 1) {
		cout << "Input Your name:";
		cin >> usr_id;
		if (size(usr_id) <= 1)
			cout << "Please Input a correct user name longer than 2 text.\n";
	}
	cout << "Loading Finished!\n";
	system("Pause");
	return 0;
}

int cstylemain() {
	char id[50];
	int i = 0;
	cout << "Input Your name:";
	cin >> id;
	while (id[i] != '\0')
		i++;
	while (i <= 1) {
		cout << "Please Input a correct user name longer than 2 text.\n";
		cin >> id;
		i = 0;
		while (id[i] != '\0')
			i++;
	}
	cout << "Loading Finished!\n";
	system("Pause");
	return 0;
}
