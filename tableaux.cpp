#include <iostream>

using namespace std;

void main() {
	const int TAILLE = 10;
	float tab_1[TAILLE];
	int i = 0, j = 0, temp;
	for (i = 0; i < TAILLE; i++) {
		cout << "entrer dix float";
		cin >> tab_1[i];
	}
	for (i = 0; i < TAILLE; i++) {
	cout << "******les "
	}
	do {
		for (j = 0; j < TAILLE - 1; j++) {

			if (tab_1[j] > tab_1[j + 1]) {
				temp = tab_1[j];
				tab_1[j] = tab_1[j + 1];
				tab_1[j + 1] = temp;

			}
		}
	} while ();
	
		


	system("pause");
}