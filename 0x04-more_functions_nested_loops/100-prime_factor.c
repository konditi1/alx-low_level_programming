#include <stdio.h>
#include <math.h>

int main(void)
{
long int num = 612852475143;
int i;

while (num % 2 == 0) {
num /= 2;
}

for (i = 3; i <= sqrt(num); i += 2) {
while (num % i == 0) {
num /= i;
}
}

if (num > 2) {
printf("%ld\n", num);
}

return 0;
}

