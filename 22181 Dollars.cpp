#include <bits/stdc++.h>
using namespace std;

int main(){

    float n = 0;
    int m = 0;
    int ans = 0;

    int max = 30005;
    //用前i個硬幣組成j元的方法數
    int dp[12][30005] = {0};
    int coin[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};


    while(cin >> n && n){

        for(int i = 0; i < 12; i++)
            dp[i][0] = 1;

        for(int j = 0; j < max; j++)
            dp[0][j] = 1;

        for(int i = 0; i < 12; i++){
            for(int j = 0; j < max; j++){

                if(i == 0 or j ==0)
                    continue;

                dp[i][j] = dp[i-1][j];
                if( j >= coin[i])
                    dp[i][j] += dp[i][j-coin[i]];
            }
        }

        m = n * 100;
        cout << dp[10][m] << endl;

        
    }

    return 0;
}