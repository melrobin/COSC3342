#include <stdio.h>

int main()
{
	FILE *fp;
        char string_buffer[256];
	int int_var;
	fp=(FILE *)fopen("input.txt","r");
	fscanf(fp,"%s",string_buffer);
	printf("Line 1: %s\n",string_buffer);
	fscanf(fp,"%s",string_buffer);
	printf("Line 2: %s\n",string_buffer);
	fscanf(fp,"%d",&int_var);
	printf("Line 3: %d\n",int_var);
	fclose(fp);
	return 0;
}

