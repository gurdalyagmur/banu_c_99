#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    char a;
    printf("karakter giriniz.");
    scanf("%c",&a);
    printf("girilen karakterin ASCİİ karsiligi %c=%d",a,a);
    return 0;
}
