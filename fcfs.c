#include <stdio.h>  
#include <conio.h>   


int main(){
    int n ; 
    printf("Enter the number of processes\n") ;   
    scanf("%d",&n) ;  
    int burstTime[n] ; 

    for(int i = 0 ;  i< n ; ++i){
        scanf("%d",&burstTime[i]) ;  
    }
    // for(int i = 0 ;  i< n ; ++i){
    //     printf("%d",burstTime[i]) ;  
    // }
    int waitingTime[n] ;  
    waitingTime[0] = 0 ;   
    float totwait = 0 , totturn = 0 ; 
    for(int i =  1 ; i<n ; ++i){
        waitingTime[i] = waitingTime[i-1] + burstTime[i-1] ;  
        totwait += waitingTime[i] ; 
    }
    int turnaround[n] ;  
    for(int i = 0 ; i<n ; ++i){
        turnaround[i] = waitingTime[i] + burstTime[i] ; 
        totturn += turnaround[i] ; 
    }
    printf("The average waiting time is %f:\n",totwait/n) ;  
    printf("The average turnaround time is %f:\n",totturn/n) ;  
    return  0 ; 
}