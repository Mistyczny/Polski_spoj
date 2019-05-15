#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

void printfloat(float liczba)
{
    for (int i = sizeof liczba-1; i>=0; --i)
    {
        printf("%x ",(((const unsigned char*)&liczba)[i]));
    }
    cout<<endl;
}

int main()
{
    int t;
    float x;
    cin >> t;
    while(t)
    {
        cin >> x;
        printfloat(x);
        t--;
    }
return 0;
}
