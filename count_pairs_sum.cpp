#include <bits/stdc++.h>
using namespace std;
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    unordered_map<int,int>mpp;
	    int count=0;
	    for(int i{0};i<n;i++){
	        for(int j{0};j<n;j++){
	            mpp[mat1[i][j]]++;
	        }
	    }
	    for(int i{0};i<n;i++){
	        for(int j{0};j<n;j++){
	            int k=x-mat2[i][j];
	            if(k<0){
	                break ;
	            }
	            if(mpp[k]!=0){
	                count=count+mpp[k];
	            }
	        }
	    }
	    return count;
	}

int main(){
  return 0;
}
