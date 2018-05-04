#include <iostream>

using namespace std;

int main()
{int n1,n2,k,c1,c2,d1=1,d2=1;
    cin>>n1>>n2>>k;
    c1=n1;
    c2=n2;
    while(c1)
    {
        d1=d1*10;
        c1=c1/10;
    }
    while(c2)
    {
        d2=d2*10;
        c2=c2/10;
    }
    for(int i=0;i<k;i++)
    {
        if(i%2==0)
        {
            n2=n2*10+n1/d1;
            n1=n1%d1;
            d1=d1/10;
            d2=d2*10;
        }
        else
        {
            n1=n1*10+n2/d2;
            n2=n2%d2;
            d2=d2/10;
            d1=d1*10;
        }
    }
    cout<<n1<<" "<<n2;
    return 0;
}
