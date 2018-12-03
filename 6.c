#include <stdio.h>
int main(void) {

        int array1[] = {1,2,3,4,5,6,7,8,9,10};
        int array2[10];
        int i;

        for (i=0;i<10;i++) {

                printf("Enter numbers: ");
                scanf("%d", &array2);
        }

        for (i=0;i<10;i++) {

                if (array1[i] != array2[i]) {

                        printf("Not equal \n");
                }
                else {
                        printf("They are equal. \n");
                }
        }
}
