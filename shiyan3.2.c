#include <stdio.h>
#include <string.h>
main(){
    char a[30]="string (a)";
    char b[30]="string1\0string";
    int i;
    strcpy(a,b);
	printf("strcpy() :%s",a);
	printf("\nstrcpy():");
	for(i=0;i<30;i++)
		printf("%c",a[i]);
	memcpy(a,b,30);
	printf("\nmemcpy() :");
	for(i=0;i<30;i++)
		printf("%c",a[i]);
	return;
}
