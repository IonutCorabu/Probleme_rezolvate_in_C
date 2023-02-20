#include <stdio.h>
int main(){
    int n;
    printf(" Alegeti un numar intre 100-999, inclusiv:\n n = "); // ne afiseaza ca trebuie sa alegem un numar
    scanf("%d",&n); // pune numarul introdus in variabila n
    while (n<100 || n>999){ //daca n nu este in intervalul 100-999
        printf("Numarul nu este in intervalul 100-999.\n");
        printf(" Alegeti un numar intre 100-999, inclusiv:\n n = "); // ne afiseaza din nou ca trebuie sa alegem un numar
        scanf("%d",&n); // pune numarul introdus in variabila n
    }
    if (n>= 100 && n<=999){ //atunci cand n este in intervalul 100-999
        int s = n/100; // aflam cifra unitatilor
        s--; //scadem cifra unitatilor cu 1
        n = s*100 + n%100; // recompunem pe n
        printf(" Numarul rezultat in urma scaderii cifrei unitatilor este: \n n = %d \n",n);
    }
    return 0;
}
