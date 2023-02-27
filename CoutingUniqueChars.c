//
// Created by NyanLinnHtun on 2/26/23.
//

#include "stdio.h"

int numbersOfUniqueChars(char s[]){
    int map[200] = {};
    int count;
    for(int i= 0; s[i] != '\0'; ++i){
        map[s[i]] +=1;
    }
    for (int i= 0; i < 200;++i){
        if (map[i] != 0){
            printf("%c appears : %d times\n",i,map[i]);
            count++;
        }

    }
    printf("The total different characters : %d \n",count);
    return count;

}

int main() {
    char s[] = "abaa";
    numbersOfUniqueChars(s);
}