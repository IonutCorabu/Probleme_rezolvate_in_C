#include <stdio.h>
int main(){
    int a,b,c,v0,v1,v2;
    
    
    printf("a = ");
    scanf("%d",&a);
    
    printf("b = ");
    scanf("%d",&b);
    
    printf("c = ");
    scanf("%d",&c);
    
    if (a<=b && a<=c){
        if (b<=c){ //a<=b<=c
            v0 = c;
            v1 = b;
            v2 = a;
        }
        else{ //a<=c<=b
            v0 = b;
            v1 = c;
            v2 = a;
        }
    }
    
    else if (b<=a && b<=c){
        if (a<=c){ //b<=a<=c
            v0 = c;
            v1 = a;
            v2 = b;
        }
        else{ //b<=c<=a
            v0 = a;
            v1 = c;
            v2 = b;
        }
    }
    
    else if (c<=a && c<=b){
        if (a<=b){ // c<=a<=b
            v0 = b;
            v1 = a;
            v2 = c;
        }
        else{ //c=<b<=a
            v0 = a;
            v1 = b;
            v2 = c;
        }
    }
        
    printf("v0 = %d \nv1 = %d \nv2 = %d\n",v0, v1, v2);
    return 0;
}
