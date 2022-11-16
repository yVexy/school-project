#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <ctype.h>
#define MAXNUMEROS 50
#define MAXESTRELAS 12

void musica(void);
int lerinteiro() 
{
    int num;
    int i;
    do
    {
        printf("\nIntroduza uma opcao:\n> ");
        fflush(stdin);
        i = scanf("%d", &num);
    } while (num < 1 || num > 22 || i == 0);

    return num;
}

int main()
{

    char p1, p2, p3, p4, p5;
    int opcao;
    char sair;
    int continuar;
    float numero1, dobro;
    float numdiv1, numdiv2, div;
    float r, rlargura, raltura;
    float t, tbase, taltura;
    float c, craio;
    float numraiz, raiz;
    float euros, escudos;
    float media, dc1, dc2, dc3, dc4, dc5;
    float nmenorq2_1, nmenorq2_2;
    float nmenorq3_1, nmenorq3_2, nmenorq3_3;
    int nf, fat;
    int ninteiro;
    char vogal, consoante;
    char parar;
    char letra;
    int vogalc, consoantec;
    char converter;
    int contador, base, expoente, potencia;
    int gerar, numeros, estrelas;
    int num1, num2, num3, num4, num5, num6, num7;

    do
    {
        setlocale(LC_ALL, "");
        system("cls");
        printf("\tProgramar\n");
        printf("1-Ler 5 palavras\n2-Multiplicacao\n3-Divisisao\n4-Area do retangulo\n5-Area do triangulo\n6-Area da circunferencia\n7-Raiz de um numero\n8-Euromelhoes\n9-Convertor de euros para escudos\n10-Calcular a media de 5 notas\n11-Ver qual o menor de 2 numeros\n12-Ver qual o menor de 3 numeros\n13-Calcular um factorial\n14-Disabled\n15-Verificar se o numero tem so um digito ou n�o\n16-Verificar se � uma consoante\n17-Verificar se � uma vogal\n18-Contar caracteres e identificar\n19-Verificar se � um caracter ou n�o\n20-Transformar minusculo em maiusculo\n21-Calcular potencia\n22-Sair");
        opcao = lerinteiro();
        system("cls");
        opcao = toupper(opcao);
        switch (opcao)
        {
        case 1: 
            printf("Escreva 5 palavras:");
            printf("\nPalavra 1:\n> ");
            scanf("%c", &p1);
            fflush(stdin);
            printf("\nPalavra 2:\n> ");
            scanf("%c", &p2);
            fflush(stdin);
            printf("\nPalavra 3:\n> ");
            scanf("%c", &p3);
            fflush(stdin);
            printf("\nPalavra 4:\n> ");
            scanf("%c", &p4);
            fflush(stdin);
            printf("\nPalavra 5:\n> ");
            scanf("%c", &p5);
            break;
        case 2:
            printf("Introduza um numero:\n> ");
            scanf("%f", &numero1);
            dobro = numero1 * 2;
            printf("\n\nO dobro do numero %.2f e %.2f", numero1, dobro);
            break;
        case 3:
            printf("Introduza 1 numero:\n> ");
            scanf("%f", &numdiv1);
            printf("Introduza outro numero:\n> ");
            scanf("%f", &numdiv2);
            div = numdiv1 / numdiv2;
            printf("O produto de %.2f com %.2f = %.2f", numdiv1, numdiv2, div);
            break;
        case 4:

            printf("Introduza a medida da altura:\n> ");
            scanf("%f", &raltura);
            printf("\nIntroduza a medida da altura:\n> ");
            scanf("%f", &rlargura);
            r = raltura * rlargura;
            printf("\nO retangulo tem de area: %.2f", r);
            break;
        case 5:
            printf("Introduza a medida da base:\n> ");
            scanf("%f", &tbase);
            printf("\nIntroduza a medida da altura:\n> ");
            scanf("%f", &taltura);
            t = (tbase * taltura) / 2;
            printf("\n\nO triangulo tem de area: %.2f", t);
            break;
        case 6:
            printf("Introduza a medida do raio:\n> ");
            scanf("%f", &craio);
            c = 3.14 * craio * craio;
            printf("\nO circunferencia tem de area: %.2f", c);
            break;
        case 7:
            printf("Introduza a medida do raio:\n> ");
            scanf("%f", &numraiz);
            raiz = sqrt(numraiz);
            printf("\nA raiz de %.2f = %.2f", numraiz, raiz);
            break;
        case 8:
            srand(time(NULL));
            printf("Clique enter para gerar um boletim do euromilhoes\n\n");
            getch();

            num1 = rand() % MAXNUMEROS;
            num2 = rand() % MAXNUMEROS;
            num3 = rand() % MAXNUMEROS;
            num4 = rand() % MAXNUMEROS;
            num5 = rand() % MAXNUMEROS;
            num6 = rand() % MAXESTRELAS;
            num7 = rand() % MAXESTRELAS;

            if (num1 == num2 || num1 == num3 || num1 == num4 || num1 == num5 || num2 == num3 || num2 == num4 || num2 == num5 || num3 == num4 || num3 == num5 || num4 == num5 || num6 == num7)
            {
                num1 = rand() % MAXNUMEROS;
                num2 = rand() % MAXNUMEROS;
                num3 = rand() % MAXNUMEROS;
                num4 = rand() % MAXNUMEROS;
                num5 = rand() % MAXNUMEROS;
                num6 = rand() % MAXESTRELAS;
                num7 = rand() % MAXESTRELAS;
            }

            for (numeros = 1; numeros <= 50; numeros++)
            {
                if (numeros == num1 || numeros == num2 || numeros == num3 || numeros == num4 || numeros == num5)
                {
                    printf(" x ");
                }
                else
                {
                    printf("%02d ", numeros);
                }
                if (numeros % 6 == 0)
                {
                    printf("\n");
                }
            }

            printf("\n\n\n");

            for (estrelas = 1; estrelas <= 12; estrelas++)
            {
                if (estrelas == num6 || estrelas == num7)
                {
                    printf(" x ");
                }
                else
                {
                    printf(" %02d ", estrelas);
                }
                if (estrelas % 3 == 0)
                {
                    printf("\n");
                }
            }
            break;
        case 9:
            printf("EUROS:");
            scanf("%f", &euros);
            escudos = euros * 200.482;
            printf("ESCUDOS: %.3f", escudos);
            break;
        case 10:
            printf("Calcular media");
            printf("\n\nIntroduz a nota de 5 disciplinas\nDisciplina 1:\n> ");
            scanf("%f", &dc1);
            printf("\nDisciplina 2:\n> ");
            scanf("%f", &dc2);
            printf("\nDisciplina 3:\n> ");
            scanf("%f", &dc3);
            printf("\nDisciplina 4:\n> ");
            scanf("%f", &dc4);
            printf("\nDisciplina 5:\n> ");
            scanf("%f", &dc5);
            media = (dc1 + dc2 + dc3 + dc4 + dc5) / 5;
            printf("A media = %.2f", media);
            break;
        case 11:
            printf("Calcular o menor do 2 numeros");
            printf("Numero 1:\n> ");
            scanf("%f", &nmenorq2_1);
            printf("Numero 2:\n> ");
            scanf("%f", &nmenorq2_2);
            if (nmenorq2_1 < nmenorq2_2)
            {
                printf("o numero menor e%.2f", nmenorq2_1);
            }
            else
            {
                if (nmenorq2_1 > nmenorq2_2)
                {
                    printf("o numero menor e %.2f", nmenorq2_2);
                }
            }
            break;
        case 12:
            printf("Calcular o menor do 3 numeros");
            printf("\nNumero 1:\n> ");
            scanf("%f", &nmenorq3_1);
            printf("\nNumero 2:\n> ");
            scanf("%f", &nmenorq3_2);
            printf("\nNumero 3:\n> ");
            scanf("%f", &nmenorq3_3);
            if (nmenorq3_1 < nmenorq3_2 && nmenorq3_1 < nmenorq3_3)
            {
                printf("o numero menor e %.2f", nmenorq3_1);
            }
            else
            {
                if (nmenorq3_1 > nmenorq3_2 && nmenorq3_2 < nmenorq3_3)
                {
                    printf("o numero menor e %.2f", nmenorq3_2);
                }
                else
                {
                    if (nmenorq3_3 < nmenorq3_1 && nmenorq3_3 < nmenorq3_2)
                    {
                        printf("o numero menor e %.2f", nmenorq3_3);
                    }
                }
            }
            break;
        case 13:
            printf("Introduza o numero que quer calcular:\n> ");
            scanf("%i", &nf);
            for (fat = 1; nf > 1; nf = nf - 1)
            {
                fat = fat * nf;
            }

            printf("\nO resultado e %i", fat);
            break;
        case 14:

                printf("!Finalizado\n");
            
        break;
        case 15:
            printf("Introduza um digito:\n> ");
            scanf("%i", &ninteiro);
            if (ninteiro <= 9 && ninteiro >= 0)
            {
                printf("Boa o numero %i tem somente um digito", ninteiro);
            }
            else
            {
                printf("O numero %i nao tem so um digito", ninteiro);
            }
            break;
        case 16:
            fflush(stdin);
            consoante = toupper(consoante);
            printf("Introduza uma consoante:\n> ");
            fflush(stdin);
            scanf("%c", &consoante);
            if (consoante == 'a' || consoante == 'e' || consoante == 'i' || consoante == 'o' || consoante == 'u' || consoante == 'A' || consoante == 'E' || consoante == 'I' || consoante == 'O' || consoante == 'U')
            {
                printf("A letra/palavra %c nao pode ser utilizada aqui", consoante);
            }
            else
            {
                printf("%c e uma consoante", consoante);
            }
            break;
        case 17:
            fflush(stdin);
            vogal = toupper(vogal);
            printf("Introduza uma consoante:\n> ");
            fflush(stdin);
            scanf("%c", &vogal);
            if (vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u' || vogal == 'A' || vogal == 'E' || vogal == 'I' || vogal == 'O' || vogal == 'U')
            {
                printf("Vogal %c esta correta", vogal);
            }
            else
            {
                printf("A letra/palavra %c nao pode ser utilizada aqui", vogal);
            }
            break;
        case 18:
            system("cls");
            consoantec = 0;
            vogalc = 0;
            while (letra != '#')
            {
                printf("Introduza uma letra:\n> ");
                fflush(stdin);
                scanf("%c", &letra);
                if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
                {
                    vogalc++;
                }
                else
                {
                    consoantec++;
                }
                fflush(stdin);
            }
            consoantec--;
            printf("vagais:%i\n", vogalc);
            printf("consoantes:%i", consoantec);

            break;
        case 19:
            printf("Introduza um caracter:\n\n> ");
            fflush(stdin);
            scanf("%c", &letra);
            letra = tolower(letra);
            if (isalpha(letra) >= 'a')
            {
                printf("\nA letra %c pode ser utilizada!", letra);
            }
            else
            {
                printf("\nO caractere %c nao � uma letra", letra);
            }
            break;
        case 20:
            printf("Introduza um caracter:\n> ");
            fflush(stdin);
            scanf("%c", &converter);
            converter = converter + 'A' - 'a';
            printf("%c", converter);
            break;
        case 21:
            printf("\nDigite a base:\n> ");
            scanf("%d", &base);
            printf("\nDigite o expoente:\n> ");
            scanf("%d", &expoente);
            potencia = 1;
            contador = 0;

            while (contador != expoente)
            {
                potencia = potencia * base;
                contador++;
            }
            printf("%d\n", potencia);

            break;
        case 22: 
            system("cls");
            printf("\n Tens a certeza que queres sair (S)im ou (N)ao:\n> ");
            fflush(stdin);
            scanf("%c", &sair);
            sair = toupper(sair);

            switch (sair)
            {
            case 'S':
                printf("\n Sessao finalizada.");
                break;

            case 'N':
                opcao = 0;
                break;

            default:
                printf("\n Introduza uma opcao valida!");
                break;
            }
            break;
        default:
            printf("\n Introduza uma opcao valida!");
            opcao = 0;
            break;
        }
        getch();
    } while (opcao != 22);

    return 0;
}