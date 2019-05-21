#include <iostream>

int rekurencja(int s,int n)
{
    if(s==1) return n;
    else if(s%2==1) rekurencja(3*s+1,n+1);
    else if(s%2==0) rekurencja(s/2,n+1);
}

int main()
{
    int licznik=0;
    std::cin>>licznik;
    while(licznik)
    {
        int liczba;
        std::cin>>liczba;
        std::cout<<rekurencja(liczba,0)<<std::endl;
        licznik--;
    }
}
