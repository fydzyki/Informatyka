#include <iostream>
using namespace std;

int main(){
	/*Inkrementacja
	i = i + 1
	i += 1
	1++
	Dekrementacja
	i = i - 1
	i -= 1
	1 --
	*/
	// for(wartosc Poczatkowa; warunekKoczaczy; krok)
	for(int i = 0; i < 5; i++){ // i - zmienna lokalna, istnieje tylko w petli
		cout <<"Iteracja nr: " << i << endl;
	}
	
	int wysokosc, szerokosc;
	cout << " Podaj wysokosc: ";
	cin >> szerokosc;
	cout << " Podaj szerokosc: ";
	cin >> szerokosc;
	// zadac pytanie
	// pobrac odpowiedz
	// zadac pytanie
	// pobrac odpowiedz
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << " " << i << j;
		}
		cout << endl;
	}
	
	cout << endl;
	system("pause");
}