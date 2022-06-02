#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 0;
    int m = 0;

    while(cin >> n >> m){

        vector<int> v;
        int temp = 0;
        for(int i = 0; i < m; i++){
            cin >> temp;
            v.push_back(temp);
        }
            

        vector<bool> dp(n+1, false);
        
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < m; j++){
                if(i >= v[j] and dp[i-v[j]] == 0){
                    dp[i] = true;
                    break;
                }
            }
        }

        if(dp[n])
            cout << "Stan wins" << endl;
        else
            cout << "Ollie wins" << endl;
    }

    return 0;
}