#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){

    int raw = 0;
    while(cin >> raw && raw){

        vector<int> v(5, 0);
        map<string, int> m;
        int big = 0;

        while(raw--){

            for(int i = 0; i < v.size(); i++)
                cin >> v[i];

            sort(v.begin(), v.end());

            string s = "";
            for(int i = 0; i < v.size(); i++)
                s += to_string(v[i]);
            
            if(m.find(s) == m.end()){
                m.insert(make_pair(s, 1));
            }
            else{
                m[s] += 1;
            }

            big = max(big, m[s]);
        }

        int ans = 0;
        for(auto e: m){
            if(e.second == big)
                ans += big;
        }

        cout << ans << endl;


    }


    return 0;
}