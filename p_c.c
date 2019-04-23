#include "types.h"
#include "stat.h"
#include "user.h"

int m = 1, f = 0, e = 3, x = 0;

int main()
{
	void prod();
	void cons();
	int w_ait(int);
	int s_ignal(int);
	
	printf(e, "Buffer size: %d");
	

    if ((m == 1) && (e!=0))
	prod();
	else
	printf(1, "\nBuffer is full!");

	if ((m == 1) && (e!=0))
	prod();
	else
	printf(1, "\nBuffer is full!");

	if ((m == 1) && (e!=0))
	prod();
	else
	printf(1, "\nBuffer is full!");

	if ((m == 1) && (e!=0))
	prod();
	else
	printf(1, "\nBuffer is full!");
	
	if ((m ==1) && (f!=0))
   	 cons();
	else
    	printf(1, "\nBuffer is empty!");

	if ((m ==1) && (f!=0))
    	cons();
	else
    	printf(1, "\nBuffer is empty!");

	if ((m ==1) && (f!=0))
    	cons();
	else
    	printf(1, "\nBuffer is empty!");

	if ((m ==1) && (f!=0))
    	cons();
	else
    	printf(1, "\nBuffer is empty!");
	
	
	return 0;
}

int w_ait(int k)
{
	return (--k);
}

int s_ignal(int k)
{
	return (++k);
}

void prod()
{
	m=w_ait(m);
	f=s_ignal(f);
	e=w_ait(e);
	x++;
	printf(x, "\nProducer produces the item %d");
	m=s_ignal(m);
}

void cons()
{
	m=w_ait(m);
	f=w_ait(f);
	e=s_ignal(e);
	printf(x, "\nConsumer consumes item %d");
	x--;
	m=s_ignal(m);
}
