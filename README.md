# cli-color-box-sort
ncurses based color sort puzzle game inspired by "Water Color Sort , ball sort"

# Requirements
256-color supported terminal
ncurses library

compile with "gcc -lcurses main.c -o cli-color-box-sort"


![Screenshot_20230630_204637](https://github.com/mountaindragonredblue/cli-color-box-sort/assets/138247749/a0925a06-16b3-4a12-b266-5d1907ba09df)


maybe define your own colors, just change the number in
init_pair(7,COLOR_BLACK, 130); //130 darkorange 
in some index number from the xterm color table
