#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num, i=2;
    bool divisible = false;

    printf("Algorisme: Divisible_NoDivisible (exercici 27).\n");

    printf("Introdueix un enter: ");
    scanf("%d", &num);
    fflush(stdin);

    while(i<=10 && !divisible){
        if(num%i==0) divisible=true;
        i++;
    }

    if(divisible){
        printf("%cs divisible per %d!\n", (char)144, --i);
    }else{
        printf("No %cs divisible!\n", (char)130);
    }

    return 0;
}
