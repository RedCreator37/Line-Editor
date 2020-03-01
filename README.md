# Line Editor

This folder contains the source code for a CLI text editor called
Line Editor.

## Requirements

 - Working C++ compiler, preferably g++, `make`
 - Ncurses and its panels library
 - Terminal with color support

## Compiling

To compile the program, just run `make`. You can also run `make
run` to automatically start the program afterwards.

When the compilation is done, you can start the editor with
`./lineedit filename` (supply an inexisting filename to create
a new file).

To install the program  and have it available everywhere,
just run `sudo make install`. Same for uninstalling it,
`sudo make uninstall`.

## Known bugs

 - There are currently some artificial line size limitations

## Screenshot

![Line Editor Screenshot](https://user-images.githubusercontent.com/35228139/75629682-47977200-5be4-11ea-8149-6326d38d0f81.png)
