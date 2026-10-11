/*Да се
състави програма, която да намира сумата на простите числа в даден масив
(1 не се смята за просто число). Примерен вход: {1, 7, 10, 15, 16, 13, 23,
30} => Изход: 43 = 7 + 13 + 23 */
#include<stdio.h>
int main(){
    int array[]={1, 7, 10, 15, 16, 13, 23,30};
    int sum=0;
    int n=8;
    for(int i=0;i<n;i++){
        int isPrime=1;
        for(int j=2;j<=array[i]/2;j++){
            if(array[i]%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            sum=sum+array[i];
        }
    }
    printf("%d",sum);
    return 0;
}