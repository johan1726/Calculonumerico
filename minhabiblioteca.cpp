// Arquivo .cpp: é o arquivo onde iremos programar as funções que desejamos.
// Sempre, antes de rodar o programa, precisamos declarar o protótipo
// de cada função no arquivo .h (header ou cabeçalho), que funciona como
// um sumário das funções disponíveis na biblioteca


// inclusão do cabeçalho que aponta para esse arquivo
#include <iostream>
using namespace std;

# include "minhabiblioteca.h"
# include "matriz.h"
# include "minhasfuncoes.h"
# include <math.h>
// .
// .
// .
// .
// .
// .
// A TUA PROGRAMAÇÃO DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMAÇÃO
// ========================================================================================


// LISTA DE FUNÇÕES A SEREM CRIADAS:

// Valores máximo e mínimo de um vetor
// Valores máximo e mínimo de uma matriz

// média dos valores de um vetor
// média dos valores de uma matriz


// Soma de matrizes     Matriz SOMA(Matriz A, Matriz B);
// Soma de vetores      a função de cima deve já servir;


// Multiplicação de matrizes
// produto interno entre vetores
// produto vetorial entre vetores
// mutiplicação de matriz por vetor
// transposição de vetores e matrizes
// Copiar uma linha de uma matriz para um vetor
// copiar uma coluna de uma matriz para um vetor


// Cria uma matriz identidade
void Identidade ( Matriz &ID )
{
    int L, C, i;
    L = ID.dim('l'); //Padrao que diz quantas linhas tem a Matriz
    C = ID.dim('c'); // Padrao que diz quantas colunas tem a Matriz



     //conferindo se a matriz e quadrada
     if(L!=C)// se numero de linhas diferente de colunas, aborta pois nao e quadrada
     {
         cout << "Matriz nao e quadrada, abortando... \n";
         abort();
     }

    for(i=0; i<L; i++)
    {
        ID.entrada(i,i,1); //alterando o valor da matriz, (int L, int C, double IN) primeiro um inteiro, segundo inteiro e terceiro double
    }




}

// Copia a Matriz A para a matriz B.
void Copia (Matriz &C , Matriz &D)
{
    int LA, LB, CA, CB, i, j;
    //souble temp
   LA = C.dim('l');
   LB = D.dim('l');
   CA = C.dim('c');
   CB = D.dim('c');

    if (LA != LB || CA!=CB)
    {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
    }

   for(i=0; i<LA; i++)// percorrendo todas as linhas
   {
       for(j=0; j<CA; j++)//percorrendo a coluna
       {
           D.entrada(i, j, C.saida(i,j)); //associa ao i e j o valor de A


           //temp = C.saida(i,j);
           //D.entrada(i,j, temp); mesma coisa que em cima
       }
   }

   //comando .dim verifica a dimensao da matriz, linhas e colunas
}

void SOMA(Matriz &C , Matriz &D, Matriz &E)
{
    // Checar se as dimensões de A e B são Iguais
    // Criar uma nova Matriz onde cada elemento resulta da soma de cada elemento correspondente nas matrizes
    // deve retornar uma matriz

     int LA, LB, LC, CA, CB, CC, i, j ;
    //double temp
   LA = C.dim('l');
   LB = D.dim('l');
   LC = E.dim('l');
   CA = C.dim('c');
   CB = D.dim('c');
   CC = E.dim('c');

    if (LA != LB || CA!=CB)//verifica as dimensoes
    {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
    }

   if (LA != LC || CA!=CC)//verifica as dimensoes
   {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
   }

   for(i=0; i<LA; i++)// percorrendo todas as linhas
   {
       for(j=0; j<CA; j++)//percorrendo a coluna
       {
           E.entrada(i, j, C.saida(i,j)+ D.saida(i,j)); //associa ao i e j o valor de A
           //temp = C.saida(i,j)+ D.saida(i,j);
           //E.entrada(i,j, temp); mesma coisa que em cima


}
   }
}

