
#include <iostream>
#include<string>
using namespace std;


int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int x,y,z,p;
        cin>>y>>x;
        //y=2,x=4
        z = max(x,y);
        //z=x=4
        if(z%2 == 0){
            if(z == y)//z=4
                p = z*z-(x-1);
            else //z=4
                p = (z-1)*(z-1)+y;
        }
        else{
            if(z == y) //z=3
                p = (z-1)*(z-1) + x;
            else //z=5
                p = z*z-(y-1);
        }
        cout<<p<<endl;
    }
    return 0;
}



