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
If you are using Linux you can compile the program from source or install it using the provided `.deb` package. On windows you can install using `wsl`. Using a hotkey with this program is highly recommended. Add a hotkey after installation. The default installation path is in 
```
/usr/bin/pdfnc
```

#### Linux
To compile using `gcc` : 
```
gcc main.c -o pdfnc
gcc main.c -o pdfnc $(pkg-config --cflags --libs gtk+-3.0)
```

To install using `apt` and the deb file:
```
sudo apt install ./pdfnc-0.0.2-1.deb
```

#### Windows:
To install using `wsl` for windows use the following guide to [setup wsl](https://learn.microsoft.com/en-us/windows/wsl/setup/environment). Then download the `deb` file using `wget`:
```
wget https://github.com/dark-side-droid/pdf-newline-cleaner/releases/download/v0.0.1-1/pdfnc_0.0.1-1_amd64.deb
```
Install :
```
sudo apt install ./pdfnc_0.0.2-1_amd64.deb
```
Remove downloaded file.
```
rm pdfnc_0.0.2-1_amd64.deb
```

### Usage

Copy some formatted text from a pdf. Run the program using your assigned hotkey. Paste the cleaned text.
