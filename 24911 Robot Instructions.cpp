#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        
        int ans = 0;
        vector<int> v;
        v.push_back(0);
        int m, tmp;
        string s;
        cin >> m;
        while(m--){
            cin >> s;
            if(s == "RIGHT"){
                ans += 1;
                v.push_back(1);
            }
                
            else if(s == "LEFT"){
                ans -= 1;
                v.push_back(-1);
            }
                
            else{
                cin >> s >> tmp;
                ans += v[tmp];
                v.push_back(v[tmp]);
            }

        }

        cout << ans << endl;
    }

    return 0;
}