
#include <iostream>
#include<string>
using namespace std;


int main() {
    int current = 1, maximum = 1;
    string x;
    cin>>x;
    for(int i = 1; i < x.size(); i++){
        if(x[i] == x[i-1])
        {
            current++;
        }
        else{
            current = 1;
        }
        maximum = max(current,maximum);
    }
    cout<<maximum<<endl;
    
}
