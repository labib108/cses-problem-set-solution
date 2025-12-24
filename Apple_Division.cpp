
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void apple_division(vector<ll>&weights, ll &answer,ll index, ll g1, ll g2 ){
    if(index == weights.size()){
        answer = min(answer,abs(g1-g2));
        return;
    }
    
    apple_division(weights,answer,index+1, g1+weights[index],g2);
    apple_division(weights,answer,index+1, g1,g2+weights[index]);
}

int main() {
    int n;
    cin>>n;
    vector<ll>apples(n);
    for(int i = 0; i < n; i++){
        cin>>apples[i];
    }
    
    ll answer = 1e18;
    int start = 0;
    apple_division(apples,answer,start,0,0);
    cout<<answer<<endl;
    return 0;
}



