#include <iostream>
#include <map>

int main()
{
    int licznik=0;
    std::cin>>licznik;
    while(licznik)
    {
        int kroki=0;
        std::cin>>kroki;
        std::map<int,int> droga;
        droga[0]=0;
        droga[1]=0;
        droga[2]=0;
        droga[3]=0;
        while(kroki)
        {
            int kierunek;
            int step;
            std::cin>>kierunek>>step;
            droga[kierunek]+=step;
            kroki--;
        }
        if(droga[0]>droga[1]) std::cout<<"0"<<" "<<droga[0]-droga[1]<<std::endl;
        if(droga[0]<droga[1]) std::cout<<"1"<<" "<<droga[1]-droga[0]<<std::endl;
        if(droga[2]>droga[3]) std::cout<<"2"<<" "<<droga[2]-droga[3]<<std::endl;
        if(droga[2]<droga[3]) std::cout<<"3"<<" "<<droga[3]-droga[2]<<std::endl;
        if(droga[0]-droga[1]==0&&droga[2]-droga[3]==0) std::cout<<"studnia"<<std::endl;
        licznik--;
    }
}
