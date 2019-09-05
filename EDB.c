#include <stdio.h>
#include <stdlib.h>
#define CAP 15000
void preecheV(int vetor[], int tam)
{
    int i;
    for(i=0; i<=tam; i++)
        vetor[i] = rand()%100;
    printf("Valores preenchidos com sucesso!\n");
}
void exibir(int v[])
{
    int i;
    printf("[");
    for(i=0; i<=CAP; i++)
        printf(" %d ",v[i]);
    printf("]\n");
}
int buscaS(int v[])
{
    int x, i;
    printf("\nBusque um numero no vetor: ");
    scanf("%d",&x);
    printf("\nExiste no vetor? ");
    for(i = 0; i <= CAP; i++)
        if(x == v[i])
            return 1;
    return 0;
}
void ordTrocas(int v[])
{
    int i,j;
    for(i=1; i<=CAP; i++)
        for(j=0; j<=CAP-i; j++)
            if(v[j]>v[j+1])
            {
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
    printf("\nValores ordenados com sucesso!\n");
}
int SelMin(int v[], int i)
{
    int j;
    int x=i;
    for(j=i+1;j<=CAP;j++)
        if(v[x]>v[j])
            x=j;
    return x;
}
void ordSelecao(int v[])
{
    int i,m,x;
    for(i=0;i<=CAP-1;i++){
        m = SelMin(v,i);
        x = v[i];
        v[i] = v[m];
        v[m] = x;
    }
    printf("\nValores ordenados com sucesso!\n");
}
void ordSort(int v[])
{
    int i , j, aux;
    for(i = 1; i<=CAP ; i++){
      aux = v[i];
      for(j=i-1;j>=0 && v[j] > aux;j--)
        v[j+1] = v[j];

      v[j+1] = aux;
    }
    printf("\nValores ordenados com sucesso!\n");
}
int buscaB(int v[])
{
    int i,f,m,x;
    printf("Busque um numero no vetor: ");
    scanf("%d",&x);
     printf("\nExiste no vetor? ");
    i = 0;
    f=CAP-1;
    while(i<=f){
        m=(i+f)/2;
        if(x == v[m])
            return 1;
        if(x < v[m])
            f=m-1;
        else
            i = m+1;
    }
    return 0;
}
void menu(int v1[],int v2[],int v3[])
{
    int op = 0;
    int v;
    do
    {
        printf("#---------------------------------------#\n|\t\tMATEUS  \t\t|\n#---------------------------------------#\n");
        printf("[ 1 ] Preencher aleatoriamente o vetor 1\n");
        printf("[ 2 ] Preencher aleatoriamente o vetor 2\n");
        printf("[ 3 ] Preencher aleatoriamente o vetor 3\n");
        printf("[ 4 ] Imprimir o vetor 1\n");
        printf("[ 5 ] Imprimir o vetor 2\n");
        printf("[ 6 ] Imprimir o vetor 3\n");
        printf("[ 7 ] Busca sequencial\n");
        printf("[ 8 ] Ordenar por trocas - BubbleSort\n");
        printf("[ 9 ] Ordenar por selecao\n");
        printf("[ 10 ] Ordenar por Insersao\n");
        printf("[ 11 ] Busca Binaria\n");
        printf("[ 0 ] Sair\n\t>> ");
        scanf("%d",&op);
        switch(op)
        {
        case 0:
            exit(0);
            break;
        case 1:
            preecheV(v1,CAP);
            break;
        case 2:
            preecheV(v2,CAP);
            break;
        case 3:
            preecheV(v3,CAP);
            break;
        case 4:
            printf("Vetor 1 = ");
            exibir(v1);
            break;
        case 5:
            printf("Vetor 2 = ");
            exibir(v2);
            break;
        case 6:
            printf("Vetor 3 = ");
            exibir(v3);
            break;
        case 7:
            printf("Qual vetor deseja efetuar a busca: ");
            scanf("%d",&v);
            switch(v)
            {
            case 1:
                if(buscaS(v1) == 1)
                    printf("SIM\n");
                else
                    printf("NAO\n");
                break;
            case 2:
                if(buscaS(v2) == 1)
                    printf("SIM\n");
                else
                    printf("NAO\n");
                break;
            case 3:
                if(buscaS(v3) == 1)
                    printf("SIM\n");
                else
                    printf("NAO\n");
                break;
            }
            break;
        case 8:
            printf("Em qual vetor deseja efetuar a ordenacao por troca: ");
            scanf("%d",&v);
            switch(v)
            {
            case 1:
                ordTrocas(v1);
                exibir(v1);
                break;
            case 2:
                ordTrocas(v2);
                exibir(v2);
                break;
            case 3:
                ordTrocas(v3);
                exibir(v3);
                break;
            }
            break;
        case 9:
            printf("Em qual vetor deseja efetuar a ordenacao por selecao: ");
            scanf("%d",&v);
            switch(v)
            {
            case 1:
                ordSelecao(v1);
                exibir(v1);
                break;
            case 2:
                ordSelecao(v2);
                exibir(v2);
                break;
            case 3:
                ordSelecao(v3);
                exibir(v3);
                break;
            }
            break;
        case 10:
            printf("Em qual vetor deseja efetuar a ordenacao por incersao: ");
            scanf("%d",&v);
            switch(v)
            {
            case 1:
                ordSort(v1);
                exibir(v1);
                break;
            case 2:
                ordSort(v2);
                exibir(v2);
                break;
            case 3:
                ordSort(v3);
                exibir(v3);
                break;
            }
            break;
        case 11:
            printf("Qual vetor deseja efetuar a busca: ");
            scanf("%d",&v);
            switch(v)
            {
            case 1:
                if(buscaB(v1) == 1)
                    printf("SIM\n");
                else
                    printf("NAO\n");
                break;
            case 2:
                if(buscaB(v2) == 1)
                    printf("SIM\n");
                else
                    printf("NAO\n");
                break;
            case 3:
                if(buscaB(v3) == 1)
                    printf("SIM\n");
                else
                    printf("NAO\n");
                break;
            }
            break;
        default:
            printf("\nOpcao invalida! Tente novamente...\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    }
    while(op != 0);
}
int main(void)
{
    int v1[CAP];
    int v2[CAP];
    int v3[CAP];
    menu(v1,v2,v3);
}
