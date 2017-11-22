// Arquivo de programação contendo o main
// Neste arquivo você deverá implementar a EXECUÇÃO das funções
// de cada atividade proposta. Este arquivo não deverá conter
// implementação de funções e sim as chamadas das funções, a fim
// de se utilizá-las e obter resultados. Esse é basicamente um
// arquivo de parâmetros a serem rodados e obtidos resultados.

// ATALHOS INTERESSANTES:
// Comentar linhas: Ctrl + SHIFT + c
// Descomentar linhas: Ctrl + SHIFT + x


// Inclusão de bibliotecas usadas em cada programa
#include <iostream>
using namespace std;

// Biblitoeca desenvolvida durante o curso
# include "matriz.h"
# include "minhabiblioteca.h"
# include "minhasfuncoes.h"


// Início da função main. Apenas esta função poderá estar nesse arquivo.
// Nenhuma outra função poderá estar aqui.


int main()
{
    // =============================================
//     INICIE  SUA PROGRAMAÇÃO ABAIXO DESTA MENSAGEM
    // =============================================

//
//    double h;
//
//
//    h = Secante(4,3,100, 0.0000001, 1);
//
//    cout << "\n\n" << setprecision(15) << h;

double S;
S = QuadraturaGuassiana(1, 10, 20);

cout << S;

int pi;
pi = 3,14159265358979323846;

double VET_X0[4]={1,2,1,2*pi};

Matriz X0(VET_X0,1,4),OUT(1,4),MAT_JACOB(4,4);

JacobianaMat(MAT_JACOB,OUT,X0,1);

MAT_JACOB.imprime();












    // ============================================
    // TERMINE SUA PROGRAMAÇÃO ACIMA DESSA MENSAGEM
    // ============================================
}
