#include <iostream>
#include <vector>
int main()
{
    std::vector<int> odp;
    double A=0,B=0,C=0;
    while(std::cin>>A>>B>>C)
    {
        double delta = B*B - 4*A*C;
        if(delta>0) odp.push_back(2);
        else if(delta==0) odp.push_back(1);
        else odp.push_back(0);
    }
    for(int i=0;i<odp.size();i++)
    {
        std::cout<<odp[i]<<std::endl;
    }
}
