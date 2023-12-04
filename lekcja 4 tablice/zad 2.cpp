#include <iostream>
using namespace std;

int main(){
	
	int liczby[5];
	cout << " Wprowadz 5 liczb: ";
	for (int i = 0; i < 5; i++){
		cin >> liczby[i];
	}

	cout << " W odwrotnej kolejnosci: ";
	for (int j = 4; j >= 0; --j){
	cout << liczby[j];	
	}
    cout << endl;
	system("pause");
}