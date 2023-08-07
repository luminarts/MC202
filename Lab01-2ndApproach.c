#include <stdio.h>

int saladCounter(int lista[], int listlength) {
    int five, seven, ten = 0;
    int consecfive, consecseven, consecten = 0;

    for(int i = 0; i < listlength; i) {
        if (lista[i] == 5) {
            five++;
            consecfive++;
            consecseven, consecten = 0;
        }
        else if (lista[i] == 7)
        {
            seven++;
            consecseven++;
            consecfive, consecten = 0;
        }
        else if (lista[i] == 10)
        {
            ten++;
            consecten++;
            consecfive, consecseven = 0;
        }
    }
}

int main() {
    int num, list[10000];
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &list[i]);
    };
    for (int i = 0; i < num; i++) {
        printf("%d, ", list[i]);
    }
}