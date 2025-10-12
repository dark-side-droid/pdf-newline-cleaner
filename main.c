#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>

/*
    PDF Newline Cleaner version 0.0.2-1

    This program is better run using a hotkey

    The program runs and gets latest string on the users clipboard.

    Then it processes that string looking for the newline character. If it finds it
    it replaces it with a space character. 
    
    It tries to understand whether a paragraph exists by looking for
    newline characters following punctuation. 
    
    Please note that this sometimes results in paragraphs
    that were not there in the original text. Check the results to correct any errors.

    It then saves the result to a new string and sets it as the latest thing on the clipboard.
*/

#define MAXCHARS 8192

int copyarr(char *arrA, char *arrB, int length);

int main(int argc, char **argv) {
    gtk_init(&argc, &argv);

    GtkClipboard *clipboard = gtk_clipboard_get(GDK_SELECTION_CLIPBOARD);

    // Get current clipboard, find its length
    gchar *current_text = gtk_clipboard_wait_for_text(clipboard);
    int len = strlen(current_text);

    // create a new array, reset it, and pass both to copyarr
    char edited_text[len];
    for(int i = 0; i < len; i++)
        edited_text[i] = 0;

    copyarr(current_text, edited_text, len + 1); // requires + 1

    printf("%s\n", edited_text);

    // Set clipboard
    gtk_clipboard_set_text(clipboard, edited_text, -1);

    system("notify-send -i edit-paste-symbolic 'Clipboard Updated' 'PDF Formatting cleared by pdf-newline-cleaner'");

    // Run a short main loop to let GTK serve clipboard
    g_timeout_add_seconds(1, (GSourceFunc)gtk_main_quit, NULL);

    gtk_main();

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
                arrB[i] = arrA[i];
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