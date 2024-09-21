
#include <stdio.h>
#include <stdlib.h>

float Media(float nota1, float nota2, float nota3){
    float media;
    if(nota3<0){
        media = (nota1+nota2)/2;
    }else if(nota1<0){
        media = (nota2+nota3)/2;
    }else if(nota2<0){
        media = (nota1+nota3)/2;
    }else{
        media = (nota1+nota2+nota3)/3;
    }
    return media;
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
    float nota1, nota2, nota3, media, maior1, maior2;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    
    media = Media(nota1, nota2, nota3);
    printf("\nA media principal e: %.2f", media);

     if (nota1 >= nota2 && nota1 >= nota3) {
        maior1 = nota1;
        maior2 = Maior(nota2, nota3);
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        maior1 = nota2;
        maior2 = Maior(nota1, nota3);
    } else {
        maior1 = nota3;
        maior2 = Maior(nota1, nota2);
    }

    media = Media(maior1, maior2, -1);
    printf("\nA media secundaria e: %.2f", media);

    
    return 0;
}
