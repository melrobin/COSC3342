//This is Homework 1...we will add to it
//
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include "lecture4.h"

extern void process(struct _data *);

;
;
;
int main(int argc, char* argv[])
{
	FILE *filepointer;
	int i;
        struct _data my_struct;
//	char *my_string[]="
	my_struct.payload=(char *)malloc(sizeof(char)*13);
        	my_struct.payload="xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxsome random string constitutes this payload";
        	my_struct.portnumber=53;
        	process(&my_struct);
	return(0);
}

