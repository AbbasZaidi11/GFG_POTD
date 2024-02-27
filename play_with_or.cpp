int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    for(int i{0};i<n;i++){
        if((i+1)<n){
            arr[i]=(arr[i+1] | arr[i]);
        }
    }
    return &arr[0];
    
}
