#include <stdio.h>
#include<unistd.h>
int main()
{
    char buff[109]={0};
    int i=0;
    for(i=0;i<100;i++){
    buff[i]='#';
    printf("[%-100s] [%d%%]\r",buff, i);
    fflush(stdout);
    usleep(100000);
    }
    
   return 0;
}
