/*Create a pettern
Created by Vansh Kamboj
Date:- 21/01/2020*/



#include <stdio.h>

int main()
{
    int i,j,k;
    int n=5,m;
    m=n-1;
    for(i=1;i<=n;i++) {
        k=1;
        for(j=1;j<=n*2-1;j++) {
            if((j>=n+1-i)&&(j<=n-1+i)&&k) {
                printf("*");
                k=0;
                
            }else {
                printf(" ");
                k=1;
            }
            
        }
        printf("\n");
    }
    for(i=2;i<=n;i++) {
        k=1;
        for(j=2;j<=n*2-1;j++) {
            if((j>=i+1)&&(j<=n*2-i+1)&&k) {
                printf("*");
                k=0;
            }else {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }

    return 0;
}


//different mathod with two loops only

#include <stdio.h>

void pattern(int, int, int, int);

int main() {
    int n, m = 1, a, b;
    printf("Enter number of rows :\n");
    scanf("%d", & n);
    a = 1, b = 1;
    pattern(a, b, n, m);
    a = 2, b = 2, m = 0;
    pattern(a, b, n, m);

    return 0;
}
void pattern(int a, int b, int n, int m) {
    int i, j, k;
    for (i = a; i <= n; i++) {
        k = 1;
        for (j = b; j <= n * 2 - 1; j++) {
            if (m) {
                if ((j >= n + 1 - i) && (j <= n - 1 + i) && k) {
                    printf("*");
                    k = 0;

                } else {
                    printf(" ");
                    k = 1;
                }

            } else {
                if ((j >= i + 1) && (j <= n * 2 - i + 1) && k) {
                    printf("*");
                    k = 0;
                } else {
                    printf(" ");
                    k = 1;
                }

            }


        }
        printf("\n");
    }

}