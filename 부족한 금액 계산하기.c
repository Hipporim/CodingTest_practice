#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long answer = 0;
    long sum=0;
    for(int i=1; i<=count; i++){
        sum+=price*i;
    }if(sum>money){
        sum-=money;
        answer=sum;
    }else{
        answer =0;
    }
    return answer;
}
