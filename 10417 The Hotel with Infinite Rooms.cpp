#include <bits/stdc++.h>

using namespace std;

int main(){

    long long s, d;
    
    while(cin >> s >> d){

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