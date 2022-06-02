#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 0;
    while(cin >> n){

        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        vector<int> dp(n, 1);
        int big = 0;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(v[i] > v[j]){
                    dp[i] = max(dp[i], dp[j]+1);
                    
                }
                    
            }

            big = max(big, dp[i]);
        }

        cout << big << endl;
    }

    return 0;
}