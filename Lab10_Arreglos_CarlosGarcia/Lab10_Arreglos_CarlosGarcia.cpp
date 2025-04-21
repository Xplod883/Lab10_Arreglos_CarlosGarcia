#include <iostream>

int main() {
	int arreglo[10];

	for (int i = 0; i < 10; i++) {
		arreglo[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		std::cout << "Índice" << i << "arreglo" << arreglo[i] << std::endl;
	}

	return 0;
}