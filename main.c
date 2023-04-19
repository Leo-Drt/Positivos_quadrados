#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int i=0, n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um valor para contagem !\n");
    scanf("%d",&n);
    while(i <= n){
        if(i % 2 == 0 ){
            printf("%d ao quadrado = %d\n",i,i*i);
        }
        i++;

    }
    return 0;
}
