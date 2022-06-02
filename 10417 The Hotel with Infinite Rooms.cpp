#include <bits/stdc++.h>

using namespace std;

int main(){

    int s = 0, d = 0;
    int ans = 0;
    while(cin >> s >> d){

        ans = 0;
        while(d){
            d -= s;
            s += 1;

            if(d <= 0)
                break;
        }

        cout << s-1 << endl;
    }

    return 0;
}