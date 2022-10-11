#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {
	//Variable de num igresado por el usuario, Num generado por la computadora, Contador
	int num, x, contador = 0;
	srand(time(NULL)); //Generar numero aleatorio entre 1-100
	x = 1 + rand() % (100);

	cout << "\nGuess my Number. Adivina el numero aleatorio entre 1 a 100\n";

	system("pause");

	//Hace mientras num y x sean distintos
	do {
		cout << "\nMucha suerte\n";
		cout << "Digite un numero "; cin >> num;
		//Si el num ingresado es mayor al generado
		if (num > x) {
			cout << "\nEs muy alto, digite un numero menor \n";
		}
		//Si el num ingresado es menor al generado
		else if (num < x) {
			cout << "\nEs muy bajo, digite un numero mayor \n";
		}
		//Si el num ingresado esta en un rango de +3 o -3 respecto num generado
		else if ((num = x +3 || x + 2 || x + 1) || (num = x - 3 || x - 2 || x - 1)) {
			cout << "\nEstas cerca, digite otro numero \n";
		}
		contador++;
	} while (num != x);

	//Mensaje de Felicitaciones y el num de intentos que le tomo al usuario
	cout << "\nAcertaste el numero\n";
	cout << "\nNum de intentos: "<<contador<<endl;

	system("pause");
	
	return 0;
}