void SUBTRAI(Matriz &C , Matriz &D, Matriz &E)
{
    // Checar se as dimensões de A e B são Iguais
    // Criar uma nova Matriz onde cada elemento resulta da soma de cada elemento correspondente nas matrizes
    // deve retornar uma matriz

     int LA, LB, LC, CA, CB, CC,  i, j;
    //double temp
   LA = C.dim('l');
   LB = D.dim('l');
   LC = E.dim('l');
   CA = C.dim('c');
   CB = D.dim('c');
   CC = E.dim('c');

    if (LA != LB || CA!=CB)//verifica as dimensoes
    {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
    }

   if (LA != LC || CA!=CC)//verifica as dimensoes
   {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
   }

   for(i=0; i<LA; i++)// percorrendo todas as linhas
   {
       for(j=0; j<CA; j++)//percorrendo a coluna
       {
           E.entrada(i, j, C.saida(i,j) - D.saida(i,j)); //associa ao i e j o valor de A
           //temp = C.saida(i,j)+ D.saida(i,j);
           //E.entrada(i,j, temp); mesma coisa que em cima


}
   }
}

void MULTIPLICA (Matriz &A, Matriz &B, Matriz &C)
{
    // Checar se as dimensões SÃO COMPATÍVEIS
    // deve retornar uma matriz

    int LA, CA, LB, CB, LC, CC;

    LA= A.dim('l'); // LA linhas da matriz A
    CA= A.dim('c');  // CA colunas da matriz A

    LB= B.dim('l');
    CB= B.dim('c');

    LC= C.dim('l');
    CC= C.dim('c');

    if (( CA != LB) || (LC != LA)  ||  (CC != CB))

    {
        cout << "Dimensoes inconsistentes. Funcao Multiplica. Abortando...\n\n";
        abort();
    }


    int i, j, k;
    double somatorio;

    for(i=0; i<LA; i++)
    {
        for (j=0; j<CB; j++)
           {
                somatorio = 0.0;
                for (k=0; k<CA; k++)

                {
                    somatorio = somatorio + A.saida(i,k)*B.saida(k,j);
                 }

                 C.entrada (i,j, somatorio);

        }


    }








}

Matriz TRANSPOSTA(Matriz &A)
{
    // deve retornar uma matriz
}

double Modulo (Matriz A)
{
    int n = A.dim('c');
    double modulo = 0;
    for(int k = 0; k < n; k++)
    {
        modulo = modulo + pow(A.saida(0,k), 2);
    }
    return sqrt(modulo);
}

double e2xTAYLOR (double x , int n)
{
    //SÉRIE DE tAYLOR DA FUNÇÃO e^{-2x}
    int i;
    double somat=0;

    //n nao pode ser negativo

    for(i=0; i<=n; i++)

    {
        somat = somat + ((pow(-2, i))/(fatorial(i))*(pow(x,i)));
    }
    return somat;



}

double eaxTAYLOR (double x, double x0, double a, int n)// f(x) e de alfa x ponto em que eu quero calcular, ponto de onde eu parti, a e i=numero de termos
{
//funçao e^(-ax)
    int i;
    double somat = exp(a*x0);


    if(n<1)
    {
        cout << "\n\nN Nao pode ser negativo, abortando\n\n ";
        abort();
    }

    if(a>0)

    {
        cout << "\n\nAlfa nao pode ser negativo, abortando\n\n";
        abort();
    }

    //n nao pode ser negativo

    for(i=1; i<=n; i++)

    {
        somat = somat + (pow(a,i)*exp(a*x0)*pow(x-x0, i))/fatorial(i);
    }
    return somat;



}

//
//double esxTAYLOR (double x, double x0, int n)
//
//{
//    int i;
//    double somat =  sin(x0);
//
//
//    if(n<1)
//    {
//        cout << "\n\nN Nao pode ser negativo, abortando\n\n ";
//        abort();
//    }
//
//
//    //n nao pode ser negativo
//
//    for(i=1; i<=n; i++)
//
//    {
//        somat = somat + ((pow(-1,i/2))*(pow(sin(x0), (i+1)%2))*(pow(cos(x0), i%2))*(pow(x-x0, i))/fatorial(i) );
//
//        //erro de aproximaçao na serie de taylor
//
//    }
//    return somat;
//}
//
//double elxTAYLOR (double x, double x0, int n)
//
//{
//    int i;
//    double somat =  log10(x0);
//
//
//
//    if(n<1)
//    {
//        cout << "\n\nN Nao pode ser negativo, abortando\n\n ";
//        abort();
//    }
//
//
//    //n nao pode ser negativo
//
//    for(i=1; i<=n; i++)
//
//    {
//        somat = somat + ((pow(-1, i))*(pow(x-x0, i))/(i*pow(x0,i)) );
//    }
//    return somat;
//}

