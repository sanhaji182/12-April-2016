#include <iostream>

using namespace std;

int main()
{
    char a;
    for (a='a';a<='k';a++)
    {
        cout <<a;
        if (a!=10)
        {cout<<",";}
    }
    cout<<endl;
    for (a='k';a>='a';a--)
    {
        cout<<a;
        if (a!=1)
        {cout<<",";}
    }
    return 0;
}
