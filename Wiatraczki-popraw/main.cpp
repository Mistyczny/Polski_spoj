#include <iostream>

void narysuj_macierz(char** tab,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            std::cout<<tab[i][j];
        }
        std::cout<<std::endl;
    }
}

void uzupelnij_poziom(char** tab,int poziom,int rozmiar)
{
    for(int i=0;i<)
}

int main()
{
    int rzad=0;
    while(std::cin>>rzad)
    {
        if(rzad==0) break;
        char** tab = new char*[2*rzad];
        for(int i=0;i<2*rzad;i++)
        {
            tab[i] = new char[2*rzad];
        }

        for(int i=0;i<2*rzad;i++)
        {
            for(int j=0;j<2*rzad;j++)
            {
                if(i==rzad && j==rzad) tab[i][j]='*';
                else if(i==rzad && j==rzad-1) tab[i][j]='*';
                else if(i==rzad-1&&j==rzad) tab[i][j]='*';
                else if(i==rzad-1&&j==rzad-1) tab[i][j]='*';
                else tab[i][j]='?';
            }
        }
        tab[0][0]='*';
        tab[2*rzad-1][0]='*';
        tab[0][2*rzad-1]='*';
        tab[2*rzad-1][2*rzad-1]='*';

        for(int i=0;i<rzad*2;i++)
        {
            for(int )
        }

        narysuj_macierz(tab,2*rzad);
    }
}
