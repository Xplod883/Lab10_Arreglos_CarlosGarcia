#include <iostream>
#include <algorithm>
using namespace std;

const int TAM = 15;

void ingresarNumeros(int numeros[]);
float calcularPromedio(int numeros[]);
int contarMayoresPromedio(int numeros[], float promedio);
void crearArregloMayores(int original[], int mayores[], float promedio, int tamMayores);
void ordenarDescendente(int arreglo[], int tamano);
void imprimirArreglo(const int arreglo[], int tamano, const string& mensaje);

int main() {
    int numeros[TAM];

    ingresarNumeros(numeros);

    float promedio = calcularPromedio(numeros);
    cout << "\nEl promedio es: " << promedio << endl;

    int cantMayores = contarMayoresPromedio(numeros, promedio);
    int* mayores = new int[cantMayores];
    crearArregloMayores(numeros, mayores, promedio, cantMayores);

    imprimirArreglo(numeros, TAM, "Arreglo original:");
    imprimirArreglo(mayores, cantMayores, "Valores mayores al promedio:");

    ordenarDescendente(mayores, cantMayores);
    imprimirArreglo(mayores, cantMayores, "Valores ordenados descendente:");

    delete[] mayores;
    return 0;
}

void ingresarNumeros(int numeros[]) {
    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

float calcularPromedio(int numeros[]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += numeros[i];
    }
    return static_cast<float>(suma) / TAM;
}

int contarMayoresPromedio(int numeros[], float promedio) {
    int contador = 0;
    for (int i = 0; i < TAM; i++) {
        if (numeros[i] > promedio) {
            contador++;
        }
    }
    return contador;
}

void crearArregloMayores(int original[], int mayores[], float promedio, int tamMayores) {
    int indice = 0;
    for (int i = 0; i < TAM; i++) {
        if (original[i] > promedio) {
            mayores[indice] = original[i];
            indice++;
        }
    }
}

void ordenarDescendente(int arreglo[], int tamano) {
    sort(arreglo, arreglo + tamano);

    for (int i = 0; i < tamano / 2; i++) {
        swap(arreglo[i], arreglo[tamano - 1 - i]);
    }
}

void imprimirArreglo(const int arreglo[], int tamano, const string& mensaje) {
    cout << mensaje << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl << endl;
}