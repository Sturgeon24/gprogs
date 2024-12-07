#include<stdio.h>
#include<math.h>


void sq(int n, int x) ;
int main()
 {
    int x, n;

    printf("Enter the input: ");
    scanf("%d", &x);

    printf("Enter the number of recursions: ");
    scanf("%d", &n);

    sq(n, x);
}
void sq(int n, int x) {
    if (n == 0) {
        printf("%d", x);
        return;
    }

    int ans = pow(x, 2);
    sq(n-1, ans);
}
