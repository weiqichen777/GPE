#include <bits/stdc++.h>
using namespace std;

int main(){

    unsigned int n, l, u;
    while(cin >> n >> l >> u){

        unsigned int ans = 0;

        for(int i = 31; i >= 0; i--){

            if((1<<i) & n){
                if(ans + (1<<i) <= l)
                    ans += (1<<i);
            }
            else{
                if(ans + (1<<i) <= u)
                    ans += (1<<i);
            }
        }

        cout << ans << endl;
    }

    return 0;
}