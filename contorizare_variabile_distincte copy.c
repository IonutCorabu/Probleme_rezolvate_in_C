#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    //alegem cate variabile vrem sa comparam
    printf("Introduceti numarul de variabile: ");
    scanf("%d", &n);

    //initializam un vector care va contine aceste variabile
    int v[n];
    int i, j, contor = 0;

    //introducem de la tastatura valoarea variabilelor
    printf("Introduceti valoarea variabilelor: \n");
    for(i = 0; i < n; i++) {
        printf("v[%d] = ",i+1);
        scanf("%d", &v[i]);
    }
    
    //parcurgem variabilele si le comparam
    for(i = 0; i < n; i++) {  //parcurge tot vectorul pana la n
        for(j = 0; j < i; j++) { //parcurge pana la i
            if(v[j] == v[i]) { //
                break;
            }
        }
        if(i == j) {
            contor++; //incrementam contorul
        }
    }

    printf("Numarul de variabile distincte este: %d\n", contor);

    return 0;
}

