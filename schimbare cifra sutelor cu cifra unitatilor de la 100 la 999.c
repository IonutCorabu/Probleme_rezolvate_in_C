#include <stdio.h>
int main(){
    int n,s,z,u; // n, cifra sutelor, cifra zecilor, cifra unitatilor
    printf("Alegeti un numar intre 100-999, inclusiv:\n n = "); // ne afiseaza ca trebuie sa introducem un numar
    scanf("%d",&n); // memoreaza numarul introdus in variabila n
    while (n<100 || n>999){ //daca n nu este in intervalul 100-999
        printf("Numarul nu este in intervalul 100-999.\n");
        printf("Alegeti un numar intre 100-999, inclusiv:\n n = "); // ne afiseaza din nou ca trebuie sa alegem un numar
        scanf("%d",&n); // pune numarul introdus in variabila n
    }
    u = n%10;       // aflam cifra unitatilor
    z = (n/10)%10;  // aflam cifra zecilor
    s = n/100;      // aflam cifra sutelor
    n = u*100 + z*10 + s; // recompunem pe n
    printf("Numarul rezultat in urma inversarii cifrei sutelor cu cifra unitatilor este: \n n = %d \n",n);
    return 0;
}
