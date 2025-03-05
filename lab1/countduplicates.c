#include <stdio.h>
int arr[200000] , track[1000] ;  
void main(){ 
    int n  ; 
    scanf("%d",&n) ; 
    for(int i = 0 ; i<n ; ++i){
        track[i] = 0 ; 
    }
    int cnt = 0 ; 
    for(int i = 0 ; i<n ; ++i){
        scanf("%d",&arr[i]) ; 
        if(track[arr[i]]==0) track[arr[i]]++ ;  
        else{
            cnt++ ; 
        }
    }
    printf("%d",cnt) ; 

}