
int 
sys_mysystemcall(void)
{
   cprintf("These are the odd numbers up until 30.\n");

   for (int i = 1; i <= 30; i++)
   {
	if (i%2)
        {
	     cprintf("%d\n", i);
	}
   }
	
   return 0;
}
