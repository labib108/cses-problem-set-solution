
#include <iostream>
#include<string>
using namespace std;


int main() {
    int k;
    cin>>k;
    for(int i = 1; i <= k; i++){
       long long n; 
        n = (i*i*i*i - 9*i*i + 24*i -16)/2;
        cout<<n<<endl;
    }
    
    return 0;
}