//calculo da derivada progressiva



double derivPROG( double x, double h)

{
    return (funcaopadrao(x+h) - funcaopadrao(x))/(h);

}



double derivREG( double x, double h)

{
    return (funcaopadrao(x) - funcaopadrao(x-h))/(h);

}



double derivCEN( double x, double h)

{
    return (funcaopadrao1(x+h) - funcaopadrao1(x-h))/(2*h);

}

double derivPARC( Matriz X0, int i, double h)

{
    int dim = X0.dim('c');      //encontra a dimensao do problema


    Matriz H(1,dim), X0H(1,dim);


    H.entrada(0,i,h); // faz a i esima entrada de H vaer h, o resto e 0

//    cout << "\n\n";
//    H.imprime();


    SOMA(X0, H, X0H);    //faz a soma de X0 e h e armazena em X0H

    double fh, f;

    fh= funcaopadrao(X0H);

    f= funcaopadrao(X0);

    return(fh-f)/h;


}

//resolve um sistema triangular superior
void TriangSup (Matriz A, Matriz B, Matriz &X)
{
    // Verificar se A é quadrada
    //Verificar se as dimensões de A e B são compatíveis
    //Verificar se as dimensões de B e X são compatíveis

    int i, j;
    int n=A.dim('c');
    double bn_nn, SOMAT, temp;

    bn_nn = B.saida(0,n-1)/A.saida(n-1,n-1);
    X.entrada(0,n-1, bn_nn);

    // for que percorre as linhas de baixo para cima
    for(i=n-2;i>=0;i--)
    {
        //Resolve o somatório
        SOMAT=0;
        for(j=i+1;j<=n-1;j++)
        {
            SOMAT = SOMAT + A.saida(i,j)*X.saida(0,j);
        }
        temp = (B.saida(0,i) - SOMAT)/A.saida(i,i);
        X.entrada(0,i,temp);
    }

}



//realiza eliminaçao gaussiana
void EliminGauss (Matriz A, Matriz b, Matriz &AA, Matriz &bb)

{
    //verificar se a e quadrada
    //verificar se as dimensoes de A e b sao compativeis
    //verificar se as dimensoes de A e AA sao iguais
    //verificar se as dimensoes de b e bb sao iguais
   Copia(A, AA);
   Copia(b, bb);


   int i,j,k,n;
   double m, temp_AA, temp_bb;


   n = b.dim('c');



   for (k=0; k<=n-2; k++)
   {
       for (i=k+1; i<=n-1; i++)
       {
           m = AA.saida(i,k)/ AA.saida(k,k);
           AA.entrada(i,k,0);

           for(j=k+1; j<=n-1; j++)
           {
               temp_AA= AA.saida(i,j)- m*A.saida(k,j);
               AA.entrada(i,j, temp_AA);
               temp_bb= bb.saida(0,i)- m*b.saida(0,k);


           }


               bb.entrada(0,i, temp_bb);

       }


   }




}

void GaussSeidel(Matriz A, Matriz b, Matriz X0, Matriz &X, double tol, int maximo, int DBG_VIEW)
{
    //checar se o elemento da diagonal, em modulo, e o maior elemento de sua
    //checar consistencia do problema(a tem que ser quadrada)
    //checar se as dim de A,b , X0, e X sao compativeis
    int n = A.dim('c'), k, i, j, m;
    double somatorio , temp, MAXI;

    Matriz Xk(1,n), Xk1(1,n);
    // na primeira iteraçao o vetor xk e igual ao x0
    Copia(X0, Xk);
    //contador de iteraçoes
    for(k=0; k<maximo; k++)
    {
        for (i=0;i<n; i++)
        {
            //incognitas a serem calculadas

            somatorio = 0.0;
            for(j=0; j<n; j++)
            {

                if(j !=i)
                {
                    somatorio = somatorio + A.saida(i,j)*Xk.saida(0,j);
                }
            }
            Copia(Xk, Xk1);
            temp = (b.saida(0,i) - somatorio)/A.saida(i,i);
            Xk.entrada(0,i, temp);
        }

        if (DBG_VIEW==1)
        {
            Xk.imprime();
        }


 //criterio de parada
       MAXI = abs(Xk1.saida(0,0)- Xk.saida(0,0));
        for(m=1; m<n; m++)
        {
            if(abs(Xk1.saida(0,m)- Xk.saida(0,m))> MAXI)
            {
                MAXI = abs(Xk1.saida(0,m) - Xk.saida(0,m));
            }
        }
    }




        Copia(Xk1, X);
    if(k==maximo)
    {
        cout << "\n\nNao houve convergencia, Algoritimo GaussSidel";
    }
    Copia(Xk, X);

}

