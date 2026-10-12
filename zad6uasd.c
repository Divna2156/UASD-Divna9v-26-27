/*Да се
направи рекурсивна функцията, която преобразува дадено десетично число в
двоично и го връща като целочислено число. Примерен вход: 10 => Изход
1010. Хубаво е функцията да връща тип “long”, защото двоичните числа могат
да имат много цифри.*/
#include<stdio.h>
long decToBin(int number){
    if(number<=0){
        return 0;
    }
    return number%2+decToBin(number/2)*10; 
}
int main(){
    int n=2005;
    long transform=decToBin(n);
    printf("%ld",transform);
}
