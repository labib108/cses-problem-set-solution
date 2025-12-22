
#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cmath>
using namespace std;


int main() {
    
   string s;
   cin>>s;
   int count = 0;
   map<char,int> freq;
   for(auto i:s){
       freq[i]++; //count how many time character 9 appears.
   }
   for(auto i:freq){
       if(i.second%2 == 1){
           count++;
           if(count>1){
               cout<<"NO SOLUTION"<<endl;
               return 0;
           }
       }
   }
   vector<char>left;
   vector<char>middle;
   
   for(auto i:freq){
       
       for(int k = 0; k < i.second/2; k++){
           left.push_back(i.first);
       }
       if(i.second % 2 == 1){
           middle.push_back(i.first);
       }
      
   }
   vector<char>right = left;
   reverse(right.begin(), right.end());
   
   for(char c:left) cout<<c;
   for(char c:middle) cout<<c;
   for(char c:right) cout<<c;
   cout<<endl;
   
    
    return 0;
}



