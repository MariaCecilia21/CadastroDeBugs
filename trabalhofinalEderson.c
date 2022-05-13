#include <stdio.h>
#include <string.h>

//////////////////VARIAVEIS UNIVERSAIS//////////////
int i;
char op;
//////////////DECLARACAO FUNCAO/////////////////////
int Sistemas();
int CadastroBugs();
int ListaBugs();
int AlterarBugs();
int CorrigirStatus();
int Busca();
int Relatorio();
int ExcluirBugs();
//////////////DECLARACAO STRUCT/////////////////////
struct CadastroBug{

    int codigo;
    char descricao[200];
    char status[20];

};

struct Sistemas{

    char cliente[20];
    char nomeSis[20];
    int Bugs[10];

};
    struct Sistemas si[10];
    struct CadastroBug c[10];
/////////////////////MAIN//////////////////////////
int main(){

    char opSis;
    char op1;
    struct Sistemas u[5];
    char op2;
    int *matriz;


    printf(" Bem Vindo!\n\n");
    i = 1;

     printf(" Escolha um sistema:\n\n         Lista de Sistema:\n\n");
     printf(" A -> Banco\n B -> Piracim\n C -> LeitesME\n D -> Paranaue\n E -> SupinoReto\n");
     scanf("%c", &opSis);

    do{
//////////////////////////////SWITCH MASTER//////////////////////////////
        switch(opSis){

        case 'A':

                printf(" MENU: \n a)Ver lista de bugs\n b)Cadastrar Bug\n c)Excluir Bug\n d)Buscar Bug\n e)Alterar Bug\n f)Corrigir Bug\n g)Sair do sistema\n h)Relatorio\n ->");
                scanf(" %c", &op2);

                switch(op2){

                case 'a':

                    ListaBugs();

                    printf("Mostrar novos bug cadastrados?(s/n)");
                    scanf(" %c", &op);

                    if(op == 's'){

                        for(i = 5; i < 10; i++){
                            printf("%d\n", c[i].codigo);
                            break;
                        }

                    }else{
                        break;
                    }

                    break;

                case 'b':

                    CadastroBugs();

                    break;

                case 'c':

                    ExcluirBugs();

                    break;

                case 'd':

                    Busca();

                    break;

                case 'e':

                    AlterarBugs();

                    break;

                case 'f':

                    CorrigirStatus();

                    break;

                case 'g':

                    return 0;

                    break;

                default:

                    printf("Opcao nao existente");
                }
                break;

            break;

        case 'B':


                printf(" MENU: \n a)Ver lista de bugs\n b)Cadastrar Bug\n c)Excluir Bug\n d)Buscar Bug\n e)Alterar Bug\n f)Corrigir Bug\n g)Sair do sistema\n h)Relatorio\n ->");
                scanf(" %c", &op2);

                switch(op2){

                case 'a':

                    ListaBugs();

                    break;

                case 'b':

                    CadastroBugs();

                    break;

                case 'c':

                    ExcluirBugs();

                    break;

                case 'd':

                    Busca();

                    break;

                case 'e':

                    AlterarBugs();

                    break;

                case 'f':

                    CorrigirStatus();

                    break;

                case 'g':

                    return 0;

                    break;
                }

         case 'C':

                printf(" MENU: \n a)Ver lista de bugs\n b)Cadastrar Bug\n c)Excluir Bug\n d)Buscar Bug\n e)Alterar Bug\n f)Corrigir Bug\n g)Sair do sistema\n h)Relatorio\n ->");
                scanf(" %c", &op2);

                switch(op2){

                case 'a':

                    ListaBugs();

                    break;

                case 'b':

                    CadastroBugs();

                    break;

                case 'c':

                    ExcluirBugs();

                    break;

                case 'd':

                    Busca();

                    break;

                case 'e':

                    AlterarBugs();

                    break;

                case 'f':

                    CorrigirStatus();

                    break;

                case 'g':

                    return 0;

                    break;
                }

                break;

         case 'D':

                printf(" MENU: \n a)Ver lista de bugs\n b)Cadastrar Bug\n c)Excluir Bug\n d)Buscar Bug\n e)Alterar Bug\n f)Corrigir Bug\n g)Sair do sistema\n h)Relatorio\n ->");
                scanf(" %c", &op2);

                switch(op2){

                case 'a':

                    ListaBugs();

                    break;

                case 'b':

                    CadastroBugs();

                    break;

                case 'c':

                    ExcluirBugs();

                    break;

                case 'd':

                    Busca();

                    break;

                case 'e':

                    AlterarBugs();

                    break;

                case 'g':

                    CorrigirStatus();

                    break;

                case 'f':

                    return 0;

                    break;
                }

                break;

         case 'E':

                printf(" MENU: \n a)Ver lista de bugs\n b)Cadastrar Bug\n c)Excluir Bug\n d)Buscar Bug\n e)Alterar Bug\n f)Corrigir Bug\n g)Sair do sistema\n h)Relatorio\n ->");
                scanf(" %c", &op2);

                switch(op2){

                case 'a':

                    ListaBugs();

                    break;

                case 'b':

                    CadastroBugs();

                    break;

                case 'c':

                    ExcluirBugs();

                    break;

                case 'd':

                    Busca();

                    break;

                case 'e':

                    AlterarBugs();

                    break;

                case 'f':

                    CorrigirStatus();

                    break;

                case 'g':

                    return 0;

                    break;

                case 'h':
                    Relatorio();
                    break;
                }


        }

         }while(1);


    return 0;

}
///////////////////IMPLEMENTACAO/////////////////////
int Sistemas(){

    struct Sistemas s[5];

    strcpy(s[0].cliente,"Ederson");
    strcpy(s[0].nomeSis,"Banco");

    strcpy(s[1].cliente, "Joaquim");
    strcpy(s[1].nomeSis, "Piracim");

    strcpy(s[2].cliente, "Paula");
    strcpy(s[2].nomeSis, "LeitesME");

    strcpy(s[3].cliente, "Priscila");
    strcpy(s[3].nomeSis, "Paranaue");

    strcpy(s[4].cliente, "Vitor");
    strcpy(s[4].nomeSis, "SupinoReto");

}

