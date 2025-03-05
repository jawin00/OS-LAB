#include <stdio.h>
int arr[1000][1000]; 
int row[1000],col[1000]  ; 
int max = (1<<30) ; 
int main(){ 
    int n , m  ; 
    scanf("%d%d",&n,&m) ; 
    for(int i = 0 ; i<m ; ++i){
        for(int j = 0 ; j<n ; ++j){
            scanf("%d",&arr[i][j])  ; 
        }
    }
    for(int i = 0 ; i<m ; ++i){
        row[i] = 0; 
    }
    for(int i = 0 ; i<n ; ++i){
        col[i] = 0; 
    }
    for(int i = 0 ; i<m ; ++i){
        for(int j = 0 ; j<n ; ++j){
            row[i]+= arr[i][j] ; 
            col[j]+= arr[i][j] ; 
        }
    }
    for(int i = 0 ; i<m ; ++i){
        printf("%d ",row[i]) ; 
    }
    printf("\n") ; 
    for(int i = 0 ; i<n ; ++i){
        printf("%d ",col[i]) ;
    }
    return 0 ; 
}