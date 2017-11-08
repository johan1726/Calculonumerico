// Arquivo de cabeçalho minhabiblioteca.h. Contém os protótipos das funções
#ifndef MINHABIBLIOTECA
#define MINHABIBLIOTECA

# include <cassert>
# include <cstdlib>
# include "matriz.h"
// .
// .
// .
// .
// .
// A TUA DECLARAÇÃO DE PROTÓTIPOS DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMAÇÃO
void Identidade (Matriz &);
void Copia (Matriz & , Matriz&);
void SOMA(Matriz & , Matriz &, Matriz &);
void SUBTRAI(Matriz & , Matriz &, Matriz &);
void MULTIPLICA (Matriz &, Matriz &, Matriz &);
Matriz TRANSPOSTA(Matriz &);
double Modulo (Matriz );
double funcaopadrao1(double);
double e2xTAYLOR (double, int);
double eaxTAYLOR (double , double, double , int );
double esxTAYLOR (double , double ,  int );
double elxTAYLOR (double , double , int );
double derivPROG (double, double=0.01);
double derivREG( double , double=0.01);
double derivCEN( double , double=0.01);
double derivPARC( Matriz , int , double=0.01);
void TriangSup (Matriz , Matriz  , Matriz &);
void EliminGauss (Matriz , Matriz , Matriz &, Matriz &);
void GaussSeidel(Matriz , Matriz , Matriz , Matriz &, double , int, int DBG_VIEW = 0);
void Jacobi ( Matriz , Matriz , Matriz , Matriz &, double=0.000001, int=1000);
void EliminGaussPivotPARC( Matriz , Matriz , Matriz &, Matriz &, int DBG_VIEW = 0);
void EliminGaussPivo(Matriz , Matriz , Matriz &, Matriz &, Matriz &, int DBGV_VIEW = 0);
void SOR(Matriz , Matriz , Matriz X, Matriz &, double , double , int , int DBG_VIEW = 0);
double Bissecao(double , double , int , double=0.0000001 , int DBG_VIEW = 0);
double Newton1D (double , int ,double tol=0.000001,int DBG_VIEW = 0 );
double Secante (double , double , int , double tol=0.000001, int DBG_VIEW = 0);
void GradienteVet( Matriz &, int , Matriz &, double h = 0.0001);


// TUA DECLARAÇÃO DE PROTÓTIPOS AQUI......................

// A TUA DECLARAÇÃO DE PROTÓTIPOS DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMAÇÃO
// .
// .
// .
// .
// .

// Função de teste. mantenha essa função no fim do arquivo. Não a apague.
void TesteDeFuncaoComCabecalho (void);

#endif // MINHABIBLIOTECA
