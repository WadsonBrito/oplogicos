# include <stdio.h>
int main(){
    int idade;
    float altura;

    printf(" Infome sua idade: \n");
    scanf("%d", &idade);
    printf("informe sua altura: \n");
    scanf("%f", &altura);

    if(idade >= 18 && idade <= 30 && altura > 1.70){
        printf("Parabéns você atende aos critérios!!\n");
    } else {
        printf("Infelizmente você não atende aos critérios\n");
    }
    return 0;
}

