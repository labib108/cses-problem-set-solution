
#include <iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;


int main() {
    
    long long int n;
    cin>>n;
    long long zeros = 0;
    long long power = 5;
    while(n/power > 0){
        zeros += n/power;
        power *=5;
    }
    cout<<zeros<<endl;
    
    return 0;
}



