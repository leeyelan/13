#include <stdio.h>
#include <stdlib.h>
#include "keywords.h" 

int is_whitespace(char c){
	if(c == ' ' || 
	   c == '\n' || 
	   c == '\t' || 
	   c == '\r' || 
	   c == '(')
	return 1;
	
	return 0;
}


int fget_word(FILE*fp, char* word){
	char c;
	int cnt;
	 
	while((c=fgetc(fp)) != EOF){
		if(is_whitespace(c) == 0)
		break;
	}
	
	if(c == EOF)
	    return 0;
	
	cnt = 0;
	word[cnt++] = c;
	word[cnt] = '\0';
	
	while((word[cnt]=fgetc(fp)) != EOF ){
		if(is_whitespace(word[cnt]) == 1)
		{
			word[cnt] = '\0';
			break;
		}
		
		cnt++;
	}
	
	return cnt;

}
 


void main(void){
	
	int cnt;
	char word[100];
	char filename[100];
	FILE *fp;
	
	printf("input file name:");
	scanf("%s",filename);
	
	fp = fopen(filename,"r");
	
	if((fp = fopen(filename,"r")) == NULL){
		
		printf("invalid name! (%s)\n",filename);
		return -1;
	}
	
	
	
	while(fget_word(fp,word) != 0){
		count_word(word);
	}
	
	print_word();
	
	
	fclose(fp);
	
	return 0;
}

