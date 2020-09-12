#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double PI=3.1415929;
	struct _sometag
	{
		int onefield;
		char anotherfield;
		float stillanotherfield;
	};
double an_example_function(double angle)
{
	angle = PI/180.*angle; //convert to radians
	return(2.*sin(angle));
}
int main(int argc,char *argv[])
{
	int i;
	int sum=0;
	FILE *fp;
        char string_array[7];

	struct _sometag a_struct,*pointer;
	int a[3];
        a_struct.onefield=7;
	a_struct.anotherfield='c';
	a_struct.stillanotherfield=3.7;

	pointer=&a_struct;
	if (argc < 2)
	{
		printf("You did not give me enough information\n");
		exit(0);
	}
        fp=(FILE *)fopen("output.txt","a");

	fprintf(fp,"%f\n", an_example_function(atof(argv[1])));

	fclose(fp); 
	return(0);
}
