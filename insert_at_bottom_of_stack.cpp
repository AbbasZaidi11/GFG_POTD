#include <bits/stdc++.h>
using namespace std;
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>ans;
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
         ans.push(x);
          while(!ans.empty()){
            st.push(ans.top());
            ans.pop();
        }
        return st;
    }

int main(){
return 0;
}
