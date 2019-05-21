#include <iostream>
#include <vector>

int main()
{
    int liczba;
    std::vector<int> wektor;
    while(std::cin>>liczba)
    {
        wektor.push_back(liczba);
    }
    for(int i=wektor.size()-1;i>=0;i--)
    {
        std::cout<<wektor[i]<<" ";
    }
}
