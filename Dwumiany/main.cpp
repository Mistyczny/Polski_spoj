#include <iostream>

using namespace std;

unsigned long long int liczenie_silni(int x)
{
    unsigned long long int silnia=1;
    for(int i=1;i<=x;i++)
    {
       silnia*=i;
    }
    return silnia;
}

unsigned long long int liczenie_reszty(int n,int k)
{
    unsigned long long int iloczyn=1;

    do
    {
        k++;
        iloczyn*=k;
    }
    while(n!=k);
return iloczyn;
}

int main()
{
    int licznik;
    cin>>licznik;

    while(licznik)
    {
        int n=0,k=0;
        unsigned long long int wynik=0;
        std::cin>>n>>k;
        if(k==0 or n==0)
        {
            std::cout<<'1'<<std::endl;
            licznik--;
            continue;
        }
        if(n-k>=k) std::cout<<liczenie_reszty(n,n-k)/liczenie_silni(k)<<std::endl;
        else  std::cout<<liczenie_reszty(n,k)/liczenie_silni(n-k)<<std::endl;

        licznik--;
    }
}
