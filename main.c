#include <stdio.h>
//#include <stdio_ext.h>
#include <string.h>
#define TAM 3

int lerInteiro(){
    char buffer[50];
    int valor;
    fgets(buffer,sizeof(buffer),stdin);
    sscanf(buffer,"%d",&valor);
    return valor;
}

int lerFloat(){
    char buffer[50];
    float valor;
    fgets(buffer,sizeof(buffer),stdin);
    sscanf(buffer,"%f",&valor);
    return valor;
}

void lerString(char *destino, int tamanho){
    fgets(destino, tamanho, stdin);
    destino[strcspn(destino,"\n")] ='\0';
}

struct Produtos{
    int codigo;
    int quantidade;
    char nome[50];
    float preco;
};

int main() {
 //   struct Produto;
    char buffer[50];
    int opcao,indice=0;
    struct Produtos produto[TAM];
    printf("1 - Cadastrar produto. \n");
    printf("2 - Listar produtos. \n");
    printf("3 - Efetuar pedido. \n");
    printf("4 - Listar pedidos. \n");
    opcao = lerInteiro();
    switch(opcao){
        case 1:
            for(int i=indice;i<TAM;i++){
                //if(indice<TAM){
                    produto[i].codigo=i+1;
                    printf("Código produto: %d - Informe o nome do produto:\n",produto[i].codigo);
                    lerString(produto[i].nome,sizeof(produto[i].nome));

                    printf("Informe a quantidade do produto:\n");
                    produto[i].quantidade=lerInteiro();

                    printf("Informe o preço do produto:\n");
                    produto[i].preco=lerFloat();
                    indice++;
                //}
            }
        break;
        case 2:
            for(int i=0;i<indice;i++){
                printf("Código produto: %d \n Nome do produto: %s \n Quantidade: %d \n Preço: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].quantidade,produto[i].preco);
            }
            getchar();
        break;
        case 3:
            printf("a");
        break;
        case 4:
            printf("a");
        break;
        default:
            printf("Informe uma opção valida.\n");
    }


    return 0;
}