void EliminGaussPivotPARC( Matriz A, Matriz B, Matriz &AA, Matriz &BB, int DBG_VIEW)
{

    // Verifica se A é quadrada
    // Verifica se as dimensoes de A e B sao compativeis
    // Verifica se as dimensoes  de A e  AA sao iguais
    // Verifica se as diumensoes de BB e B sao iguais
    if((A.dim('c')!= A.dim('l')) || (A.dim('c')!= B.dim('c')) || (A.dim('c')!= AA.dim('c')) || (B.dim('c')!= BB.dim('c')) || (A.dim('l')!= AA.dim('l') || (B.dim('l')!= BB.dim('l'))))
    {
        cout << "Erro de dimensao das matrizes. Funcao EliminGaussPivotParc. Abortando...";
        abort();
    }

    int i,j,k,n,z,y;
    double m,temp_AA, temp_bb, pivo, dt;


    Copia(A,AA);
    Copia(B,BB);

    n=B.dim('c');
    Matriz VT (1,n);
    for(k=0;k<=n-2;k++)
    {

        pivo = AA.saida(k,k); // Valor do pivô padrão

        for(z=k+1;z<=n-1;z++) //
        {

            // Decorre a matriz
            if(abs(pivo) < abs(AA.saida(z,k)))
            {
                pivo = AA.saida(z,k); // Pivo novo escolhido
                for(y=0; y<=n-1;y++)
                {
                    VT.entrada(0,y,AA.saida(z,y)); // Vetor temporario contendo a linha do pivo copiada
                }

                dt = BB.saida(0,z); // Valor temporario de B na posição z copiado

                for(y=0; y<=n-1;y++)
                {
                        // Inserir a linha inicial na linha do futuro pivô
                    AA.entrada(z,y,AA.saida(k,y));
                }
                        // Inserir o valor de BB (posição z) na posição k
                BB.entrada(0,z,BB.saida(0,k));

                    for (y=0;y<=n-1;y++)
                    {
                        // Retorna o backup da linha z na linha k
                        AA.entrada(k,y,VT.saida(0,y));
                    }
                    // Retorna o valor do coeficiente de z em k
                BB.entrada(0,k,dt);
                if(DBG_VIEW ==1)
                {
                    cout << "\n";
                    AA.imprime();
                    cout << "\n";
                    BB.imprime();
                    cout << "\n";
                    cout << "" << pivo;
                    cout << "\n\n";

                }
            }
        }


         for(i=k+1;i<=n-1;i++)
         {
             m= AA.saida(i,k)/ AA.saida(k,k);
             AA.entrada(i,k,0);
              for(j=k+1;j<=n-1;j++)
              {
                  temp_AA=AA.saida(i,j)- m*AA.saida(k,j);
                  AA.entrada(i,j, temp_AA);

                  temp_bb=BB.saida(0,i)- m*BB.saida(0,k);

              }
              BB.entrada(0,i,temp_bb);
         }
    }
}




void Jacobi ( Matriz A, Matriz b, Matriz X0, Matriz &X, double tol, int maximo)
{

    //checar se o elemento da diagonal, em modulo, e o maior elemento de sua
    //checar consistencia do problema(a tem que ser quadrada)
    //checar se as dim de A,b , X0, e X sao compativeis
    int n = A.dim('c'), k, i, j, m;
    double somatorio , temp, MAXI;

    Matriz Xk(1,n), Xk1(1,n);
    // na primeira iteraçao o vetor xk e igual ao x0
    Copia(X0, Xk);
    //contador de iteraçoes
    for(k=0; k<maximo; k++)
    {
        for (i=0;i<n; i++)
        {
        //incognitas a serem calculadas
        somatorio = 0.0;

        for(j=0; j<n; j++)
        {
            if ( j != i)
            {
                somatorio = somatorio + A.saida(i,j)*Xk.saida(0,j);
            }
        }

        temp = (b.saida(0,i) - somatorio)/A.saida(i,i);
        Xk1.entrada(0,i, temp);
        }
        //criterio de parada


        MAXI = abs(Xk1.saida(0,0)- Xk.saida(0,0));
        for(m=1; m<n; m++)
        {
            if(abs(Xk1.saida(0,m)- Xk.saida(0,m))> MAXI)
            {
                MAXI = abs(Xk1.saida(0,m) - Xk.saida(0,m));
            }
        }
        //se o maior dos erros for menor que a tolerancia parar o loop de iteraçoes
        if( MAXI < tol)
        {

            break;
        }




        Copia(Xk1, Xk);


    }
    if(k==maximo)
    {
        cout << "\n\nNao houve convergencia, Algoritimo Jacobi";
    }

    Copia(Xk1, X);




}


