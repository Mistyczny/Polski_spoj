#include <iostream>
#include <vector>

int main()
{
    std::vector<char> stos;
    std::vector<std::string> wyniki;
    char znak;
    char liczba;

    while(std::cin>>znak)
    {
        if(znak='+')
        {
            std::cin>>liczba;
            if(stos.size()<10)
            {
                wyniki.push_back(":)");
                stos.push_back(liczba);
            }
            else
            {
                wyniki.push_back(":(");
            }
        }
        else if(znak='-')
        {
            if(stos.size()>0)
            {
                wyniki.push_back(stos.at(stos.size()-1));
                stos.erase(stos.size()-1);
            }
            else
            {
                wyniki.push_back(":(");
            }
        }
    }
}
