#include <bits/stdc++.h>
using namespace std;

void sol(long long a, long long b, long long &x, long long &y, long long &d){

    if(b == 0){
        d = a;
        x = 1;
        y = 0;
    }
    else{
        sol(b, a%b, y, x, d);
        y -= x * (a/b);
    }

}

int main(){

    long long a, b, x, y, d;

    while(cin >> a >> b){

        sol(a, b, x, y, d);
        cout << x << " " << y << " " << d << endl;
    }

    return 0;
}