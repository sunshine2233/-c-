# -c-
大一上学期的语言实验
# include<stdio.h>
# include<string.h>
int main (void)
{ 
   char*(*fun[3])(char *strDest,const char *strSrc);
    	fun[0]=strcpy;
    	fun[1]=strcat;
    	fun[2]=strtok;
char a[100], b[100], *result;
int choice;
while(1)
{
	do
	{
		printf("\t\t1 copy string.\n");
		printf("\t\t2 connect string.\n");
		printf("\t\t3 parse string.\n");
        printf("\t\t4 exit.\n");
		printf("\t\tinput a number (1-4) please.\n");
		scanf("%d", &choice);
}
    while(choice<1 || choice>4);
    
    
	if(choice==4)
	break;
	
	
        getchar();
        printf("input the first string please!\n");
        gets(a);
        
        printf("input the second string please!\n");
        gets(b);
       
        result=fun[choice-1](a,b);
        printf("the result is %s\n", result);
}
	
	return 0;
}
