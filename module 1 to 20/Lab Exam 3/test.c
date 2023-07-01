
#include <stdio.h>
#include <string.h>

int main()
{
    int last_digit;
    char s[1000];
    int  i,j,k,count=0,n;


    gets(s);

    for(j=0;s[j];j++);
	 n=j;



    for(i=0;i<n;i++)
    {
     	count=1;
    	if(s[i])
    	{

 		  for(j=i+1;j<n;j++)
	      {

	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}


	      }

        	 int test = i+1;

         last_digit = test % 10;



       }


 	}


if(last_digit % 2 != 0){
    printf("IGNORE HIM!");
}
else{
       printf("CHAT WITH HER!");
    }


    return 0;
}
