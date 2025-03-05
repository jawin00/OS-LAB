#include <stdio.h>
int arr[200000]; 

void main(){ 
    int n  , pos  ;
    scanf("%d%d",&n,&pos) ; 
    for(int i = 0 ; i<n ; ++i){
        scanf("%d",&arr[i]) ; 
    }
    for(int i = pos ; i<n ; ++i){
        arr[i] = arr[i+1] ; 
    }
    for(int i = 0 ; i<n-1 ; ++i){
        printf("%d ",arr[i]) ; 
    }

}