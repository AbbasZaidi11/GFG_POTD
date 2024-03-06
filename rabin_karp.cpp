#include <bits/stdc++.h>
using namespace std;
vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int>ans={};
            int n=text.size();
            int m=pattern.size();
            for(int i{0};i<=(n-m);i++){
                if(text[i]==pattern[0]){
                    string temp=text.substr(i,m);
                    if(temp==pattern){
                        ans.push_back(i+1);
                    }
                }
            }
            return ans;
        }

int main(){
  return 0;
}
