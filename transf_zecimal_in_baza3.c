#include <stdio.h>

int main(){
    int nr;
    
    printf("Alegeti un numar intre 0-20, inclusiv:\n nr = ");
    scanf("%d",&nr);
    while (nr>20){
        printf("Numarul este prea mare.\n\n");
        printf("Alegeti un numar intre 0-20, inclusiv:\n nr = ");
        scanf("%d",&nr);
    }
    
    int nr3 = 0;
    int contor = 1;
    
    while (nr!=0){
        //printf("%d ",nr);
        //printf("%d ",nr/3);
        //printf("%d ",nr%3);
        
        nr3 = nr3 + (nr%3)*contor;
        nr = nr/3;
        contor = contor*10;
        
        //printf("%d \n",nr3);
        
    }
    printf("Numarul in baza 3 este %d.\n",nr3);
    return 0;
}

