#include<stdio.h>

enum Day{
	
	mon,tue,wed,thu,fri,sat=13,sun
};
main()
{
	enum Day d;
	
	d=sat;
	
	printf("%d",d);
}
