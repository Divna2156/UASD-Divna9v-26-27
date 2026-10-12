/*Да се
направи функция, която приема произволен символен низ и да връща символът
от него, който има най-голям ASCII код. Примерен вход: “Ivan” => Изход:
‘v’.*/
#include<stdio.h>
int main(){
    char str[]="Nanaki";
    char biggest=str[0];
    for(int i=0;str[i]!='\0';i++){
        if(biggest<str[i]){
            biggest=str[i];
        }
    }
    printf("%c",biggest);
    return 0;
}