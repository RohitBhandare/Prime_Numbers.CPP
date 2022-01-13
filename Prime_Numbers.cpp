#include <iostream>
using namespace std;
int main()
{
    int i,j=1,count=0;
    int n=1000;
    cout<<"Prime Numbers 1 to "<<n<<endl;
    for(i=2;i<n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<"\n"<<i;
            count++;
        }
    }
cout<<"\n\nTotal Prime Numbers between 1 to "<<n<<" : "<<count;
return 0;
}
