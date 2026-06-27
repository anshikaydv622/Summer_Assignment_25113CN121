#include <stdio.h>
#include <string.h>

int isRotation(char*s1,char*s2){
size_t len1=strlen(s1);
if (len1 != strlen(s2)){
return 0;
}

char temp[len1 * 2 +1];
strcpy(temp,s1);
strcat(temp,s1);

return (strstr(temp,s2)!=NULL);
}
int main(){
    char s1[]="ABCD",s2[]="CDAB";
    if (isRotation(s1,s2))
    printf("Strings are rotations\n");
    else
    printf("Not rotations\n");
    return 0;
}