# pdf-newline-cleaner
This program asks for user input then saves it to a new array.

Then it processes the array, looking for the newline character. If it finds it it replaces it with a space character. 
    
It tries to understand whether a paragraph exists by looking for newline characters following punctuation. 
    
Please note that this sometimes results in paragraphs that were not there in the original text. Check the results to correct any errors. It then saves the result to a new array and prints it to the user via terminal.

### Installation
Compile from source  or use the `.deb` file found in Releases.

### Usage
Example of usage : 
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
