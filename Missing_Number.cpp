
#include <iostream>
using namespace std;


int main() {
    long long int n,sum = 0, main_sum = 0;
    cin>>n;
    main_sum = (n * n + n ) / 2;
    int arr[n];
    for(int i = 0; i < n - 1; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<main_sum - sum<<endl;

    return 0;
}
