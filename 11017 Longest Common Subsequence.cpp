#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    while(cin >> s1 >> s2){

        vector<char> v1(s1.begin(), s1.end());
        vector<char> v2(s2.begin(), s2.end());
        vector<vector<int>> dp(v1.size()+1, vector<int>(v2.size()+1, 0));

        for(int i = 1; i <= v1.size(); i++){
            for(int j = 1; j <=v2.size(); j++){
                if(v1[i-1] == v2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        cout << dp[v1.size()][v2.size()] << endl;

    }

    return 0;
}