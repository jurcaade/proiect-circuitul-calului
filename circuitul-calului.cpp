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

    tabla[i_start][j_start] = 1;
}

void afisare_tabla()
{
    for (i=0;i<n;i++)
    {
        cout<<endl;
        for (j=0;j<n;j++)
        cout<<tabla[i][j]<<" ";
    }
}



