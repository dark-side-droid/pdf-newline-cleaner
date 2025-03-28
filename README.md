# PDF Newline Cleaner
When copying text from a PDF and pasting it into a text editor, the text often contains unwanted newline characters that must be removed manually. This program automates the process by removing all newline characters from the text while preserving paragraph structure as accurately as possible.

## How It Works

1. The program prompts the user to input text, which is stored in an array.
2. It processes the array, identifying and replacing newline characters with spaces.
3. It attempts to detect paragraph breaks by checking for newline characters following punctuation marks.
4. The cleaned text is stored in a new array and displayed in the terminal.

**Note**: The paragraph detection may introduce unintended formatting changes. Always review the output for accuracy.

### Installation
If you are using Linux you can compile the program from source or install it using the provided `.deb` package. On windows you can install using `wsl`.

#### Linux
To compile using `gcc` : 
```
gcc main.c -o pdfnc
```

To install using `apt` :
```
sudo apt install ./pdfnc-0.0.1-1.deb
```

#### Windows:
To install using `wsl` for windows use the following guide to [setup wsl](https://learn.microsoft.com/en-us/windows/wsl/setup/environment). Then download the `deb` file using `wget`:
```
wget https://github.com/dark-side-droid/pdf-newline-cleaner/releases/download/v0.0.1-1/pdfnc_0.0.1-1_amd64.deb
```
Install :
```
sudo apt install ./pdfnc_0.0.1-1_amd64.deb
```
Remove downloaded file.
```
rm pdfnc_0.0.1-1_amd64.deb
```

### Usage
Run the program and paste your text. Press `Enter`, followed by `CTRL + D` on Linux or `CTRL + Z` then `ENTER` on Windows to start processing.
```terminal
$ pdfnc
Paste your text, press enter followed by CTRL + D for the processing to begin
==================
The fields of data structures and algorithms are too large to be corralled by
one book (or by this one author!). I used three criteria to help me decide
what topics made the cut.
First, I chose topics of broad applicability: each can be used to solve not
only the corresponding problems in the book but many other problems as
well. In each chapter, I focus on at least two problems. I generally use the
first problem to introduce the data structure or algorithm and one of its
prototypical uses. The other problems are meant to give a sense of what else
the data structure or algorithm can do. For example, in Chapter 6, we study
Dijkstra’s algorithm. If you google it, you’ll see that Dijkstra’s algorithm is
used to find shortest paths. Indeed, in the first problem of the chapter, we use
it for that very purpose. However, in the second problem, we go further,
tweaking Dijkstra’s algorithm to find not only the shortest path but also the
number of shortest paths. I hope that, as you progress through each chapter,
you learn more and more about the affordances, constraints, and subtleties of
each technique.
Second, I chose topics whose implementation did not overwhelm the
surrounding discussion. I wanted the solution to any problem to top out at
around 150 lines. That includes reading the input, solving the problem itself,
and producing the output. A data structure or algorithm whose
implementation took 200 or 300 lines was for practical reasons not suitable.

RESULTS: (1480/8192 characters)
=================
The fields of data structures and algorithms are too large to be corralled by one book (or by this one author!). I used three criteria to help me decide what topics made the cut.
First, I chose topics of broad applicability: each can be used to solve not only the corresponding problems in the book but many other problems as well. In each chapter, I focus on at least two problems. I generally use the first problem to introduce the data structure or algorithm and one of its prototypical uses. The other problems are meant to give a sense of what else the data structure or algorithm can do. For example, in Chapter 6, we study Dijkstra’s algorithm. If you google it, you’ll see that Dijkstra’s algorithm is used to find shortest paths. Indeed, in the first problem of the chapter, we use it for that very purpose. However, in the second problem, we go further, tweaking Dijkstra’s algorithm to find not only the shortest path but also the number of shortest paths. I hope that, as you progress through each chapter, you learn more and more about the affordances, constraints, and subtleties of each technique.
Second, I chose topics whose implementation did not overwhelm the surrounding discussion. I wanted the solution to any problem to top out at around 150 lines. That includes reading the input, solving the problem itself, and producing the output. A data structure or algorithm whose implementation took 200 or 300 lines was for practical reasons not suitable.
```
