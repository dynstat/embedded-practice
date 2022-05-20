#include <stdio.h>
  
int set_bit(int n, int k)
{
    return (n | (1 << (k - 1)));
}
  
int clear_bit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}
  

int toggle_bit(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}
  
// Driver code
int main()
{
    int n = 5, k = 1;
  
    printf("%d with %d-th bit Set: %d\n",
           n, k, setBit(n, k));
    printf("%d with %d-th bit Cleared: %d\n",
           n, k, clearBit(n, k));
    printf("%d with %d-th bit Toggled: %d\n",
           n, k, toggleBit(n, k));
    return 0;
}
