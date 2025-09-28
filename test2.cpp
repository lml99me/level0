#include <stdio.h>
#include <string.h>
int main()
{
	FILE*fp;
	fp=fopen("date.txt","r");
	if(fp==NULL){
		printf("failure\n");
		return 1; 
	}
	char shuru[256];
	char cunfang[256];
	while(1){
	
		printf("please enter\n");
		scanf("%s",shuru);
		if(strcmp(shuru,"Quit")==0){
			break;
		}
		rewind(fp);
		int i=0;
		while(fgets(cunfang,100,fp)){
			char*p=strchr(cunfang,':');
			if(p!=NULL){
				char key[256];
				strncpy(key,cunfang,p-cunfang);
				key[p-cunfang]='\0';
			if(strcmp(key,shuru)==0){
				printf("%s",p + 1); 
				i=1;
				break;
			}
			
			}
				
			}
		if(!i)	{
				printf("Error\n");}
	
		
		
		
		
		
		
		
		
		
		
		
		
		
			}
	
		fclose(fp);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

