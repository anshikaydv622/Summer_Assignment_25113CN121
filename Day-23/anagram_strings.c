#include <stdio.h>
#include <string.h>

int is_anagram(char*s1, char*s2){
    if(strlen(s1)!=strlen(s2))
    return 0;
    int count[256]={0};
    for(int i=0;s1[i];i++){
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0)
        return 0;
    }
    return 1;
}
int main(){
    char s1[]="listen", s2[]="silent";
    if(is_anagram(s1,s2))
    printf("Strings are anagrams.\n");
    else
    printf("String are not anagrams.\n");
    return 0;
}