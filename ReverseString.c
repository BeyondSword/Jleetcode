#include<stdio.h>
char* reverseString(char* s) {
    int length = strlen(s);
	int i=0,j=length-1;
	char tmp;
	char* str = s;
	while(i<j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return str;
}
