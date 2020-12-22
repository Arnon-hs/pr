#include <stdio.h>
#include <string.h>
char Getchars(){
	char str[256];
	fgets(str,256,stdin);
	return str[0];
}
char *GetStrt(int num){
			char *str;
	int b = 1;
	while(b){
	fgets(str,256,stdin);
	if(strcmp(str, "\n") != 0){

	
strtok(str, "\n");
	strncpy(str,str,num);

	if(strlen(str) <= num){
		b=0;
	}
	}
	}
	return str;
}
char *GetDate(){
	char *c = GetStrt(8);
	return c;
}
