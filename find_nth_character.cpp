#include <bits/stdc++.h>
using namespace std;
    char nthCharacter(string s, int r, int n) {
        //code here
    
        for(int i{0};i<r;i++){
            string final="";
            for(int j{0};j<=n ;j++){
                if(s[j]=='1'){
                    final=final+"10";
                }
                else{
                    final=final+"01";
                }
            }
            s=final;
        }
        
        return s[n];
    }

int main(){
  return 0;
}
