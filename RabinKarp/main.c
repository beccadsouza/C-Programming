#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define Mod 17
/*
 * Created by Rebecca D'souza on 13/04/18
 * */
void main(){
    int sum=0,hash=0,temp=0;
    char pattern[20],text[100];
    scanf("%s%s",text,pattern);
    for(int i = 0;i<strlen(pattern);i++)
        sum += (int)pattern[i];
    hash = sum%Mod;
    for(int i = 0;i<strlen(text)-strlen(pattern)+1;i++) {
        bool spuriousHit = false, match = true;
        temp = 0;
        for (int j = i; j < i + strlen(pattern); j++)
            temp += text[j];
        temp %= Mod;
        if (temp == hash) {
            for (int k = 0, j = i; k < strlen(pattern); k++, j++)
                if (pattern[k] != text[j]) {
                    spuriousHit = true;
                    break;
                }
        }
        else match = false;
        if(spuriousHit)
            printf("Spurious hit encountered at index %d\n",i+1);
        else if(match)
            printf("Match found at index %d\n",i+1);
    }
}