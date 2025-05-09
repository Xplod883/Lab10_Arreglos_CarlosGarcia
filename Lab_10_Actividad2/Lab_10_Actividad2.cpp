#include <iostream>

using namespace std;

void imprimirImpreso(int* arr, int tam) {
	for (int i = tam - 1; i >= 0; i--) {
		cout << *(arr + 1) << "";
	}
	cout << endl;
}

int main() {
	const int TAM = 8;
	int arreglo[TAM] = { 10, 20, 30, 40, 50, 60, 70, 80 };

	cout << "Arreglo original: ";
	for (int i = 0; i < TAM; i++) {
		cout << arreglo[i] << "";
	}
	cout << endl;

	cout << "Arreglo en orden inverso: ";

	imprimirImpreso(arreglo, TAM);

	return 0;
}