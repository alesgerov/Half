#include <stdio.h>

int main() {
    int input,input2;
    scanf("%d",&input);
    input2=input;
    for (int i = 0; i <input ; ++i) {
        for (int j = input2-1; j !=0 ; --j) {
            printf("2");
        }
        for (int j = 0; j !=1 ; ++j) {
            printf("0");
        }
        for (int j = input2; j !=input ; ++j) {
            printf("1");
        }

        printf("\n");
        input2--;
    }


    return 0;
}
