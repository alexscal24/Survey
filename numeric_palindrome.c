#include <stdio.h>

int i, j, t, product, number, backwards_num, max;

int is_palindrome(int n);

int main(){
    max = 0;
    for(i = 100; i <= 999; i++){
        for(j = 100; j <= 999; j++){
            product = i*j;
            if(is_palindrome(product) && product > max){
                max = product;
                if(i == 913 && j == 993){
                    printf("%d, %d, %d\n", i, j, max);
                }
            }
        }
    }
    return 0;
}

int is_palindrome(int number){
    backwards_num = 0;
    t = number;
    while(t){
        backwards_num = 10*backwards_num + (t % 10);
        t /= 10;
    }
    return backwards_num == number;
}