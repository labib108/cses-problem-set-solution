
#include <iostream>
#include<string>
using namespace std;


int main() {
    int k;
    cin>>k;
    for(int i = 1; i <= k; i++){
       long long int a,b,c,n;
       a = (i*i);
       b = (i*i)-1;
       c = (i-1)*(i-2);
       n = (a*b)/2 - 4*c;
       cout<<n<<endl;
    }
    
    return 0;
}



