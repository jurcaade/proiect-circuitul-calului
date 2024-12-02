#include <iostream>
#define N 10
#define Ndirectii 8
using namespace std;

int n;
int tabla[N][N];
int i_start, j_start;
int miscare_i[Ndirectii] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int miscare_j[Ndirectii] = { 1, 2, 2, 1, -1, -2, -2, 1 };
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

bool verificare_pozitie (int x, int y)
{
    if ( x >= 0 && x < n && y >= 0 && y < n && tabla[x][y] == 0)
     return true;
    return false;   
}

bool mutarea_calului(int i, int j, int pas)
{
    if (pas == n*n)
     return true;

    int i_next;
    int j_next;

    for (int d=0; d<Ndirectii; d++)
    {
        i_next = i + miscare_i[d];
        j_next = j + miscare_j[d];

        if (verificare_pozitie(i_next,j_next))
        {
            tabla[i_next][j_next]=pas + 1;
           

            if (mutarea_calului(i_next,j_next,pas + 1))
                return true;

            tabla[i_next][j_next] = 0;
        }
    }
    return false;
}


int main()
{
    citire_valori();

    if (mutarea_calului(i_start,j_start,1))
     afisare_tabla();
    else
     cout<<"Nu exista solutie pentru circuitul calului in aceste circumstante"<<endl;
}

