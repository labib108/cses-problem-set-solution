
#include <iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;


int main() {
    
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int x = a + b;
        
        if(x%3!=0 || a>2*b || b>2*a){
            cout<<"NO"<<endl;
        }else
            cout<<"YES"<<endl;
        
    }
    
    
    return 0;
}



