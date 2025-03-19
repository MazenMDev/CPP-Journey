#include <iostream>
#include <cmath>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int k = 0; K<n ; k++){
        int tot = 0;
        string des,word;
        unordered_map<char,int>pos;
        for(int i=0;i <26;i ++){
            pos[des[i]] = i;    
        }
        for(int i=1; i< word.length();i++){
            tot += abs(pos[word[i]] - pos[word[i-1]])
        }
        cout << tot << endl;
    }

}