//program to solve chinese remainder theorem
#include <stdio.h>
int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int modInverse(int a, int m) 
{
    int m0 = m;
    int x0 = 0, x1 = 1;
    if (m == 1)
        return 0;
    
    while (a > 1) 
    {
        int q = a / m;
        int t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    
    if (x1 < 0)
        x1 += m0;
    
    return x1;
}
void chineseRemainderTheorem(int n, int* a, int* m) 
{
    int i, prod = 1;
        for (i = 0; i < n; i++)
        prod *= m[i];
    
    int* M = (int*)malloc(n * sizeof(int));
    int* inv = (int*)malloc(n * sizeof(int));
    
    if (M == NULL || inv == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }
    for (i = 0; i < n; i++) 
    {
        M[i] = prod / m[i];
        inv[i] = modInverse(M[i], m[i]);
    }
    int x = 0;
    for (i = 0; i < n; i++)
    x += a[i] * M[i] * inv[i];  
    x %= prod;
    if (x < 0)
    x += prod;   
    printf("The solution is x = %d\n", x);
    free(M);
    free(inv);
}
int main() 
{
    int n, i;
    printf("Enter the number of equations: ");
    scanf("%d", &n); 
    int* a = (int*)malloc(n * sizeof(int));
    int* m = (int*)malloc(n * sizeof(int));
    if (a == NULL || m == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }    
    printf("Enter the values of a and m for each equation:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d %d", &a[i], &m[i]);
    }    
    chineseRemainderTheorem(n, a, m);
    free(a);
    free(m);
    return 0;
}
