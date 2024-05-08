//Labo4, paso 5

//Matriz regular y determinante

#include <stdio.h>

// Función para calcular el determinante de una matriz de 3x3
float determinante(float matriz[3][3]) {
    return matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
           matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
           matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
}

int main() {
    float matriz[3][3];
    
    // Solicitar al usuario que ingrese la matriz
    printf("Ingrese los elementos de la matriz de 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Calcular el determinante de la matriz
    float det = determinante(matriz);

    // Determinar si la matriz es regular (tiene inversa)
    if (det != 0) {
        printf("La matriz es regular y su determinante es: %.2f\n", det);
    } else {
        printf("La matriz no es regular, no tiene inversa.\n");
    }

    return 0;
}
