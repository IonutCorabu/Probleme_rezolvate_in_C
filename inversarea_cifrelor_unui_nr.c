#include <stdio.h>

int main(){
    int n;

    printf("Alegeti un numar pana la 10000, inclusiv:\n n = "); // ne afiseaza ca trebuie sa introducem un numar
    scanf("%d",&n); // memoreaza numarul introdus in variabila n
    while (n>10000){ //daca n nu este in intervalul 100-999
        printf("Numarul este prea mare.\n");
        printf("Alegeti un numar pana la 10000, inclusiv:\n n = "); // ne afiseaza din nou ca trebuie sa alegem un numar
        scanf("%d",&n); // pune numarul introdus in variabila n
    }
    
    //aflam cifrele numarului cu restul impartirii la 10
    //punem cifrele intr-un vector
    int k=0;
    int v[k];
    while (n!=0){
        v[k] = n%10;
        n = n/10;
        k++;
    }

    //construim numarul invers
    int nr_inv = 0;
    int contor = 1;
    for (int i=k-1;i>=0;i--){
        nr_inv = nr_inv + contor * v[i];
        contor = contor * 10;
    }
    printf("%d\n",nr_inv);
    
    return 0;
}

