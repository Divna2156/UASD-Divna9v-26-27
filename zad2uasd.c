/*Да се
състави програма, която да връща произведението на цифрите на дадено
число. Примерен вход: 417 => Изход: 28 = 4 * 1 * 7;*/
#include<stdio.h>
int main(){
    int num=417;
    int res=1;
    while(num>0){
        res=res*(num%10);
        num=num/10;
    }
    printf("%d",res);
    return 0;
}