/*Направете
функция, която връща индекса, на който се намира дадено число в сортиран
масив или -1, ако числото не се среща. Функцията трябва да използва метода
на бинарното търсене за да намери къде се среща елемента. Примерен вход
1: {1, 2, 5, 7, 8, 10}, търсено число: 5 => Изход: 2. Примерен вход 2:
{1, 2, 5, 7, 8, 10}, търсено число 6 => Изход -1.*/
#include<stdio.h>
int main(){
    int arr[]={1, 2, 5, 7, 8, 10};
    int seek=5;
    int n=6;
    int left=0;
    int right=n-1;
    int found=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==seek){
            found=mid;
            break;
        }else if(seek<arr[mid]){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    if(found!=-1){
        printf("The index of the sought number is: %d",found);
    }
    else{
        printf("We regret informig you that your number wasn't found in the array...");
    }
    return 0;
}