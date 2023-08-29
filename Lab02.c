
#include <stdio.h>

#define MAX 301

/// @brief a função transpose_matrix transpõe a matriz dada no parâmetro
/// @param grid matrix fornecida para transposição
void transpose_matrix(char grid[][300]) {

}

/// @brief a função horizontal_check verifica em cada linha se há alguma das palavras
/// @param grid matrix a ser analisada por palavras
/// @param rows número de linhas da matrix
/// @param words palavras a serem procuradas
void horizontal_check(char grid[][300], int rows, char words[61]) {
    for (int i = 0; i < rows; i++) {
        
    }
}

void vertical_check(char grid[][300], int cols) {
    for (int i = 0; i < cols; i++) {
        
    }
}
/// @brief A função main possui a inicialização e leitura das variáveis utilizadas para utilizar os métodos criados 
/// @return retorna 0 para indicar o bom funcionamento da função
int main() {
    int l, c, p;
    char charList[MAX][MAX], words[21][MAX];

    scanf("%d %d %d", &l, &c, &p);

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%s", &charList[i][j]);
        }
    }

    for (int i = 0; i < p; i++) {
        scanf("%s ", words[i]);
    }
    
    for (int i = 0; i < p; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
