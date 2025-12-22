
#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cmath>
using namespace std;


int main() {
    
   int n;
   cin>>n;
   
   int total = 1 << n;
   
   for(int i = 0; i < 1<<n; i++){
       int gray = i^(i>>1);
       
       for(int bit = n-1; bit >=0; bit--){
           cout<<((gray>>bit)&1);
       }
       cout<<endl;
   }
   
    
    return 0;
}