//Realiza eliminação gaussiana com pivoteamento
void EliminGaussPivo(Matriz A, Matriz b, Matriz  &X, Matriz &AA, Matriz &bb, int DBG_VIEW)
{
    //Verificar se A é quadrada
    //Verificar se as dimenses de A e b são compatveis
    //Verificar se as dimensoes de A e AA são iguais
    //Verificar se as dimensoes de b e bb são iguais

    int LA,CA,LAA,CAA,Lb,Cb,Lbb,Cbb,LX,CX;

    LA = A.dim('l');
    CA = A.dim('c');

    Lb = b.dim('l');
    Cb = b.dim('c');

    LX = X.dim('l');
    CX = X.dim('c');

    LAA = AA.dim('l');
    CAA = AA.dim('c');

    Lbb = bb.dim('l');
    Cbb = bb.dim('c');


    if(LA!=CA)
    {
        cout << "\nA matriz A nao e quadrada. Funcao EliminGaussPivo abortando...";
        abort();
    }

    if(CA!=Cb)
    {
        cout << "\nA matriz A e o vetor b nao possuem dimensoes iguais. Funcao EliminGaussPivo abortando...";
        abort();
    }

    if(CA!=CAA||LA!=LAA)
    {
        cout << "\nAs matrizes A e AA nao possuem dimensoes iguais. Funcao EliminGaussPivo abortando...";
        abort();
    }

    if(Cb!=Cbb)
    {
        cout << "\nOs vetores b e bb nao possuem dimensoes iguais. Funcao EliminGaussPivo abortando...";
        abort();
    }

    if(Cb!=CX)
    {
        cout << "\nOs vetores b e X possuem dimensoes diferentes. Funcao EliminGaussPivo abortando...";
        abort();
    }


    Copia(A,AA);
    Copia(b,bb);

    int a, dimA, i, j, k, n, m;
    double w, vb, temp_AA, temp_bb;

    //n é a dimensão do problema
    n = b.dim('c');

    Matriz linhapivo(1,n), linhasubst(1,n);


    //percorre as linhas da matriz
    for(k=0;k<=n-2;k++)
    {
        //atribui o valor da primeira linha como pivo
        w = AA.saida(k,k);

        //percorre as colunas da matriz
        for(j=k+1;j<=n-1;j++)
        {
            //compara os valores das linhas para ver qual é o maior
            if(abs(AA.saida(j,k))>abs(w))
            {
                //se o valor de AA.saida na posiçao (j,k) > que o pivo, assume esse valor como novo pivo
                w = AA.saida(j,k);

                //copia a linha pivo pra um vetor temporario
                for(a=0;a<=n-1;a++)
                {
                    linhapivo.entrada(0,a,AA.saida(j,a));
                }

                //copia o valor do vetor b na posição k (linha pivo) para uma variavel temporaria
                vb = bb.saida(0,j);

                //copia a linha a ser substituida pra posicao da linha pivo
                for(a=0;a<=n-1;a++)
                {
                    AA.entrada(j,a,AA.saida(k,a));
                }

                //insere a linha pivo na matriz na posiçao da primeira
                for(a=0;a<=n-1;a++)
                {
                    AA.entrada(k,a,linhapivo.saida(0,a));
                }

                //insere o valor do pivo do vetor b na primeira posiçao
                for(a=0;a<=n-1;a++)
                {
                    bb.entrada(0,j,bb.saida(0,k));
                }

                //insere o valor da variavel temporaria no vetor b
                for(a=0;a<=n-1;a++)
                {
                    bb.entrada(0,k,vb);
                }

            }

        }

    }


    cout << "\naqui\n";
    AA.imprime();
    cout << "\n";

    //escalonamento:

    for(k=0;k<=n-2;k++)
    {
        for (i=k+1;i<=n-1;i++)
        {
            m = AA.saida(i,k)/AA.saida(k,k);
            AA.entrada(i,k,0);

            for(j=k+1;j<=n-1;j++)
            {
                //Aij - mAij
                temp_AA = AA.saida(i,j) - m*AA.saida(k,j);
                AA.entrada(i,j,temp_AA);

                //bi - mbk
                temp_bb = bb.saida(0,i) - m*bb.saida(0,k);

            }

            bb.entrada(0,i,temp_bb);

            if(DBG_VIEW==1)
            {
                cout << "\n\n";
                cout << "\nMatriz que esta sendo escalonada\n";
                AA.imprime();
            }

        }
    }


//    //imprime as matrizes
//    cout <<"\n";
//    AA.imprime();
//    cout << "\n";
//    bb.imprime();


    //resolucao do sitema AX=b
    double bn_ann, SOMAT, temp;

    n=b.dim('c');

    bn_ann = b.saida(0,n-1)/A.saida(n-1,n-1);

    X.entrada(0,n-1,bn_ann);

    //For que percorre as linhas de baixo para cima
    for (i=n-2 ; i>=0 ; i--);
    {
        //For que resolve o somatorio
        SOMAT = 0;
        for (j=i+1;j<=n-1;j++);
        {
            SOMAT = SOMAT + (A.saida(i,j)*X.saida(0,j));
        }

        temp = (b.saida(0,i) - SOMAT)/A.saida(i,i);

        X.entrada(0,i,temp);

    }

}



