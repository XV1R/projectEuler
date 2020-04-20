#include <stdio.h>

int main() 
{

        long int n = 600851475143;

        for (int i =2; i < n; ++i) {
                if(n % i == 0) {
                        n = n/i;
                        i--;
                }

        }
        printf("%ld\n",n);
        
}
