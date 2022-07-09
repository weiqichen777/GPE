#include <bits/stdc++.h>
using namespace std;

struct Node{

    int val;
    bool state;
    Node* next;

    Node(int x):
        val(x), state(false), next(nullptr){}
};

int check(int x, int m){

    Node* n = new Node(1);
    Node* s = n;
    for(int i = 2; i <= x; i++){
        Node* tmp = new Node(i);
        n->next = tmp;
        n = n->next;
    }
    n->next = s;

    while(x > 1){
        s->state = true;
        for(int i = 0; i < m; i++){
            s = s->next;
            while(s->state)
                s = s->next;
        }
        x--;
    }

    return s->val;

}

int main(){

    int x;
    while(cin >> x and x){

        int m = 1;
        while(check(x, m) != 13)
            m++;
        cout << m << endl;
    }

    return 0;
}