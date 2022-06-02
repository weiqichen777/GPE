#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    int f[1000];
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <= 1000; i++){
        f[i] = f[i-1] * i;
    }

    int n = 0, ans = 0;
    string original;
    while(cin >> n){
        original = to_string(f[n]);
        
        ans = 0;
        for(int i = 0; i < original.size(); i++)
          ans += original[i]-'0';
        cout << ans << endl;
    }
    return 0;
}