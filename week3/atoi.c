#include <stdio.h>
#include <string.h>
#include <cs50.h>

int atoi(char s[]);

int main(void)
{
    string input = get_string("Enter positive integer ");
    
    int result = atoi(input);
    printf("%i\n", result);
}

int atoi(char s[])
{   
    int l = 0;
    int len = strlen(s);
    if (len == 0)
    {
        return 0;
    }
    l = l + (s[0] - '0');
    for (int i = 0; i < len -1; i++)
    {
        l = l * 10;
    }
    
    for (int i = 0; i < len; i++)
    {
        s[i] = s[i + 1];
    }
    
    return l + atoi(s);
    

}


/*
    grab string 
    find out string length 

        toInt(length)
        grab last character in array
        reduce int by 48
        multiply it by 10 length amount of times. ex: length = 3 (10x10x10)
        make that last character NUL (\n)
        call toInt(length -1)
*/