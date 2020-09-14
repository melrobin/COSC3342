#include <stdio.h>
#include <string.h>

void process_string(char *a_string)
{
	printf("The string is: %s\n",a_string);
	printf("...and the length is: %d\n",strlen(a_string));
}
int main(int argc,char *argv[])
{
	char one_string[64],another_string[64],*combined_string;
        char example[64]="235,357,-839,426";
	char example2[84];
	
	strcpy(example2,"Now is the time for all good men to come to the aid of their country.");
	char search[40];//="for";
	char delim[2]=",";
	char *tok;
	strcpy(search,argv[1]);;
	strcpy(one_string,"COSC3342");
	strcpy(another_string,"COSC3343");
       /// combined_string=strcat(one_string,another_string);
//process_string(strcat(one_string,another_string));
//	process_string(combined_string);
      /*  tok=strtok(example,delim);
	while (tok != NULL)
	{
		printf("%s\n",tok);
                tok=strtok(0,delim);
	} */

	printf("The substring is: %s\n",strstr(example2,search));

	return 0;
}

