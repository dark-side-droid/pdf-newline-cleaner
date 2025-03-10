#include <stdio.h>

#define MAXCHARS 8192

int copyarr(char *arrA, char *arrB, int length);

/*
    PDF Newline Cleaner version 0.0.1-1

    This program asks for user input then saves it to a new array.

    Then it processes the array, looking for the newline character. If it finds it
    it replaces it with a space character. 
    
    It tries to understand whether a paragraph exists by looking for
    newline characters following punctuation. 
    
    Please note that this sometimes results in paragraphs
    that were not there in the original text. Check the results to correct any errors.

    It then saves the result to a new array and prints it to the user via terminal.
*/

int main(void)
{
    // Initialize the array
    char arr[MAXCHARS];
    for (int i = 0; i < MAXCHARS; i++)
        arr[i] = 0;

    printf("Paste your text, press enter followed by CTRL + D for the processing to begin\n==================\n");

    // Get user input
    int i = 0;
    char c;
    while((c = getchar()) != EOF)
    {
        arr[i] = c;
        i++;
    }

    // Initialize second arr, copy and process it
    char newarr[i];
    for (int j = 0; j < i; j++)
        newarr[j] = 0;
    
    int result = copyarr(arr, newarr, i);
    if (result != 0)
    {
        printf("Something went wrong\n");
        return 1;
    }

    // Print the resuls to the user
    printf("\nRESULTS: (%i/8192 characters)\n=================\n", i);
    printf("%s\n", newarr);
    
    // Exit succesfully
    return 0;
}

int copyarr(char *arrA, char *arrB, int length)
{
    int i = 0;
    while (i < length)
    {
        // ASCII 10 = newline character
        if (arrA[i] != 10)
        {
            // Punctuation Heuristic followed by new line character
            if ((arrA[i] == '.' || arrA[i] == '!' || arrA[i] == '?') && arrA[i + 1] == '\n')
            {
                arrB[i] = arrA[i];
                arrB[i + 1] = '\n';
                i++;
            }
            else
            {
                arrB[i] = arrA[i];
            }
        }
        else
            arrB[i] = ' ';
        
        i++;
    }

    // Add NUL terminating character and return
    i--;
    arrB[i] = '\0';

    return 0;
}