int CadastroBugs(){


    for(i = 5; i < 10; i++){

        printf("Codigo: ");
        scanf("%d", &c[i].codigo);
        printf("Descricao: ");
        scanf("%s", &c[i].descricao);

        printf("Inserir novo bug?(s/n)\n");
        scanf(" %c", &op);

        if(op == 's'){
            continue;
        }else{
            break;
        }

    }

}

int ListaBugs(){


    c[0].codigo = 111;
    strcpy (c[0].descricao , " O brilho da tela pode nao responder aos ajustes\nAlgumas alteracoes de brilho podem nao se aplicar imediatamente.\nUma reinicializacao deve resolver isso, para que as alteracoes sejam aplicadas.\n");
    strcpy (c[0].status,  " Corrigido\n");

    c[1]. codigo = 222;
    strcpy (c[1].descricao, "Tem a biblioteca declarada, e o programa nao identifica.");
    strcpy (c[1].status, "Nao Corrigido\n");

    c[2]. codigo = 333;
    strcpy (c[2].descricao, "Tem a funcao declarada, e o comando de chamada nao faz nada.");
    strcpy (c[2].status, "Nao Corrigido\n");

    c[3]. codigo = 444;
    strcpy (c[3].descricao, "Tem uma estrutura condicional que nao finaliza e passa para a proxima instrucao, fica repetindo o comando infinitamente.");
    strcpy (c[3].status, "Corrigido\n");

    c[4]. codigo = 555;
    strcpy (c[4].descricao, "O sistema interpreta movimentos do cursor sem que ele tenha sido movimentado");
    strcpy (c[4].status, "Corrigido\n");

    printf(" %d\n %d\n %d\n %d\n %d\n", c[0].codigo, c[1].codigo, c[2].codigo, c[3].codigo, c[4].codigo);

}

int AlterarBugs(){

    int s = -1;
    char novo[200];
    int cod;

    printf("Codigo do bug a ser alterado: ");
    scanf("%d", &cod);

    for(i = 0; i < 10; i++){

        if(c[i].codigo == cod){

            s = i;

        }
    }
    if(s == -1){ printf("Codigo nao encontrado");}
    else{

            printf("Nova descricao:\n");
            scanf("%s", &novo);

            strcpy(c[s].descricao, novo);

            printf("Deseja alterar o status do bug?(s/n)");
            scanf(" %c", &op);

                    if(op == 's'){

                        printf("Novo status:\n");
                        scanf("%s", &novo);

                        strcpy(c[s].status, novo);

                    }
    }

}

int CorrigirStatus(){

    int s;
    int cod;
    char novo[20];

    printf("Codigo do bug a ser alterado: ");
    scanf("%d", &cod);

    for(i = 0; i < 10; i++){

        if(c[i].codigo == cod){

            s = i;

        }

    }

    printf("Novo status:\n");
    scanf("%s", &novo);

    strcpy(c[s].status, novo);
}

int Relatorio(){


    for(i = 0;i<10;i++){
        printf("%d\n", c[i].codigo);
        printf("%s\n", c[i].descricao);
        printf("%s\n", c[i].status);
    }


}

int Busca(){

    int cod;
    int s=-1;

    while(s < 0){
        printf("Digite o codigo: ");
        scanf("%d", &cod);

        for(i = 0; i < 10; i++){

            if(c[i].codigo == cod){

                s = i;
            }
        }

        if(s < 0 ){
            printf("Codigo incorreto!\n");
        }else{

            printf(" Codigo: %d\n\n Descricao: %s\n\n Status: %s\n\n", c[s].codigo, c[s].descricao, c[s].status);

        }

    }
}

int ExcluirBugs(){

    int cod;
    int s = -1;


        printf("Codigo a remover: ");
        scanf("%d", &cod);

        for(i = 0; i < 10; i++){

            if(c[i].codigo == cod){

                s = i;
            }
        }

        if(s < 0 ){
            printf("Codigo incorreto!\n");
        }else{
            c[s].codigo = 0;
            c[s].descricao[0] = 0;
            c[s].status[0] = 0;
        }
}
