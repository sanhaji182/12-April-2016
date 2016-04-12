#include <iostream>

using namespace std;

int main()
{
    int a;
    for (a=1;a<=10;a++)
    {
        cout <<a;
        if (a!=10)
        {cout<<",";}
    }
    cout<<endl;
    for (a=10;a>=1;a--)
    {
        cout<<a;
        if (a!=1)
        {cout<<",";}
    }
    return 0;
}
