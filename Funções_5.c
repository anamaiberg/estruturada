
#include <stdio.h>
#include <stdlib.h>

float Media(float nota1, float nota2, float nota3){
    float media;
    if(nota3<0){
        media = (nota1+nota2)/2;
    }else{
        media = (nota1++nota3)/3;
    }
}

float Maior(float num1, float num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    float nota1, nota2, nota3, media;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    
    media = Media(nota1, nota2, nota3);
    printf("\nA media principal e: %f", media);
    
    return 0;
}
