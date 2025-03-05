#include <stdio.h>
int arr[200000]; 
int max = (1<<29) ; 
void main(){ 
    int n ,smallest = max, secondSmallest = max ; 
    scanf("%d",&n) ; 
    // printf("%d",n) ; 
    for(int i = 0 ; i<n ; ++i){
        scanf("%d",&arr[i]) ; 
        if(arr[i]<secondSmallest){
            if(arr[i]<smallest){
                secondSmallest = smallest  ; 
                smallest = arr[i]  ; 
            }
            else{
                secondSmallest = arr[i] ; 
            }
            
        }
    }
    if(n==1){
        printf("Only a single element exits"); 
    }else{
        printf("%d",secondSmallest) ; 
    }

}