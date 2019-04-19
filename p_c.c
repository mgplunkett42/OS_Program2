#include <stdio.h>
#include <stdlib.h>

int m = 1, f = 0, e = 3, x = 0;

int main()
{
	void prod();
	void cons();
	int wait(int);
	int signal(int);
	
	printf("Buffer size: %d", e);
	

    if ((m == 1) && (e!=0))
	prod();
	else
	printf("\nBuffer is full!");

	if ((m == 1) && (e!=0))
	prod();
	else
	printf("\nBuffer is full!");

	if ((m == 1) && (e!=0))
	prod();
	else
	printf("\nBuffer is full!");

	if ((m == 1) && (e!=0))
	prod();
	else
	printf("\nBuffer is full!");
	
	if ((m ==1) && (f!=0))
    cons();
	else
    printf("\nBuffer is empty!");

	if ((m ==1) && (f!=0))
    cons();
	else
    printf("\nBuffer is empty!");

	if ((m ==1) && (f!=0))
    cons();
	else
    printf("\nBuffer is empty!");

	if ((m ==1) && (f!=0))
    cons();
	else
    printf("\nBuffer is empty!");
	
	
	return 0;
}

int wait(int k)
{
	return(--k);
}

int signal(int k)
{
	return (++k);
}

void prod()
{
	m=wait(m);
	f=signal(f);
	e=wait(e);
	x++;
	printf("\nProducer produces the item %d", x);
	m=signal(m);
}

void cons()
{
	m=wait(m);
	f=wait(f);
	e=signal(e);
	printf("\nConsumer consumes item %d", x);
	x--;
	m=signal(m);
}