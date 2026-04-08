#include <stdio.h>

void reverseSegment(char *start, char *end){
    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(){
    char str[] = "hello world foo";
    char *p = str;

    while(*p != '\0'){

        while(*p ==  ' ') p++;

        char *wordSelect = p;

        while(*p != ' ' && *p != '\0') p++;

        reverseSegment(wordSelect, p - 1);
    }

    printf("%s\n", str);
    return 0;
}