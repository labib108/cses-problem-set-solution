
#include <iostream>
#include<string>
using namespace std;


int main() {
    long long int n, x = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 1; i < n; i++){
        if(arr[i]<arr[i-1]){
            x += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
        else
            continue;
    }
    cout<<x<<endl;
    
}
