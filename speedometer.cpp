#include <stdio.h>

int main(void) {
        int no_of_testcases;
        scanf("%d", &no_of_testcases);
        
        for(int i = 1; i<=no_of_testcases; i++){
            int n;
            scanf("%d", &n);
            int quotient = n/3;
            int remainder = n%3;
            int ten_multiple = 1;
            int answer = remainder * ten_multiple;
            
            while(quotient!=0){
                ten_multiple = ten_multiple * 10;
                remainder = quotient%3;
                answer = answer + (remainder * ten_multiple);
                quotient = quotient/3;
            }
            
            printf("Case #%d: %d\n",i,answer);
            
        }
        
        return 0;
}