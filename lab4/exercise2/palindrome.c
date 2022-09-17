#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPalindrome(char *s, int lindex, int rindex){
    if (lindex >= rindex)
    {
        return 1;
    }
    else if (s[lindex] == s[rindex])
    {
        return(isPalindrome(s,lindex+1,rindex-1));
    }
    else{
        return 0;
    }  
}
int main()
{
    int len, lindex, rindex;
    char s[80];
    printf("Enter the string: ");
    scanf("%s", s);
    len = strlen(s);
    lindex = 0;
    rindex = len-1;
    if (isPalindrome(s,lindex,rindex)==1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}