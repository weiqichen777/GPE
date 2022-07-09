#include <bits/stdc++.h>
using namespace std;

void sol(long long n){

    if(n >= 10000000){
        sol(n/10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if(n >= 100000){
        sol(n/100000);
        cout << " lakh";
        n %= 100000;
    }
    if(n >= 1000){
        sol(n/1000);
        cout << " hajar";
        n %= 1000;
    }
    if(n >= 100){
        sol(n/100);
        cout << " shata";
        n %= 100;
    }
    if(n > 0){
        cout << " " << n;
    }

}

int main(){

    long long n;
    int c = 1;
    while(cin >> n){

        cout << setw(4) << c << "." << setw(1);
        c++;
        sol(n);
        if(n == 0)
            cout << " " << n;
        cout << endl;
    }

    return 0;
}