#include <iostream>
#define N 100
using namespace std;

int n;
int tabla[N][N];
int i_start, j_start;
const int Ndirectii=8;
int miscare_i[Ndirectii] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int miscare_j[Ndirectii] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int i,j;

void citire_valori()
{
    cout<<"Introduceti dimensiunea tablei de sahhh: ";
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
    cout<<"Toate mutarile au fost efectuate. Tabla finala arata astfel: "<<endl;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<tabla[i][j]<<" ";
        }
        cout<<endl;
    }
  
}

bool verificare_pozitie (int i, int j)
{
   if (i < 0 || i >= n || j < 0 || j >= n || tabla[i][j] != 0)
        return false;
    return true;
}

bool mutarea_calului(int i, int j, int pas)
{
    if (pas == (n*n) + 1)
    {
        afisare_tabla();
        return true;
    }

    int i_next;
    int j_next;

    for (int d = 0; d < Ndirectii; d++)
    {
        i_next = i + miscare_i[d];
        j_next = j + miscare_j[d];

        if (verificare_pozitie(i_next,j_next))
        {
            tabla[i_next][j_next]=pas;
           
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

    if (!mutarea_calului(i_start,j_start,2))
     cout<<"Nu exista solutie pentru circuitul calului in aceste circumstante"<<endl;

    return 0;
}

