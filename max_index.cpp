#include <bits/stdc++.h>
using namespace std;
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        int ans=INT_MIN;
        for(int j{n-1};j>0;j--){
            int i=0;
            while(j>i){
                if(a[j]>=a[i]){
                    ans=max(j-i,ans);
                    break;
                }
                i++;
            }
        }
        if(ans==INT_MIN){
            return 0;
        }
        return ans;
    }

int main(){
  return 0;
}
