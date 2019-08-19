//https://open.kattis.com/problems/beekeeper

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N = -1;
    char VOWLES[6] = {'a','e','i','o','u','y'};
    //freopen("C://Users//sohai//Desktop//input.txt", "r", stdin);
    while(N != 0) {
        cin >> N;
        string val;
        int best = 0;
        for(int i = 0 ; i < N; i++){
            string word;
            cin >> word;
            int counter = 0;
            if(N == 1 || word.size() == 1){
                counter = 1;
            }
            else{
                for(int i = 0; i < word.size()-1; i++){
                    for(auto x : VOWLES){
                        if(word[i] == x && word[i+1] == x){
                            counter++;
                        }
                    }
                }
            }
       if(best < counter){
            best = counter;
            val = word;
        }

        }
        cout << val << endl;
    }

}
