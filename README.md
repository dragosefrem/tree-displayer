# tree-displayer
C program that reads a Pascal/C source file, creates the optimal binary search tree with reserved Pascal/C keywords (succesful and unsuccesful search) by dynamic approach and prints out the tree on the screen in a sequential and discrete way. Small project made during my second year of Computer Engineering studies at Polytechnic University of Timișoara

## Running the program

The program can only be run via the command line.

To run the program, supposing you have a C or Pascal file on your system, named source.c or source.pas, located in the same folder you have the executable on, then to run the program the following commands can be executed: 
```bash
  tree-displayer source.c     or
  tree-displayer source.pas
```

Depending the version of the program that is being run, the commands will differ (for the Pascal version give a pas file, and for the C version give a C file).

After this, a new file will be generated, having the same name as the one given as second parameter to the program but with the extension .txt. 
To view the result file, simply access source.txt on your system. The file will contain statistical information about the tree generated such as: number of succesful searches, unsuccesful searches, the mean length of the perfect balanced binary tree (corresponding to the weights), and the mean length of the optimal binary tree (corresponding to the weights).

## Demo

![hippo](https://lh5.googleusercontent.com/fhVNr-xIcZx3oevRtsxJL6j1Iu9dVqrWpMpok4czRU3SHfwwvq8h8dVbNA3toCqZZGdrsEnIdE0v5Q=w1920-h505-rw)
