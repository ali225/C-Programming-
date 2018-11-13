#include <stdio.h>
#include <string.h>
void main()
{
char names[5][14] = {"Alaa", "Osama", "Mamdouh", "Samy",
"Hossain"};
char name[14];
int i;
printf("Enter your name : ");
scanf("%s", name);
for(i=0;i<5;i++)
{
if(stricmp(name, names[i])==0)
{
printf("Congratulation,
your name is in the list");
break;
}
}
if(i==5)
printf("We are sorry, your name is not listed");
}