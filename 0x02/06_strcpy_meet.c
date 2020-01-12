#include <stdio.h>
#include <string.h>

int greeting(char *temp1) {
    char name[400];
    strcpy(name ,temp1);
    printf("Hello %s\n", temp1);
    return 0;
}

int main(int argc, char * argv[]) {
    greeting(argv[1]);
    printf("Bye %s\n", argv[1]);
    printf("一共有 %d 个参数\n", argc);
    // printf("%d", (--argc));
    while(argc) {
        printf("%s\n", argv[--argc]);
    }
    return 0;
}

/*
greeting(char *temp1, char *temp2) {
    char name[400];
    strcpy(name ,temp2);
    printf("hello %s %s\n", temp1, temp2);
}

main(int argc, char * argv[]) {
    greeting(argv[1], argv[2]);
    printf("Bye %s %s\n", argv[1], argv[2]);
}
*/
