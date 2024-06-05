#include <stdio.h>
#include <string.h>
#include <stdlib.h>
   char tabuleiro[3][3] = {"   ", "   ", "   "};
   int ganhou = 0;
   int jogadas = 0;
int main()
{
    printf("cada lugar tem sua posição, e voce ira jogar de acordo com elas");
    printf("\n  1| 2 | 3");
   printf("\n --+---+---");
   printf("\n  4| 5 | 6");
   printf("\n --+---+---");
   printf("\n  7| 8 | 9\n\n");
    while (1)
    {
        zerartabuleiro();
        jogadas = 0;
        ganhou = 0;
        int jogar_dnv;
        while (ganhou == 0 & jogadas < 5)
        {
            jogodavelha(&tabuleiro);
            player1();
            jogodavelha(&tabuleiro);
            player2();


        }
        printf("Deseja jogar de novo?\n1 - sim\n2 - não");
        scanf("%i", &jogar_dnv);
        if (jogar_dnv == 2)
        {
            break;
        } 
    }
}

void jogodavelha(char tabuleiro[3][3])
{
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);


}

void player1()
{
    int posicao;
    printf("\nDigite a posição que deseja jogar");
    scanf("%i", &posicao);
    if (posicao<4)
    {
        for (int i = 0; i < 3; i++)
        {
            if (posicao == i+1)
            {
            tabuleiro[0][i] ='x';
            jogadas++;
            }
        }
        
    }

        else if (posicao>3 & posicao<7)
    {
        for (int i = 3; i < 6; i++)
        {
            if (posicao == i+1)
            {
            tabuleiro[0][i] ='x';
            jogadas++;
            }
            
        }
    }

        else if (posicao>6 & posicao<10)
    {
        for (int i = 6; i < 9; i++)
        {
            if (posicao == i+1)
            {
            tabuleiro[0][i] ='x';
            jogadas++;
            }
        }
    }
if (tabuleiro[0][0] == 'x' & tabuleiro[0][1] == 'x'& tabuleiro[0][2] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][0] == 'x' & tabuleiro[1][0] == 'x'& tabuleiro[2][0] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][0] == 'x' & tabuleiro[1][1] == 'x'& tabuleiro[2][2] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][2] == 'x' & tabuleiro[1][1] == 'x'& tabuleiro[2][0] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[1][0] == 'x' & tabuleiro[1][1] == 'x'& tabuleiro[1][2] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[2][0] == 'x' & tabuleiro[2][1] == 'x'& tabuleiro[2][2] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou;
}
if (tabuleiro[0][1] == 'x' & tabuleiro[1][1] == 'x'& tabuleiro[2][1] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][2] == 'x' & tabuleiro[1][2] == 'x'& tabuleiro[2][2] == 'x')
{
   printf("\nXIZINHO GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
}

void player2()
{

//--------------------------------------------------------------------------
    int posicao;
    printf("\nDigite a posição que deseja jogar");
    scanf("%i", &posicao);
    if (posicao<4)
    {
        for (int i = 0; i < 3; i++)
        {
            if (posicao == i+1)
            {
            tabuleiro[0][i] ='o';
            }
        }
        
    }

        else if (posicao>3 & posicao<7)
    {
        for (int i = 3; i < 6; i++)
        {
            if (posicao == i+1)
            {
            tabuleiro[0][i] ='o';
            }
            
        }
    }

        else if (posicao>6 & posicao<10)
    {
        for (int i = 6; i < 9; i++)
        {
            if (posicao == i+1)
            {
            tabuleiro[0][i] ='o';
            }
        }
    }
//-------------------------------------------------------------------------

if (tabuleiro[0][0] == 'o' & tabuleiro[0][1] == 'o'& tabuleiro[0][2] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][0] == 'o' & tabuleiro[1][0] == 'o'& tabuleiro[2][0] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][0] == 'o' & tabuleiro[1][1] == 'o'& tabuleiro[2][2] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][2] == 'o' & tabuleiro[1][1] == 'o'& tabuleiro[2][0] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[1][0] == 'o' & tabuleiro[1][1] == 'o'& tabuleiro[1][2] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[2][0] == 'o' & tabuleiro[2][1] == 'o'& tabuleiro[2][2] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou;
}
if (tabuleiro[0][1] == 'o' & tabuleiro[1][1] == 'o'& tabuleiro[2][1] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}
if (tabuleiro[0][2] == 'o' & tabuleiro[1][2] == 'o'& tabuleiro[2][2] == 'o')
{
   printf("\nBOLINHA GANHOUUUU\n");
   printf("\n  %c| %c | %c",tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
   printf("\n --+---+---");
   printf("\n  %c| %c | %c",tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
   ganhou++;
}



}

void zerartabuleiro()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = ' ';
        }
        
    }
    
}