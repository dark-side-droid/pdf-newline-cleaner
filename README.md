# PDF Newline Cleaner
When copying text from a PDF and pasting it into a text editor, the text often contains unwanted newline characters that must be removed manually. This program automates the process by removing all newline characters from the text while preserving paragraph structure as accurately as possible.

## How It Works

1. Version 0.0.2 has been rewritten to use GTK 3 for access to the user's clipboard.
2. The program gets the latest string in the users clipboard.
3. It processes the string, identifying and replacing newline characters with spaces.
4. It attempts to detect paragraph breaks by checking for newline characters following punctuation marks.
5. The processed string is stored in a new array and placed in the clipboard.

**Note**: The paragraph detection may introduce unintended formatting changes. Always review the output for accuracy.

### Installation
If you are using Linux you can compile the program from source or install it using the provided `.deb` package. On windows you can install using `wsl`. Using a hotkey with this program is highly recommended. Add a hotkey after installation. The default installation path is in:
```
/usr/bin/pdfnc
```
To compile using `gcc` : 
```
gcc main.c -o pdfnc $(pkg-config --cflags --libs gtk+-3.0)
```

To install using `apt` and the deb file:
```
sudo apt install ./pdfnc-0.0.2-1.deb
```
remove the downloaded file 
```
rm ./pdfnc-0.0.2-1.deb
```

### Uninstall
```
sudo apt remove pdfnc
```

### Usage

Copy some formatted text from a pdf. Run the program using your assigned hotkey. Paste the cleaned text.

There is a character limit of `8192` characters of text to process. If for whatever reason you need more you need to compile the program from source after having changed the `MAXCHARS` definition to whatever you want.
