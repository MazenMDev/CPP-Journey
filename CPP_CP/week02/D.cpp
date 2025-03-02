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
        for(int k=0;k < s.length(); k++){
            if(!isVowel(s[k]) && isVowel(s[k+1])) //b + a
            {
                if(!isVowel(s[k-1] && !isVowel(s[k+2]))) // before b is d
                {
                    cout << s[k];
                }
                else{
                    cout << ".";
                    cout << s[k];
                }
            }
            if (!isVowel(s[k]) && !isVowel(s[k+1])) // d + b
            {
                if (!isVowel(s[k+2]))
                {
                    cout << s[k];
                }
                else{
                    cout << s[k];
                    cout << ".";
                }
            }
            
            if(isVowel(s[k]) && !isVowel(s[k-1]))
            {
                cout << s[k];
            }
        }
    }
}
