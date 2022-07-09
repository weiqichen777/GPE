#include <bits/stdc++.h>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;

    map<string, int> mp;
    string s;
    int val;
    while(m--){
        cin >> s >> val;
        mp.insert(pair<string, int>(s, val));
    }

    while(n--){

        int ans = 0;
        while(cin >> s){

            if(s == ".")
                break;
            
            if(mp.find(s) != mp.end())
                ans += mp[s];
        }

        cout << ans << endl;
    }


    return 0;
}