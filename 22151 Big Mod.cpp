#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long b, long long p, long long m){

    if(p == 0)
        return 1;
    
    else if(p == 1)
        return b%m;

    else{

        long long result = bigmod(b, p/2, m);

        if(p%2 == 0)
            return (result*result)%m;
        else
            return (result*result*b)%m;
    }
}

int main(){

    long long b, p, m;

    while(scanf("%lld %lld %lld", &b, &p, &m) != EOF){

        long long ans = bigmod(b, p, m);
        cout << ans << endl;

    }

    return 0;
}