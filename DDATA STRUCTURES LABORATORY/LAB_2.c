// Design, develop and Implement a Program in C for the following 
// operations on Strings.
// A) Read a main String (STR), a Pattern String (PAT) and a 
// Replace String (REP)
// B) Perform Pattern Matching Operation: Find and Replace all 
// occurrences of PAT in STR with REP if PAT exists in STR.
// Report suitable messages in case PAT does not exist in STR
// Support the program with functions for each of the above 
// operations. Don't use Built-in functions.
#include <stdio.h>
#include <conio.h>
char str[100], pat[50], rep[50], ans[50];
int i, j, c, m, k, flag = 0;

void stringmatch()
{
    i = m = c = j = 0;
    while (str[c] != '\0')
    {
        if (str[m] == pat[i])
        {
            i++;
            m++;
            if (pat[i] == '\0')
            {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                    ans[j] = rep[k];
                i = 0;
                c = m;
            }
        }
        else
        {
            ans[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }
    ans[j] = '\0';
}
void main()
{
    printf("\nEnter a main string: \n");
    gets(str);
    printf("\nEnter a pattern string: \n");
    gets(pat);
    printf("\nEnter a replace string: \n");
    gets(rep);
    stringmatch();
    if (flag == 1)
        printf("\nThe resultant string is\n %s", ans);
    else
        printf("\nPattern string NOT found\n");
    getch();
}
