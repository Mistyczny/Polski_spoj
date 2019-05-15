#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct punkt
{
    punkt(string a,int b,int c)
    {
        this->nazwa = a;
        this->x = b;
        this->y = c;
    }
    std::string nazwa;
    int x;
    int y;
    int odleglosc_od_0()
    {
        return  (x*x+y*y);
    }
    bool operator<(punkt& target)
    {
        return this->odleglosc_od_0()<=target.odleglosc_od_0();
    }
};
int main()
{
    int t;
    int n;
    cin>>t;

    while(t--)
    {
        std::vector<punkt> punkty;
        string nazwa;
        int x;
        int y;

        cin>>n;

        while(n--)
        {
            cin>>nazwa>>x>>y;
            punkt a(nazwa,x,y);
            punkty.push_back(a);
        }
        std::sort(punkty.begin(),punkty.end());
        for(int i=0;i<punkty.size();i++)
        {
            std::cout<<punkty[i].nazwa<<" "<<punkty[i].x<<" "<<punkty[i].y<<std::endl;
        }
        cout<<endl;
    }
}
