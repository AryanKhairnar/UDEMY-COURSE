#include<stdio.h>
int main() 
{
    enum Company{ MICROSOFT, FACEBOOK, EBAY, YAHOO=6, GOOGLE, MASTERCARD };
    
    enum Company google= GOOGLE;
    enum Company facebook= FACEBOOK; 

    printf("The value of google is = %d\n",google);
    printf("The value of facebook is = %d\n",facebook);
    
    return 0;
}   