void SOR(Matriz A, Matriz b, Matriz X0, Matriz &X, double w, double tol, int maximo, int DBG_VIEW)
{
    //checar se o elemento da diagonal, em modulo, e o maior elemento de sua
    //checar consistencia do problema(a tem que ser quadrada)
    //checar se as dim de A,b , X0, e X sao compativeis
    int n = A.dim('c'), k, i, j, m;
    double somatorio1, somatorio2, temp, MAXI;
    Matriz Xk(1,n), Xk1(1,n);
    // na primeira iteraçao o vetor xk e igual ao x0
    Copia(X0,Xk);
    Copia(X,Xk1); // Como Xk1 deve ser {0,0,0,...0} e o X esta sendo inciado com {0,0,0,...0}
    //Percorre linhas e colunas das matrizes para checar a dominancia diagonal
    for (i=0;i<A.dim('l');i++)
    {
        for (j=0;j<A.dim('l');j++)
        {
            if(abs(A.saida(i,i))<abs(A.saida(i,j))) //verifica a dominancia diagonal
            {
                cout << "As matrizes nao possuem dominancia diagonal.(SOR) Abortando...";
                abort();
            }
        }
    }

    if (w>2 || w<0) // Os valores ideais de w será 0 < w < 2
    {
        cout << "Valor invalido para w. SOR. Abortando...";
        abort();
    }
    //Loop de iteraçoes

    for (k=0;k<=maximo;k++)
    {
//
        // Loop para do somatorio
        for (i=0;i<n;i++)
        {
            somatorio1 = 0;
            somatorio2 = 0;
            for (j=0;j<=i-1;j++)
            {
                somatorio1=somatorio1+A.saida(i,j)*Xk1.saida(0,j);
            }

            for(j=i+1;j<=n-1;j++)
            {
                somatorio2=somatorio2+A.saida(i,j)*Xk.saida(0,j);
            }


            temp = (1-w)*Xk.saida(0,i)+(w/A.saida(i,i))*(b.saida(0,i)-somatorio1-somatorio2);
            Xk1.entrada(0,i,temp);
        }
        if(DBG_VIEW == 1)
        {
            cout<< "\n Debug: resultado da interação: " << k + 1 << "\n";
            Xk1.imprime();
        }


        //Criterio de parada
        MAXI = abs(Xk1.saida(0,0) - Xk.saida(0,0)); // MAXI padr�o
        for (m=1 ; m<n ; m++)
        {
            if (abs(Xk1.saida(0,m) - Xk.saida(0,m)) < tol)
            {
                MAXI = abs(Xk1.saida(0,m) - Xk.saida(0,m));
            }
        }
        if(MAXI < tol) // parada do programada quando atinge a tolerancia
        {
            break;
        }
        Copia(Xk1,Xk);

        }
    if(k == maximo) // Aviso de de que o numero de interacoes nao foi suficiente.
    {
        cout << "Nao houve convergencia. SOR\n";
    }

    Copia(Xk,X);
}




