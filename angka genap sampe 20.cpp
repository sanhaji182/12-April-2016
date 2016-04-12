#include <iostream>
using namespace std;
int main()
{
    int a;
    for (a=0;a<=20;a=a+2)
    {
        cout<<a;
        if (a!=20)
        {
            cout<<",";
        }
    }
}
