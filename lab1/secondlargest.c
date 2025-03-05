#include <stdio.h>
int arr[200000]; 
int min = (1<<30) | (1<<31); 
void main(){ 
    int n ,largest = min, secondlargest = min ; 
    scanf("%d",&n) ; 
    for(int i = 0 ; i<n ; ++i){
        scanf("%d",&arr[i]) ; 
        if(arr[i]>secondlargest){
            if(arr[i]>largest){
                secondlargest = largest  ; 
                largest = arr[i]  ;
            }
            else{
                secondlargest = arr[i] ; 
            }
             
        }
    }
    if(secondlargest==min){
        printf("Only a single element exits"); 
    }else{
        printf("%d",secondlargest) ; 
    }

}