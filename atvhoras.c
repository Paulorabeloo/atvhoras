#include <stdio.h>
int main(){
    int horas;
    scanf("%i", &horas);
    if (horas >=18 || horas <= 5){
        printf("Est� escuro");
    }
    else{
        printf("Est� claro");
    }
return 0;
}
