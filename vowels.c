// Program for calculating the number of vowels, consonants and words in a line.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    
    int i,len,v=0,c=0,w=0;
    
    printf("\n Enter the line\n");
    gets(str);
    
    len = strlen(str);
    
    for(i=i;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U' )
        {
          v++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
          c++;
        }
        else if(str[i]==' ')
        {
          w++;
        }
    }
    
    printf("\nNumber of vowels = %d\n",v);
    printf("\nNumber of consonants = %d\n",c);
    printf("\nNumber of words = %d\n",(w+1));
    
    
    return 0;
}
