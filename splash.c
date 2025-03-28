#include<stdio.h>
#include<stdlib.h>
int main() 
{
    char name[50], date[15];

    //get user input
    printf("please enter the current date in the \"yyyy-mm-dd\" formate:");
    scanf("%10s", date);
    getchar();

    printf("please enter your name: ");
    fgets(name, sizeof(name), stdin);

    for(int i = 0; i < 50; i++)
{
    if (name[i] == '\n')
    {
        name[i] = '\0';
        break;
    }
}

printf("**The input has been processed succesfully.**\n");

//ARTIFICIAL DELAY CREATION FOR THR RRQUIRED 3 SECOND = 3,000,000,000 NANO SECOND
for (volatile long long i = 0; i < 3000000000; i++);

#ifdef _WIN32
system("cls");//clear the window terminal
#else
system("clear");//clear thr mac termianl
#endif


//splash screen
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

for(int i= 1; i<=5; i++)
{
    for(int j = 0; j < i; j++) printf("*");
    if(i == 1) printf("                                                                                                                       *****\n");
    if(i == 2) printf("                                                   [Magrathea ver 0.1]                                                 ****\n");
    if(i == 3) printf("                         Magrathea, where a shining planet is created in a wasteland with no grass,                    ***\n");
    if(i == 4) printf("               a place where unseen potential is discovered  and gems are polish by the hamds of expert,               **\n");
    if(i == 5) printf("                                                                                                                       *\n");
}
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("[user]: %s                        [Execusion Time]: %s\n", name, date);
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
return 0;
}