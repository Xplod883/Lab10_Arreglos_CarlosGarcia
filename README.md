Objetivo del laboratorio

Fortalecer el uso de arreglos unidimensionales en C++ mediante ejercicios prácticos y análisis por depuración, integrando cálculos estadísticos, punteros y lógica algorítmica estructurada.

Parte 1: Fundamentos prácticos de arreglos (15 minutos)

Paso 1.1 – Crear proyecto
• Crea un nuevo proyecto de consola en Visual Studio Community con el nombre: Lab3_Arreglos_TuNombre.

Paso 1.2 – Arreglo con valores secuenciales 

Escribe un programa que:
• Declare un arreglo de 10 enteros.
• Llene el arreglo con los números del 1 al 10 usando un ciclo for.
• Imprima cada valor con su índice correspondiente.

Actividad:
• Usa breakpoints y ventana de inspección (Watch) para observar cómo se llenan e imprimen los datos.
• Agrega una captura de esto en tu informe.

Parte 2: Estadísticas con arreglos (20 minutos)
Escribe un programa modular que:
• Ingrese 10 números enteros desde teclado.
• Calcule:
o La suma total
  o El promedio
  o El valor máximo y mínimo
  o La cantidad de números pares e impares

Recomendaciones:
• Usa const int TAM = 10;
• Implementa funciones separadas para cada operación.
• Aplica ciclos for y if.

Actividad:
• Ejecuta con diferentes datos y depura dos funciones con Visual Studio.
• Explica en tu informe qué observaste.

Parte 3: Uso de punteros para imprimir en orden inverso (20 minutos)
¿Qué es un puntero en C++?
Un puntero es una variable que almacena la dirección de memoria de otra variable. En
lugar de acceder a un dato directamente con el índice del arreglo, un puntero permite
recorrer el arreglo usando operaciones aritméticas.

Por ejemplo:
int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr; // ptr apunta al primer elemento
cout << *(ptr + 2); // Imprime 30

Actividad práctica
• Implementa la siguiente función para imprimir un arreglo en orden inverso usando punteros:
void imprimirInverso(int *arr, int tam) {
  for (int i = tam - 1; i >= 0; i--) {
    cout << *(arr + i) << " ";
    }
  }
• Prueba tu función con un arreglo de 8 elementos.
• Usa el depurador para observar cómo el puntero accede a los datos.

Incluye en el informe:
• Explicación del uso de *(arr + i)
• Captura del depurador mostrando el cambio de dirección

Parte 4: Reto final – Filtro por promedio (15 minutos)
Escribe un programa que:
1. Ingrese 15 números enteros.
2. Calcule el promedio de los números.
3. Cree un nuevo arreglo que contenga solo los valores mayores al promedio.
4. Imprima ambos arreglos.

Extra (si el tiempo lo permite):
• Ordena el nuevo arreglo de mayor a menor.
• Utiliza funciones auxiliares.

Formato del Informe (PDF)
1. Portada: Nombre completo, carné, curso, fecha.
2. Contenido:
o Fragmentos de código con explicación
o Capturas del programa en ejecución
o Capturas del depurador con comentarios
3. Conclusiones: Lo aprendido, desafíos y mejoras sugeridas.
4. Link de repositorio en GitHub:
Inclúyelo al final del informe.
Entrega:
Sube tu código en un archivo .cpp en GitHub y elabora con comentarios explicativos y un resumen de lo aprendido. Recuerda que este laboratorio debe tener comentarios personales para la elaboración.
Evaluación: Estructura del programa (40%), Implementación correcta de al menos 5 arreglos (30%), Uso adecuado de debug y punteros (20%) y Pruebas y funcionamiento del programa (10%)
