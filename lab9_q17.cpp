/*
7. Implement your versions for the following functions: 
Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr
*/

#include<iostream>    
using namespace std;  

//strcpy
char* mystrcpy(char* str1, char* str2)
{
    for(int i=0;*str2!='\0';i++)
    {
        str1[i]=str2[i];
    }
    return *str1;
}

//strcat
char* mystrcat(char* str1,char* str2)
{
	int k=0,l=0;
	for(int i=0; str1!='\0';i++)
	{

        k++;

	}

    for(int i=0; str2!='\0';i++)
    {

        l++;

    }

    char a[k];
    for(int i=0;i<k+l;i++)
    {
        if(i<k)
        {
            a[i]=str1[i];
        }
        else
        {
            a[i]=str2[i-k];
        }
    }

    return a;
}

//strlen
int mystrlen(char* str)
{
    int c=0;

    for(int i=0;*str!='\0';i++)
    {
        c++;
    }
    return c;
}

//strcmp
int mystrcmp(char *str1,char *str2)
{
    int d=0;
    int c=0,k=0;

    for(int i=0;str1!='\0';i++)
    {
        c++;
    }

    for(int i=0;str2!='\0';i++)
    {
        k++;
    }

    int l;

    if(c<k)
    {
        l=c;
    }

    else
    {
        l=k;
    }

    for(int i=0;i<l;i++)
        {
            int m=(int)(str[i]);
            int n=(int)(str[i]);
            d=m-n;

            if(d!=0)
            {
                break;
            }
        }

    return d;
}

//Return Value: This function returns a pointer points to the first character of the found s2 in s1 otherwise a null pointer if s2 is not present in s1. If s2 points to an empty string, s1 is returned.

char* mystrstr(char* str1,char* str2)
{
    if(str2=='\0')
    {
        return str1;
    }

    else
    {

        for(int i=0;*str2!='\0';i++)
        {
            k++;
        }

        for(int i=0;;i++)
        {

            if(str1[i]==str2[0])
            {
                int t=0;

                for(int j=0;j<k;j++)
                {

                    if(str1[i+j]==str2[j])
                    {
                        t++;
                    }
                }

                if(t==k)
                {
                    return str1;
                }
            }
        str1++;
        }
    }
}
