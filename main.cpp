#include<iostream>

using namespace std;

int main() {
	string a;
	int b = 0;
	cin >> a;

	int unique = 0;
	for (char e : a) {
		int msk = (1 << (e - 'a'));
		if (!(msk & b)) unique++; 
		b |= msk;
	}

	(unique % 2 ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!");
}
