
#include <iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

const long long MOD = 1e9+7;
int main() {
    
    long long int n;
    cin>>n;
    
    long long int value = 1;
    for(int i = 0; i< n; i++){
        value = (value*2)%MOD;
    }
    cout<<value<<endl;
    
    return 0;
}



