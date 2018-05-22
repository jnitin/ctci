#include<stdio.h>
#include<stdlib.h>


void main()
{
	char string[] = "Hello World";
        int count = 0,index = 0;
        char*str = (char*)&string;
        int size = sizeof(string);
        printf("Size of string %d\n",size);
        char*ptr = (char*)malloc(size);
        for(index = size-2 ;index >= 0;index--)
	{
		ptr[count] = str[index];
                count++;
	}
        ptr[size-1] = '\0';
  
        printf("Input String: %s\n",string);

	printf("Reversed String: %s\n",ptr);
        free(ptr);
        ptr = NULL;
}
