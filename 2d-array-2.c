#include <stdio.h>
#include <string.h>

int main(){

    char name[3][25] = {0};

    for(int i = 0; i < 3; i++){
        printf("Enter a name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }

    for(int j = 0; j < 3; j++){
        printf("%s\n", name[j]);
    }

    return 0;
}