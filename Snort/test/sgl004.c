#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <netdb.h>

/** 协议号对应的协议名称 **/
int main ()
{
	int i = 0;
	for (i = 0; i < 256; i++)
	{
		struct protoent	*pt = getprotobynumber(i);
		if (pt != NULL)
		{
			printf ("Pro %d: %s\n", i, pt->p_name);
		}

	}
	return 0;
}




