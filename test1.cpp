#include<stdio.h> 
#include<string.h>
int main()
{

    char word[ 100];
	whilr(1){
    scanf("%s",&word);
    if(strcmp(word,"Dian")==0)
    printf("2002\n");
    else if(strcmp(word,"Quit")==0)
   break;
    else
    printf("Error");
	}
    return 0;
}


