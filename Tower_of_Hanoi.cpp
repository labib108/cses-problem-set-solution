
#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

void tower_of_hanoi(int n, int start, int finish, int middle){
    if(n == 0){
        return;
    }
    
    tower_of_hanoi(n-1,start, middle,finish);
    cout<<start<<" "<<finish<<endl;
    tower_of_hanoi(n-1,middle,finish,start);
}

int main() {
    int n;
    cin>>n;
    
    cout<<((1<<n)-1)<<endl;
    tower_of_hanoi(n,1,3,2);
   
    return 0;
}



