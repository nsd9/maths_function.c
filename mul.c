#include <stdio.h>

int main()
{
	int f = 0;
    int t = 1;
    printf("x\ty\tx!(||)y\n");
    printf("%i\t%i\t%i\n", f, f, !(f || f));
    printf("%i\t%i\t%i\n", f, t, !(f || t));
    printf("%i\t%i\t%i\n", t, f, !(t || f));
    printf("%i\t%i\t%i\n", t, t, !(t || t));
    return 0;
}
