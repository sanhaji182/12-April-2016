#include <iostream>

using namespace std;

int main()
{
    int i,n,x,total;
    cout <<"Masukan jumlah angka = ";
    cin>>n;
    total=0;
    for
        (i=1;i<=n;i++)
    {
        cout<<"Masukan angka "<<i<<" = ";
        cin>>x;
        total=total+x;
    }
    cout << "Total Angka = "<<total<< endl;
    return 0;
}
