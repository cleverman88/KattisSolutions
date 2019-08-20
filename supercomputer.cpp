//https://open.kattis.com/problems/supercomputer

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

typedef  long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
using namespace std;
typedef vector<ll> VLL;
typedef vector<int> VI;

const ll inf = 1e9+7;

int sum(int a, int b,int n, vector<int> &tree) {
    a += n; b += n;
    int s = 0;
    while (a <= b) {
        if (a%2 == 1) s += tree[a++];
        if (b%2 == 0) s += tree[b--];
        a /= 2; b /= 2;
    }
    return s;
}

void add(int k, int x,int n, vector<int> &tree) {
    k += n;
    if(tree[k] == 1){
        tree[k] = 0;
    }
    else{
        tree[k] += x;
    }
    for (k /= 2; k >= 1; k /= 2) {
        tree[k] = tree[2*k]+tree[2*k+1];
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> arr (n);
    vector<int> tree(2*n,0);
    int queries;
    cin >> queries;
     for(int i = 0; i < queries; i++){
        char val;
        cin >> val;
        switch (val){
            case 'C':
                int start,ending;
                cin >> start >> ending;
                cout << sum(start,ending,n,tree) << "\n";
                break;
            case 'F':
                int var;
                cin >> var;
                add(var,1,n,tree);
            break;
        }

    }
    return 0;
}