//Metodo da bissecao

double Bissecao(double a, double b,int maximo,double tol,int DBG_VIEW)
{
    double _a = a;
    double _b = b;
    double c;
    int k;
    if(maximo < 0)
    {
        cout<< "Maximo deve ser maior que 0. funcao bissecao abortando...";
        abort();
    }
    if(tol < 0)
    {
        cout<< "Tolerancia deve ser maior que 0. funcao bissecao abortando...";
        abort();
    }
    for(k = 0; k<maximo; k++)
    {
        c = ((_a+_b)/2);

        if(funcaopadrao(_a) * funcaopadrao(_b) < 0)
        {
            _b = c;
        }else
        {
            _a = c;
        }

        if(abs(_b - _a) < tol )
        {
            return ((_a+_b)/2);
        }
        if(DBG_VIEW==1)
        {
            cout << "\n\n interacao numero "<< k+1 <<" : "<<c ;
        }
    }
    if( k == maximo) {
        cout << "Nao houve convergencia.";
    }

}

double Newton1D (double x0, int  maximo, double tol, int DBG_VIEW)
{
    int k;
    double xk, xk1;

    xk= x0;
    for(k=0;k<maximo;k++)
    {

        xk1 = xk - funcaopadrao1(xk)/derivCEN(xk);

        if(abs(funcaopadrao1(xk1)) < tol)
        {
            return xk1;
        }

        if(abs(xk-xk1) <tol)
        {
            return xk1;
        }

        if (DBG_VIEW==1)
        {
            cout << "\n\n\n" << setprecision(18) << xk1;
        }

        xk = xk1;

    }
    cout << " Nao convergiu. Newton1D";
}

double Secante (double x0, double x1, int  maximo, double tol, int DBG_VIEW)
{
    int k;
    double xka, xk, xkp;
    xka= x0;
    xk = x1;
    xkp = 0;
    for(k=0;k<maximo;k++)
    {
        xkp = (xka*funcaopadrao1(xk) - xk*funcaopadrao1(xka))/ ( funcaopadrao1(xk) - funcaopadrao1(xka) ) ;

        if(abs(xkp-xk) <tol)
        {
            return xkp;
        }

        if(abs(funcaopadrao1(xkp)) < tol)
        {
            return xkp;
        }


        xka = xk;
        xk = xkp;
        if(DBG_VIEW == 1)
        {
            cout << "\n\n" << xka;
        }


    }
    if(k = maximo)
    {
        cout << " Nao convergiu. Secante";
    }


}

void GradienteVet( Matriz &X, int indice, Matriz &OUT, double h)
{
    if(X.dim('c') != OUT.dim('c'))
    {
        cout << "Erro matriz GradientVet Abortando...";
        abort();
    }
    if(X.dim('l') != OUT.dim('l'))
    {
        cout << "Erro matriz GradientVet Abortando...";
        abort();
    }
//    if(X.dim('l') == i)
//    {
//        cout << "Erro matriz GradientVet Abortando...";
//        abort();
//    }
    double temp;
    int n = X.dim('c'), i, j;
    Matriz H(1,n), XnH(1, n), TEMPmh(1,n), TEMP(1,n);

    for(i=0;i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            H.entrada(0,j, 0.0);
        }
        H.entrada(0, i, h);

        SOMA(X,H, XnH);

        funcaopadrao4(XnH, TEMPmh);
        funcaopadrao4(X, TEMP);

        temp = (TEMPmh.saida(0,indice-1) - TEMP.saida(0,indice-1)) /h;
        OUT.entrada(0,i, temp);
    }


}



// Transposição de Matriz


// ========================================================================================
// A TUA PROGRAMAÇÃO DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMAÇÃO
// .
// .
// .
// .
// .void funcaopadrao(Matriz &X, Matriz &OUT)

// Função de teste. mantenha essa função no fim do arquivo. Não a apague.
// apenas programa acima dela.
//void TesteDeFuncaoComCabecalho (void)https://github.com/heraldo663/calcnum.git
//{
//    // o protótipo da função foi declarada no arquivo .h (header)
//    // nesse arquivo (.cpp) é onde iremos realizar a programação do que
//    // queremos que a função faça. Nessa função de teste, ela irá apenas
//    // imprimir um pequeno texto na tela.
//
//    cout << "Esta e uma funcao de teste." << endl;
//}

