// Lab_02.cpp
// < Âàòà Íàçàð >
// Ëàáîðàòîðíà ðîáîòà ¹ 2.1
// Ë³í³éí³ ïðîãðàìè.
// Âàð³àíò 0.3
#include <iostream>

using namespace std;
int main()
{
	double b; // âõ³äíèé ïàðàìåòð
	double z1; // ðåçóëüòàò îá÷èñëåííÿ 1-ãî âèðàçó
	double z2; // ðåçóëüòàò îá÷èñëåííÿ 2-ãî âèðàçó
	cout << "b = "; cin >> b;
	z1 = (sqrt(2 * b + 2 * sqrt(b * b - 4)) / (sqrt(b * b - 4) + b + 2));
	z2 = (1 / sqrt(b + 2));
	cout << endl;
	cout << "z1 = " << z1 << endl; //123
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
