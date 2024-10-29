#include <stdio.h>
#include <math.h>

struct CoordenadaPolar {
    float raio;
    float argumento; 
};

struct CoordenadaCartesiana {
    float x;
    float y;
};

struct CoordenadaCartesiana converter_para_cartesiana(struct CoordenadaPolar polar) {
    struct CoordenadaCartesiana cartesiana;
    cartesiana.x = polar.raio * cos(polar.argumento);
    cartesiana.y = polar.raio * sin(polar.argumento);
    return cartesiana;
}

int main() {
    struct CoordenadaPolar ponto_polar;
    struct CoordenadaCartesiana ponto_cartesiano;

    printf("Digite o valor do raio (r): ");
    scanf("%f", &ponto_polar.raio);

    printf("Digite o valor do argumento (a) em radianos: ");
    scanf("%f", &ponto_polar.argumento);

    ponto_cartesiano = converter_para_cartesiana(ponto_polar);

    printf("\nCoordenadas Cartesiana:\n");
    printf("x = %.2f\n", ponto_cartesiano.x);
    printf("y = %.2f\n", ponto_cartesiano.y);

    return 0;
}
