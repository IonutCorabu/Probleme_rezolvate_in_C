

#include <stdio.h>
int main (){
    int n = -1;
    
    do{
        printf("Introdu un nr: ");
        scanf("%d",&n);
    }while (n<0 || n>9999);
    printf("Nr ales este: %d\n",n);
    
    int cifra_max = n%10;
    int poz_max = 0;
    while (n!=0){
        if (cifra_max < n%10){
            cifra_max = n%10;
            poz_max++;
        }
        n = n/10;
    }
    printf("Cifra maxima a numarului ales este: %d\n",cifra_max);
    printf("Cifra maxima apare prima oara pe pozitia : %d\n",poz_max);

    return 0;
}

