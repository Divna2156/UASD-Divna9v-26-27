/*Да се
състави програма, която да сортира даден масив възходящо и да намира
сумата на елементите на масива, умножени по съответния индекс от
сортирания масив. Примерен вход: {1, 7, 3, 4, 9, 2} => След сортирането
= {1, 2, 3, 4, 7, 9} => Изход: 93 = 1 * 0 + 2 * 1 + 3 * 2 + 4 * 3 + 7 *
4 + 9 * 5*/
#include<stdio.h>
int main(){
    int arr[]={1, 7, 3, 4, 9, 2};
    int n=6;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i]*i;
    }
    printf("%d",sum);
    return 0;
}