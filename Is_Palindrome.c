#include <stdio.h>
#include <string.h>
 int is_palindrome(char s[], int n){

     int len = strlen(s) ; 

 int flag =1;

 int left = 0;
 int right = len-1;
     while (left < right)
 {
   if (s[left] !=s[right] )
   {
    flag =0;
    break;
   }
   left++;
   right--;

 }
 return flag;
 }
int main()
{
 int n = 1005;
 char s[n];
 scanf("%s", &s);

int flag = is_palindrome(s,n);
 
 if ( flag==1 )
 {
    printf("Palindrome");
 }
 if (flag==0)
 {
    printf("Not Palindrome");
 }
 
    
 
 
    return 0;
}