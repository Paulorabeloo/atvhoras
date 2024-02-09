#include <stdio.h>
int main(){
    int horas;
    scanf("%i", &horas);
    if (horas >=18 || horas <= 5){
        printf("Está escuro");
    }
    else{
        printf("Está claro");
    }
return 0;
}
