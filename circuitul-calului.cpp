#include <iostream>
#define N 10
using namespace std;

int n;
int tabla[N][N];
int i_start, j_start;
int miscare_i[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int miscare_j[] = { 1, 2, 2, 1, -1, -2, -2, 1 };
int i,j;

void citire_valori()
{
    cout<<"Introduceti dimensiunea tablei de sah: ";
    cin>>n;
    cout<<"Introduceti pozitia de start pentru i: ";
    cin>>i_start;
    cout<<"Introduceti pozitia de start pentru j: ";
    cin>>j_start;

    //verificam daca pozitia de start este valida
    if ( i_start < 0 || i_start >= n || j_start < 0 || j_start >= n)
    {
        cout<<"Coordonatele de start nu sunt valide"<<endl;
        exit(1);
    }
    //initializam tabla
    for( i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        tabla[i][j]=0;
    }

    tabla[i_start][j_start] = 1;
}

void afisare_tabla()
{
    cout<<"Toate mutarile au fost efectuate. Tabla finala arata astfel: ";
    for (i=0;i<n;i++)
    {
        cout<<endl;
        for (j=0;j<n;j++)
            cout<<tabla[i][j]<<" ";
    }
    cout<<endl;
}

int main()
{
    citire_valori();
    afisare_tabla();
}

