/*
 Numarul nr se imparte succesiv la 2 si noul nr devine partea intreaga.
 (ex: 19:2=9 si rest 1…noul nr devine 9).
 Restul impartirii la 2 (19:2=9 are rest 1) se foloseste pentru compunere numar binar.
 Primul rest este prima cifra a nr_bin (cifra unitatilor).
 Al doilea rest este a doua cifra (cifra zecilor).
 Al treilea rest este a treia cifra (cifra sutelor).
 …si tot asa.

 Pentru a compune nr_bin din aceste resturi:
 nr_bin = cifra_unitatilor + cifra_zecilor*10 + cifra_sutelor*100 + cifra_miilor*1000 + …

 Pas 0: Initializam nr_bin cu 0 .
 Pas 1: Pt primul rest (cifra unitatilor):        nr_bin = 0 + rest * 1;
 Pas 2: Pt al doilea rest (cifra zecilor):         nr_bin = nr_bin + rest * 10;
 Pas 3: Pt al treilea rest (cifra sutelor):        nr_bin = nr_bin + rest * 100;
 …..samd.

 Se observa ca restul este inmultit cu 1, 10, 100, 1000 samd.
 Pentru asta folosim o variabila contor pe care o initializam cu 1, o folosim prima data cand contor = 1,
 dupa care la fiecare pas o inmultim cu 10.
*/
#include <stdio.h>

int main(){
    int nr;
    
    //printf("nr = ");
    //scanf("%d", &nr);
    
    printf("Alegeti un numar intre 0-20, inclusiv:\n nr = "); // ne afiseaza ca trebuie sa alegem un numar
    scanf("%d",&nr); // pune numarul introdus in variabila nr
    while (nr>20){
        printf("Numarul este prea mare.\n\n");
        printf("Alegeti un numar intre 0-20, inclusiv:\n nr = "); // ne afiseaza din nou ca trebuie sa alegem un numar
        scanf("%d",&nr); // pune numarul introdus in variabila nr
    }
    
    int nr_bin = 0;
    int contor = 1;
    
    while (nr!=0){
        nr_bin = nr_bin + (nr%2)*contor;
        nr = nr/2;
        contor = contor * 10;
    }
    printf("Numarul in binar este %d.\n",nr_bin);
    return 0;
}

