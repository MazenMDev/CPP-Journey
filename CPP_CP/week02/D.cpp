#include <iostream>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'o' || c == 'u' || c == 'e' || c == 'i';
}

int main(){
    int N;
    cin>>N;
    string s;
    for(int i=0; i<N; i++){
        cin>>s;
        for(int k=0; k<s.length; k++){
            if (isVowel(s[k]))    
            {
                cout << s[k];
            }
            if ((!isVowel(s[k]))&&(isVowel(k+1))&&(isVowel(s[k-1])))
            {
                cout << ".";
                cout << s[k];
            }
            else if ((!isVowel(s[k]))&&(!isVowel(s[k-1])))
            {
                cout << ".";
                cout << s[k];
            }
            else{
                cout << s[k];
            }
        }
    }
}
