#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main(){

    int n = 0;
    cin >> n;

    string one;
    string two;

    int ret;

    for(int i = 1; i <= n; i++){

        cin >> one >> two;

        ret = __gcd(stoi(one, nullptr, 2), stoi(two, nullptr, 2));

        if(ret != 1)
            printf("Pair #%d: All you need is love!\n", i);
        else
            printf("Pair #%d: Love is not all you need!\n", i);
    }


    return 0;
}