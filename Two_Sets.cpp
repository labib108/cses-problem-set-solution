
#include <iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
    
    long long int n;
    cin>>n;
    
    if(n%4==1 || n%4==2){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    vector<int>set1,set2;
    if(n%4==0){
        int left = 1,right = n;
        while(left<right){
            set1.push_back(left);
            set1.push_back(right);
            set2.push_back(left+1);
            set2.push_back(right-1);
            left +=2;
            right +=2;
        }
    }else if(n%4==3){
        set1.push_back(1);
        set1.push_back(2);
        set2.push_back(3);
        int left = 4,right = n;
        bool toggle = true;
        while(left<right){
            if(toggle){
                set1.push_back(left);
                set1.push_back(right);
            }else{
                set2.push_back(left);
                set2.push_back(right);
            }
            left++;
            right--;
            toggle = !toggle;
        }
        if(left == right){
            set1.push_back(left);
        }
    }
    
   
    
    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";
    cout << endl;

    // Print set2
    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";
    cout << endl;
    return 0;
}



