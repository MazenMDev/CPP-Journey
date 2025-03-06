#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string con = "abcdefghijklmnopqrstuvwxyz";
    string conbig = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string word;
    string mem;
    for(int i=0; i<word.length();i++){
        for(int k=0; k<con.length(); k++){
            if (word[i] == con[k] || word[i] == conbig[k])
            {
                mem[i] = word[i];
            }
        }
    }

    for(int i=0; i<word.length();i++){
        for(int k=0; k<con.length(); k++){
            if (word[i] == con[k] || word[i] == conbig[k])
            {
                for(int l=0; l< ; l++){
                    if (mem[l] != word[i])
                    {
                        count++;
                    }
                    
                }
            }
        }
    }

}