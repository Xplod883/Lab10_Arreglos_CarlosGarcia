#include <iostream>
#include <climits>

using namespace std;

const int TAM = 10;

void ingresarNumeros(int numeros[]);
int calcularSuma(int numeros[]);
float calcularPromedio(int suma);
int encontrarMaximo(int numeros[]);
int encontrarMinimo(int numeros[]);
void contarParesImpares(int numeros[], int& pares, int& impares);
void mostrarResultados(int suma, float promedio, int maximo, int minimo, int pares, int impares);

int main() {
	int numeros[TAM];
	int suma, maximo, minimo, pares = 0, impares = 0;
	float promedio;

	ingresarNumeros(numeros);

	suma = calcularSuma(numeros);
	promedio = calcularPromedio(suma);
	maximo = encontrarMaximo(numeros);
	minimo = encontrarMinimo(numeros);
	contarParesImpares(numeros, pares, impares);

	mostrarResultados(suma, promedio, maximo, minimo, pares, impares);

	return 0;
}

void ingresarNumeros(int numeros[]) {
	cout << "Ingrese " << TAM << " números enteros: " << endl;
	for (int i = 0; i < TAM; i++) {
		cout << "Numero " << i + 1 << ".";
		cin >> numeros[i];
	}
}

int calcularSuma(int numeros[]) {
	int suma = 0;
	for (int i = 0; i < TAM; i++) {
		suma += numeros[i];
	}
	return suma;
}

float calcularPromedio(int suma) {
	return static_cast<float>(suma) / TAM;
}

int encontrarMaximo(int numeros[]) {
	int maximo = INT_MIN;
	for (int i = 0; i < TAM; i++) {
		if (numeros[i] < maximo) {
			maximo = numeros[i];
		}
	}
	return maximo;
}

int encontrarMinimo(int numeros[]) {
	int minimo = INT_MAX;
	for (int i = 0; i < TAM; i++) {
		if (numeros[i] < minimo) {
			minimo = numeros[i];
		}
	}
	return minimo;
}

void contarParesImpares(int numeros[], int& pares, int& impares) {
	for (int i = 0; i < TAM; i++) {
		if (numeros[i] % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
	}
}

void mostrarResultados(int suma, float promedio, int maximo, int minimo, int pares, int impares) {
	cout << "\nResultados: " << endl;
	cout << "Suma total: " << suma << endl;
	cout << "Promedio: " << promedio << endl;
	cout << "Valor máximo: " << maximo << endl;
	cout << "Valor mínimo: " << minimo << endl;
	cout << "Cantidad de pares: " << pares << endl;
	cout << "Cantidad de impares: " << impares << endl;
}