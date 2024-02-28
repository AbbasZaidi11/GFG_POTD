    int DivisibleByEight(string s){
        //code here
        int n=s.size();
        int num=0;
        if(n>=3){
            for(int i{n-3};i<n;i++){
                num=num*10;
                num=num+(s[i]-'0');
            }
        }
        else{
            for(int i{0};i<n;i++){
                num=num*10;
                num=num+(s[i]-'0');
            }
        }
        if(num==0){
            return 1;
        }
        if((num%8)==0){
            return 1;
        }
        return -1;
    }
