#include <stdio.h>
#include "csv/csv.h"

int main(void) {
    int qtdRows = 2699, qtdColumns = 20;
    char matrix[qtdRows][qtdColumns][100];

    csvToMatrix("mega-sena.csv", matrix, qtdRows, qtdColumns, "\t");

    for(int i = 0; i < 2112; i++) {
        for(int j = 0; j < qtdColumns; j++) {
            printf("%s / ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

