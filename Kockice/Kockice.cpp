#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	string kocka;
	int a;
	int b;
	int suma = 0;
	int poeni = 0;
	int suma2 = 0;
	int x;
	int y;
	srand(time(0));
	cout << "igra Craps, dve kockice se bacaju sabira se rezultat" << endl;
	cout << "klikni slovo ili broj za bacanje kockice br1 ";
	cin >> kocka;

	a = 1 + (rand() % 6);
	cout << "prva kockica: " << a << endl;
	cout << "klikni slovo ili broj za bacanje kockice br2 ";
	cin >> kocka;
	b = 1 + (rand() % 6);
	cout << "druga kockica: " << b << endl;
	suma = a + b;
	cout << "suma tvojih kockica je: " << suma << endl;
	if (suma == 7 || suma == 11) {
		cout << "Pobedio si !" << endl;
	}
	else if (suma == 2 || suma == 3 || suma == 12) {
		cout << "Izgubio si !" << endl;
	}
	else if (suma == 4 || suma == 5 || suma == 6 || suma == 8 || suma == 9 || suma == 10) {
		cout << "suma prvih kockica su sada tvoji poeni, u drugoj rundi postigni isti broj sume za pobedu!" << endl;
		poeni = suma;
		while (poeni != suma2) {
			cout << "Druga runda !!! klikni slovo ili broj za bacanje kockice br1 ";
			cin >> kocka;
			x = 1 + (rand() % 6);
			cout << "prva kockica: " << x << endl;
			cout << "Druga runda !!! klikni slovo ili broj za bacanje kockice br2 ";
			cin >> kocka;
			y = 1 + (rand() % 6);
			cout << "druga kockica: " << y << endl;
			suma2 = x + y;
			cout << "Druga suma tvojih kockica je: " << suma2 << endl;
			if (suma2 == 7) {
				cout << "Izgubio si u drugoj rundi" << endl;
				break;
			}
		}if (poeni == suma2) {
			cout << "Pobeda!!!" << endl;
		}
	}




}

