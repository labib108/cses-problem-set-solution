
#include <bits/stdc++.h>
using namespace std;


vector<string>board(8);
bool col[8];
bool diagonal1[15];
bool diagonal2[15];
int path = 0;

void solve(int row){
    if(row == 8){
        path++;
        return;
    }
    
    for(int i=0; i<8; i++){
        if(board[row][i] == '*'){
            continue;
        }
        if(col[i] || diagonal1[row-i+7] || diagonal2[row+i]){
            continue;
        }
        col[i] = diagonal1[row-i+7]=diagonal2[row+i]=true;
        solve(row+1);
        col[i] = diagonal1[row-i+7] = diagonal2[row+i] = false;
    }
}
int main() {
    
    for(int i=0; i<8; i++){
        cin>>board[i];
    }
    solve(0);
    cout<<path<<endl;
    return 0;
}



