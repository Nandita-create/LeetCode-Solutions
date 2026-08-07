/*Write a function to find the longest common prefix 
string amongst an array of strings.
If there is no common prefix, return an empty string "".*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* result = (char *)malloc(sizeof(char));
    int index=0;
    int result_index=0;
    int count=0;
    
    if (strsSize==0)
    {
        char* empty = (char *)malloc(sizeof(char));
        empty[0] = '\0';
        return empty;
    }

    for (int j=0 ; j<strlen(strs[0]) ; j++)
    {
        for (int i=0 ; i<strsSize-1 ; i++)
        {
            if(strs[i][j] == '\0' || strs[i+1][j] == '\0')
            {
                result = (char *)realloc(result, (result_index+1)*sizeof(char));result[result_index] = '\0';
                return result;
                //if any of the strings terminated
            }

            else if (strs[i][j]==strs[i+1][j])
            {
                count++;
            }
            else
            {
                result = (char *)realloc(result, (result_index+1)*sizeof(char));result[result_index] = '\0';
                return result;
            }
        }
        if (count==strsSize-1)
        {
            result = (char *)realloc(result, (result_index+1)*sizeof(char));
            result[result_index] = strs[index][j];
            result_index++;
        }
        count=0;
    } 
    result = (char *)realloc(result, (result_index+1)*sizeof(char));result[result_index] = '\0'; 
    return result;
}

int main()
{
    int strsSize;
    char **strs;
    int string_size;

    printf("Enter length of array of strings: ");
    scanf("%d", &strsSize);

    strs = malloc(strsSize * sizeof(char *));

    for (int i = 0; i < strsSize; i++)
    {
        printf("Enter size of string %d: ", i + 1);
        scanf("%d", &string_size);

        getchar();  // consume '\n' left by scanf()

        // +1 for '\0'
        strs[i] = malloc((string_size + 1) * sizeof(char));

        printf("Enter string %d: ", i + 1);
        fgets(strs[i], string_size + 1, stdin);

        // Remove newline
        strs[i][strcspn(strs[i], "\n")] = '\0';
    }

    char *results = longestCommonPrefix(strs, strsSize);

    printf("Longest Common Prefix: %s\n", results);

    // Free memory

    free(strs);
    free(results);

    return 0;
}