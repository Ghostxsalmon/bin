#include <cs50.h>
#include <stdio.h>

int main(void)
{
   char c = get_char("Do you agree?");

   if (c == 'y' || c == 'Y') // || means or && means and. Notice the similarites you see when in terminal 
   {
    printf("agreed.\n");
   }
   else if (c == 'n' || c == 'N')
   {
    printf("Not agreed \n");
   }
}

