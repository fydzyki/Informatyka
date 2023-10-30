#include<iostream>
using namespace std;

int main(){
	// liczby calkowite - short, int, long, unsigned short
	// ciag znakow (tekst) - string
	short a, b;
	cout << "Podaj a: ";
	cin >> a;
		cout << "Podaj b: ";
	cin >> b;
	
	// instrukcja warunkowa - if(warunek)
	// != rozne od (a != b) -> czy 4 jest rozne od 5 (tak)
	if(a > b){
		cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna;
	}
	else if(a == b){ //sprawdzenie kollejnego warunku
		cout << a << " == " << b;
	}
	else{ // jezeli zaden z powyzszych warunkow sie nie spelni to wykona else ( w przeciwnym razie)
		cout << a << " < " << b;
	}
}