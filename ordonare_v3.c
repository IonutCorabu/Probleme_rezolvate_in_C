#include <stdio.h>
int main(){
    int a,b,c;
    
    
    printf("a = ");
    scanf("%d",&a);
    
    printf("b = ");
    scanf("%d",&b);
    
    printf("c = ");
    scanf("%d",&c);
    
    if (a<=b && a<=c && b<=c){
        printf("%d %d %d\n",c,b,a);
    }
    else if (a<=b && a<=c && b>=c){
        printf("%d %d %d\n",b,c,a);
    }
    else if (b<=a && b<=c && a<=c){
        printf("%d %d %d\n",c,a,b);
    }
    else if (b<=a && b<=c && a>=c){
        printf("%d %d %d\n",a,c,b);
    }
    else if (c<=a && c<=b && a<=b){
        printf("%d %d %d\n",b,a,c);
    }
    else if (c<=a && c<=b && a>=b){
        printf("%d %d %d\n",a,b,c);
        }
    return 0;
}

