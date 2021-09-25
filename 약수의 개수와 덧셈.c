#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0, cnt=0, j=1;
    for(int i = left; i <= right; i++){
       int cnt=0;
        for(int j=1; j<=i; i++){
            if(i%j==0){
                cnt++;
                if(cnt%2==0) answer+=left;
                else answer-=left;
            }
        }
	}
}
