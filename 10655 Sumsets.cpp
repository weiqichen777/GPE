#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    while(cin >> n and n){

        vector<int> v(n, 0);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int ans = INT_MIN;
        int sum = 0;
        bool flag = false;
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                for(int k = j+1; k < n; k++){
                    sum = v[i] + v[j] + v[k];
                    if(find(v.begin(), v.end(), sum) != v.end()){
                        ans = max(ans, sum);
                        flag = true;
                    }
                }
            
        if(flag)
            cout << ans << endl;
        else
            cout << "no solution" << endl;
        

    }

    return 0;
}