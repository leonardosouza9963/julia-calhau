#include <stdio.h>
int main(){
     int a, b, c;
     
     printf("Digite dois numeros inteiros:\n");
     
     scanf("%d %d", &a, &b);
     
     c = a + b;
     printf("A soma de a + b = %d", c);
     return 0;
}
