#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
   long int amma = syscall(334, 2, 2);
   printf("2 + 2 = %ld\n", amma);
   return 0;

}
