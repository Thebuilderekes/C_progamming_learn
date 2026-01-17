#include <stdio.h>
int main()
{
  char lead;
  int dave = 1;
  int *p = &dave;
  char *sidekick;
  lead = 'A';
  sidekick = &lead; /* initialize char variable */ /* initialize pointer IMPORTANT! */ printf("About variable 'lead':\n");
  printf("current dave address: %p\n", p);
  p++;
  printf("dave adress after increment: %p\n", p);
  printf("Size\t\t%zd\n",sizeof(lead));
  printf("Contents\t%c\n",lead);
  printf("Location\t%p\n",&lead);
  printf("About variable 'sidekick':\n");
  printf("Contents\t%p\n",sidekick);
  printf("side kick content: %c\n", *sidekick);
  return(0);
}

