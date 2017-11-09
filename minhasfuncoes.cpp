# include "minhasfuncoes.h"

// .
// .
// .
// .
// .
// A SUA PROGRAMAÇÃO DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMAÇÃO
// ========================================================================================

// R1 em R1
double funcaopadrao(double x)
{
    return ((x*x) -2 );
}

double funcaopadrao1(double x)
{
    return ((x*x*x*x*x)-13);
}
double funcaopadrao01(double x)
{
    return (x*x)+ 3*x;
}

// função Rn em R1
double funcaopadrao( Matriz &X )
{
   return 2*pow(X.saida(0,0), 2)*X.saida(0,1);
}

// funcao de Rn em Rn
void funcaopadrao3(Matriz &X, Matriz &OUT)
{
    double temp, x1, x2, x3;
    if(X.dim('c') != OUT.dim('c'))
    {
        cout << "Erro matriz funcaopadrao Abortando...";
        abort();
    }
    if(X.dim('l') != OUT.dim('l'))
    {
        cout << "Erro matriz funcaopadrao Abortando...";
        abort();
    }
    x1 = X.saida(0,0);
    x2 = X.saida(0,1);
    x3 = X.saida(0,2);

    temp = x1*x2*x3; // x1+x2-x3       x1*x2+x3
    OUT.entrada(0,0, temp);

    temp = x1+x2-x3;      // x1*x2+x3
    OUT.entrada(0,1, temp);

    temp = x1*x2+x3;
    OUT.entrada(0,2, temp);
}

void funcaopadrao4(Matriz &X, Matriz &OUT)
{
    double temp, x, y, z, w;
    if(X.dim('c') != OUT.dim('c'))
    {
        cout << "Erro matriz funcaopadrao Abortando...";
        abort();
    }
    if(X.dim('l') != OUT.dim('l'))
    {
        cout << "Erro matriz funcaopadrao Abortando...";
        abort();
    }
    x = X.saida(0,0);
    y = X.saida(0,1);
    z = X.saida(0,2);
    w = X.saida(0,3);

    temp = x*x; // x1+x2-x3       x1*x2+x3
    OUT.entrada(0,0, temp);

    temp = x+y*y-w;      // x1*x2+x3
    OUT.entrada(0,1, temp);

    temp = x*y*z;
    OUT.entrada(0,2, temp);

    temp = z+w*w;
    OUT.entrada(0,3, temp);
}


// Função de elevar a 2
double xquadrado (double x)
{
    return x*x;
}

double xcubo (double x)
{
    return x*x*x;
}


double parabol(Matriz X)
{
    return pow( X.saida(0,0) , 2) + pow(X.saida(0,1),2);
}


int fatorial (int n)
{
    //Fatorial de um número inteiro positivo
    if(n<0)
    {
      cout << "Numero negativo, funcao fatorial, abortando...";
      abort();
    }

    if(floor(n) != ceil(n))
    {
        cout << "Numero nao inteiro, funcao fatorial, abortando...";
        abort();

    }

    if(n==0)
    {
        return 1;
    }

    int k, temp=1;

    for(k=1; k<=n; k++)
    {
        temp = temp*k;

    }

    return temp;







}






// ========================================================================================
// A TUA PROGRAMAÇÃO DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMAÇÃO
// .
// .
// .
// .
// .
