//https://open.kattis.com/problems/backspace

#include <iostream>
#include <bitset>
#include <set>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>


using namespace std;

int main(){
    //freopen("C:\\Users\\sohai\\Desktop\\input.txt", "r", stdin);
    string str;
    cin >> str;
    stack<char> characters;

    for(auto x : str){
        if(x == '<'){
            characters.pop();
        }
        if(x != '<'){
            characters.push(x);
        }
    }
    stack<char> news;

        while (!characters.empty()){
            news.push(characters.top());
            characters.pop();
        }

        while (!news.empty()){
            cout << news.top();
            news.pop();
        }

        return 0;
    }



