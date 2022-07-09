#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    int n;
    while(cin >> n){

        vector<int> v;
        v.push_back(1);

        for(int x = 1; x <= n; x++){
            int carry = 0;
            for(int i = 0; i < v.size(); i++){
                v[i] = v[i] * x + carry;
                carry = v[i] / 10;
                v[i] %= 10;

                if(carry > 0 and i+1 == v.size())
                    v.push_back(0);
            }
        }

        int ans = 0;
        for(int i = 0; i < v.size(); i++)
            ans += v[i];

        cout << ans << endl;

    }


    return 0;
}