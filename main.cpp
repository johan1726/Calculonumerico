// Arquivo de programa��o contendo o main
// Neste arquivo voc� dever� implementar a EXECU��O das fun��es
// de cada atividade proposta. Este arquivo n�o dever� conter
// implementa��o de fun��es e sim as chamadas das fun��es, a fim
// de se utiliz�-las e obter resultados. Esse � basicamente um
// arquivo de par�metros a serem rodados e obtidos resultados.

// ATALHOS INTERESSANTES:
// Comentar linhas: Ctrl + SHIFT + c
// Descomentar linhas: Ctrl + SHIFT + x


// Inclus�o de bibliotecas usadas em cada programa
#include <iostream>
using namespace std;

// Biblitoeca desenvolvida durante o curso
# include "matriz.h"
# include "minhabiblioteca.h"
# include "minhasfuncoes.h"


// In�cio da fun��o main. Apenas esta fun��o poder� estar nesse arquivo.
// Nenhuma outra fun��o poder� estar aqui.


int main()
{
    // =============================================
//     INICIE  SUA PROGRAMA��O ABAIXO DESTA MENSAGEM
    // =============================================

//
//    double h;
//
//
//    h = Secante(4,3,100, 0.0000001, 1);
//
//    cout << "\n\n" << setprecision(15) << h;

//double S;
//S = QuadraturaGuassiana(1, 10, 20);
//
//cout << S;
//
//int pi;
//pi = 3,14159265358979323846;
//
//double VET_X0[4]={1,2,1,2*pi};
//
//Matriz X0(VET_X0,1,4),OUT(1,4),MAT_JACOB(4,4);
//
//JacobianaMat(MAT_JACOB,OUT,X0,1);
//
//MAT_JACOB.imprime();

double a[5]={0,0.25,0.5,0.75,1},r2;
double b[5]={1,1.2840,1.6487,2.1170,2.7183};
Matriz T(a,1,5), B(b,5,1), A(1,2);
MinimosQuad(T,B,1,A,r2);

A.imprime();

cout << "\n"<< r2;
//











    // ============================================
    // TERMINE SUA PROGRAMA��O ACIMA DESSA MENSAGEM
    // ============================================
}
