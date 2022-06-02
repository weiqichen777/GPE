#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    /*
    int lastone = 0;
    int lasttwo = 0;
    long long ans = 0;
    int sum = 0;

    cout << "f(0) = 0, sum(0) = 0"<< endl;  
    
    for(int i = 1; i < 41; i++){
        
        lastone = i % 10;
        lasttwo = i % 100;

        ans = pow(lastone, lasttwo);
        ans = ans % 10;

        sum += ans;
        sum = sum % 10;

        printf("f(%d) = %lld, sum(%d) = %d\n", i, ans, i, sum);
    }
    */

    int map[20] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7,
                    7, 8, 4, 7, 3, 8, 4, 1, 5, 4};

    int n = 0;
    int lastone = 0;
    int lasttwo = 0;
    while(cin >> n and n){

        lastone = n % 10;
        lasttwo = n % 100;

        cout << (map[lasttwo%20] + 4*(lasttwo/20))%10 << endl;
    }

    return 0;
}