//https://open.kattis.com/problems/aprizenoonecanwin

#include <iostream>
#include <bitset>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first > j.first;
}
int main(){
    //freopen("C:\\Users\\sohai\\Desktop\\input.txt", "r", stdin);
    int N;
    cin >> N;
    int cost;
    cin >> cost;

    vector<int> vals(N);
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        vals[i] = num;
    }

    if(vals.size() == 1){
            cout << "1";
            return 0;
    }

    sort(vals.begin(), vals.end());

    if(vals.size() == 2){
        if(vals[0] <= cost && vals[1]+vals[0] > cost){
            cout << "1";
            return 0;
        }
    }

    for(int i = 0 ; i < N-1; i++){
        if(vals[i] + vals[i+1] > cost){
            cout << i+1;
            return 0;
        }
    }

    cout << N;

}
