
#include <iostream>
#include<string>
using namespace std;


int main() {
    long long int n;
    cin>>n;
    if(n == 1)
    {
        cout<<n<<endl;
    }
    else if(n ==2 || n == 3)
    {
        cout<<"NO SOLUTION";
    }
    else{
        for(int i = 1; i<=n; i++)
        {
            if(i%2 == 0)
            {
                cout<<i<<" ";
            }
            else
                continue;
        }
        for(int i = 1; i<=n; i++)
        {
            if(i%2 != 0)
            {
                cout<<i<<" ";
            }
            else
                continue;
        }
    }
}
