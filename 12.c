/*
#include <stdio.h>
#define n 5
void main()
{
    int a[n];
    int i;
    a[0]=1;
    for(i=0;i<n-1;++i)
    {
        a[a[i]] = a[i]+1;
    }
    for(i=0;i<=n-1;++i)
    {
        printf("%d",a[i]);
    }
}    
*/
/*
#include <stdio.h>
void main()
{
    int a[] = {22,19,17,36,12,15,28,35,66,43};
    int i,j,n = sizeof(a)/sizeof(int);
    
    for(i=0;i<n;++i)
    for(j=0;j<1;++j)
    if (a[i] > a[j])
    {
        a[i] = a[i] + a[j];
        a[i] = a[i] - a[j];
        a[i] = a[i] - a[j];
    }
    for(i=0;i<n;++i)
    printf("%d",a[i]);
    printf("\n");
}
*/
/*
#include <stdio.h>
int main()
{
    int i=1,j=1,k=1,count=0;
    while(i<2)
    {
        for(;j<4;j+=k)
        do
        {
            ++count;
            k+=i;
        } while(k<8);
        i+=j;
    }
    printf("Loop Indices %d %d %d \n",i,j,k);
    printf("Number of iterations = %d \n",count);
    
    return 0;
    
} 
*/
/*
#include <stdio.h>
void f(int a[], int n)
{
    int i;
    for(i=0;i<n-1;++i)
    a[i]+=a[i+1];
}
int main()
{
    int a[5]={1,2,4,6,8};
    f(a,4);
    printf("%d",a[4]-a[3]);
    return 0;
}
*/

/*
#include <stdio.h>
#define m 5+5
const int n=5+5;
void main()
{
    int a=0,b=0;
    a=m*n;
    b=n*n;
    printf("%d %d \n",a,b);
}
*/

/*
#include <stdio.h>

int main() {
    int n, i, j, k;
    
    printf("Enter the value of n (odd): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for n.\n");
        return 1;
    }

    // Upper part of the rangoli
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the rangoli
    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the size of the square: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
