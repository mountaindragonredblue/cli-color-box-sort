#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

//7 colors //9 bars 2 empty // 4*7=28 box total //
//9 colors //11 bars 2 empty
//12 colors //14 bars 2 empty
//n_colors+2empty
#define not_selected       13
#define selected           14

void printbox(int h,int w,int color){

    if(!color)return;

    attron(COLOR_PAIR(color));

    for(int a=0;a<5;a++)
        mvwprintw(stdscr,h+a,w,"        ");
}

void print0(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w," 0000 ");
    mvwprintw(stdscr,h+1,w,"00  00");
    mvwprintw(stdscr,h+2,w,"00  00");
    mvwprintw(stdscr,h+3,w,"00  00");
    mvwprintw(stdscr,h+4,w," 0000 ");
}

void print1(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"1111  ");
    mvwprintw(stdscr,h+1,w,"  11  ");
    mvwprintw(stdscr,h+2,w,"  11  ");
    mvwprintw(stdscr,h+3,w,"  11  ");
    mvwprintw(stdscr,h+4,w,"111111");
}

void print2(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w," 2222 ");
    mvwprintw(stdscr,h+1,w,"22  22");
    mvwprintw(stdscr,h+2,w,"   22 ");
    mvwprintw(stdscr,h+3,w,"  22  ");
    mvwprintw(stdscr,h+4,w,"222222");
}

void print3(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w," 3333 ");
    mvwprintw(stdscr,h+1,w,"33  33");
    mvwprintw(stdscr,h+2,w,"   333");
    mvwprintw(stdscr,h+3,w,"33  33");
    mvwprintw(stdscr,h+4,w," 3333 ");
}

void print4(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"44  44");
    mvwprintw(stdscr,h+1,w,"44  44");
    mvwprintw(stdscr,h+2,w,"444444");
    mvwprintw(stdscr,h+3,w,"    44");
    mvwprintw(stdscr,h+4,w,"    44");
}

void print5(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"555555");
    mvwprintw(stdscr,h+1,w,"55    ");
    mvwprintw(stdscr,h+2,w,"55555 ");
    mvwprintw(stdscr,h+3,w,"    55");
    mvwprintw(stdscr,h+4,w,"55555 ");
}

void print6(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w," 6666 ");
    mvwprintw(stdscr,h+1,w,"66    ");
    mvwprintw(stdscr,h+2,w,"66666 ");
    mvwprintw(stdscr,h+3,w,"66  66");
    mvwprintw(stdscr,h+4,w," 6666 ");
}

void print7(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"777777");
    mvwprintw(stdscr,h+1,w,"   77 ");
    mvwprintw(stdscr,h+2,w,"  77  ");
    mvwprintw(stdscr,h+3,w," 77   ");
    mvwprintw(stdscr,h+4,w,"77    ");
}

void print8(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w," 8888 ");
    mvwprintw(stdscr,h+1,w,"88  88");
    mvwprintw(stdscr,h+2,w," 8888 ");
    mvwprintw(stdscr,h+3,w,"88  88");
    mvwprintw(stdscr,h+4,w," 8888 ");
}

void print9(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w," 9999 ");
    mvwprintw(stdscr,h+1,w,"99  99");
    mvwprintw(stdscr,h+2,w," 99999");
    mvwprintw(stdscr,h+3,w,"    99");
    mvwprintw(stdscr,h+4,w," 9999 ");
}

void print11(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"  ++  ");
    mvwprintw(stdscr,h+1,w,"  ++  ");
    mvwprintw(stdscr,h+2,w,"++++++");
    mvwprintw(stdscr,h+3,w,"  ++  ");
    mvwprintw(stdscr,h+4,w,"  ++  ");
}

void print12(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"    //");
    mvwprintw(stdscr,h+1,w,"   // ");
    mvwprintw(stdscr,h+2,w,"  //  ");
    mvwprintw(stdscr,h+3,w," //   ");
    mvwprintw(stdscr,h+4,w,"//    ");
}

void print13(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"*    *");
    mvwprintw(stdscr,h+1,w," *  * ");
    mvwprintw(stdscr,h+2,w,"******");
    mvwprintw(stdscr,h+3,w," *  * ");
    mvwprintw(stdscr,h+4,w,"*    *");
}

void print14(int h,int w,int color){
    attron(COLOR_PAIR(color));
    mvwprintw(stdscr,h  ,w,"      ");
    mvwprintw(stdscr,h+1,w,"      ");
    mvwprintw(stdscr,h+2,w,"------");
    mvwprintw(stdscr,h+3,w,"      ");
    mvwprintw(stdscr,h+4,w,"      ");
}


/* Arrange the N elements of ARRAY in random order.
 * Only effective if N is much smaller than RAND_MAX;
 * if this may not be the case, use a better random
 * number generator. */
void shuffle(int *array, size_t n){
    if (n > 1)
    {
        size_t i;
        for (i = 0; i < n - 1; i++)
        {
            size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
            int t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}

void print_game(int bars[8][4],int sel[3],int mode,time_t start){

    clear();

    printbox(1,1,bars[0][3]);
    printbox(7,1,bars[0][2]);
    printbox(13,1,bars[0][1]);
    printbox(19,1,bars[0][0]);

    printbox(1,11,bars[1][3]);
    printbox(7,11,bars[1][2]);
    printbox(13,11,bars[1][1]);
    printbox(19,11,bars[1][0]);

    printbox(1,21,bars[2][3]);
    printbox(7,21,bars[2][2]);
    printbox(13,21,bars[2][1]);
    printbox(19,21,bars[2][0]);

    printbox(1,31,bars[3][3]);
    printbox(7,31,bars[3][2]);
    printbox(13,31,bars[3][1]);
    printbox(19,31,bars[3][0]);

    printbox(1,41,bars[4][3]);
    printbox(7,41,bars[4][2]);
    printbox(13,41,bars[4][1]);
    printbox(19,41,bars[4][0]);

    printbox(1,51,bars[5][3]);
    printbox(7,51,bars[5][2]);
    printbox(13,51,bars[5][1]);
    printbox(19,51,bars[5][0]);

    printbox(1,61,bars[6][3]);
    printbox(7,61,bars[6][2]);
    printbox(13,61,bars[6][1]);
    printbox(19,61,bars[6][0]);

    printbox(1,71,bars[7][3]);
    printbox(7,71,bars[7][2]);
    printbox(13,71,bars[7][1]);
    printbox(19,71,bars[7][0]);

    printbox(1,81,bars[8][3]);
    printbox(7,81,bars[8][2]);
    printbox(13,81,bars[8][1]);
    printbox(19,81,bars[8][0]);

    if(mode>7){
    printbox(1,91,bars[9][3]);
    printbox(7,91,bars[9][2]);
    printbox(13,91,bars[9][1]);
    printbox(19,91,bars[9][0]);

    printbox(1,101,bars[10][3]);
    printbox(7,101,bars[10][2]);
    printbox(13,101,bars[10][1]);
    printbox(19,101,bars[10][0]);
    }

    if(mode>9){
    printbox(1,111,bars[11][3]);
    printbox(7,111,bars[11][2]);
    printbox(13,111,bars[11][1]);
    printbox(19,111,bars[11][0]);

    printbox(1,121,bars[12][3]);
    printbox(7,121,bars[12][2]);
    printbox(13,121,bars[12][1]);
    printbox(19,121,bars[12][0]);

    printbox(1,131,bars[13][3]);
    printbox(7,131,bars[13][2]);
    printbox(13,131,bars[13][1]);
    printbox(19,131,bars[13][0]);
    }


    print1(26,2 ,not_selected);
    print2(26,12,not_selected);
    print3(26,22,not_selected);
    print4(26,32,not_selected);
    print5(26,42,not_selected);
    print6(26,52,not_selected);
    print7(26,62,not_selected);
    print8(26,72,not_selected);
    print9(26,82,not_selected);

    if(mode>7){
    print0(26,92,not_selected);
    print11(26,102,not_selected);
    }
    if(mode>9){
    print12(26,112,not_selected);
    print13(26,122,not_selected);
    print14(26,132,not_selected);
    }

    if(sel[0]){
        attron(COLOR_PAIR(selected));

        mvwprintw(stdscr,19-(6*sel[2])-1,1+(10*sel[1])-1,"          ");
        mvwprintw(stdscr,19-(6*sel[2])+5,1+(10*sel[1])-1,"          ");
        for(int a=0;a<5;a++){
            mvwaddch(stdscr,19-(6*sel[2])+a,1+(10*sel[1])-1,' ');
            mvwaddch(stdscr,19-(6*sel[2])+a,1+(10*sel[1])+8,' ');
        }
        switch(sel[1]){
            case 0: print1(26,2 ,selected);
            break;

            case 1: print2(26,12,selected);
            break;

            case 2: print3(26,22,selected);
            break;

            case 3: print4(26,32,selected);
            break;

            case 4: print5(26,42,selected);
            break;

            case 5: print6(26,52,selected);
            break;

            case 6: print7(26,62,selected);
            break;

            case 7: print8(26,72,selected);
            break;

            case 8: print9(26,82,selected);
            break;


            case 9: if(mode>7)print0(26,92,selected);
            break;

            case 10: if(mode>7)print11(26,102,selected);
            break;

            case 11: if(mode>9)print12(26,112,selected);
            break;

            case 12: if(mode>9)print13(26,122,selected);
            break;

            case 13: if(mode>9)print14(26,132,selected);
            break;

        }
    }

    double elapsed = difftime(time(NULL),start);
    attron(COLOR_PAIR(not_selected));
    mvwprintw(stdscr,25,132,"T=%02d:%02d", (int)elapsed/60,(int)elapsed%60);
}

void handle_bars(int bars[9][4], int sel[3], int bar_n){

        if (sel[0]){    //prev selected box
            if(sel[1] == bar_n){
                sel[0]=0;//unselect if selected same bar again
                return;
            }

            if (!bars[bar_n][0]){   //empty bar
                bars[bar_n][0]=bars[sel[1]][sel[2]];
                bars[sel[1]][sel[2]]=0;
                sel[0]=0;
                return;
            }

            for(int a=1;a<4;a++){   //find next position to drop box
                if(!bars[bar_n][a] && bars[bar_n][a-1]==bars[sel[1]][sel[2]]){  //found
                    bars[bar_n][a]=bars[sel[1]][sel[2]];
                    bars[sel[1]][sel[2]]=0;
                    sel[0]=0;
                }
            }
        }
        else{       //not prev selected box
            for(int a=3;a>-1;a--){   //find uppermost box
                if(bars[bar_n][a]){//found
                    sel[0]=1; sel[1]=bar_n; sel[2]=a;
                    return;
                }
            }
        }


}

void init_bars(int bars[14][4],int box_arr[36],int mode){

        for(int a=0,c=0;a<mode;a++){
            for(int b=0;b<4;b++){

                bars[a][b]=box_arr[c];
                c++;
            }
        }

        for(int a=mode;a<mode+2;a++){
            for(int b=0;b<4;b++){

                bars[a][b]=0;

            }
        }
}

time_t new_game(int bars[11][4],int box_arr[36],int mode){
    for(int a=0,b=0;a<48;a++){
            if(!(a%4))b++;
            box_arr[a]=b;
        }

        shuffle(box_arr,mode*4);

        init_bars(bars,box_arr,mode);

        return time(NULL);
}

int main (int argc,char **argv){

    initscr();
    start_color();

    init_pair(1,COLOR_BLACK, COLOR_RED);  //(index,foreground,background)
    init_pair(2,COLOR_BLACK, COLOR_GREEN);
    init_pair(3,COLOR_BLACK, 226);  //yellow
    init_pair(4,COLOR_BLACK, COLOR_BLUE);
    init_pair(5,COLOR_BLACK, 90);
    init_pair(6,COLOR_BLACK, COLOR_CYAN);
    init_pair(7,COLOR_BLACK, 202); //darkorange

    init_pair(8,COLOR_BLACK, 234); //grey
    init_pair(9,COLOR_BLACK, 32); //skyblue

    init_pair(10,COLOR_BLACK, 231);
    init_pair(11,COLOR_BLACK, 22);
    init_pair(12,COLOR_BLACK, 213);

    init_pair(not_selected,COLOR_WHITE, COLOR_BLACK);
    init_pair(selected,COLOR_BLACK, COLOR_WHITE);

    curs_set(0); // sets the cursor to invisible

    srand(time(NULL)); // use current time as seed for random generator
    rand(); rand(); rand(); //init

    int sel[3]={0}; //selection data [0]-> 0/1 box selected true false [1] bar1-8 [2] box column
    int bars[14][4]={0};
    int box_arr[48]={0};
    int mode=0;
    time_t start;


    //int h,w; getmaxyx(stdscr, h, w);

    mvwprintw(stdscr,0,0,"Sort the colored Boxes");
    mvwprintw(stdscr,1,0,"----------------------");
    mvwprintw(stdscr,2    ,0,"Keybindings");
    mvwprintw(stdscr,3    ,0,"-----------");
    mvwprintw(stdscr,4    ,0,"1234567890+/*- -> select box");
    mvwprintw(stdscr,5    ,0,"A -> 7-Colors  Game Mode");
    mvwprintw(stdscr,6  ,0,"B -> 9-Colors  Game Mode");
    mvwprintw(stdscr,7  ,0,"C -> 12-Colors Game Mode");
    mvwprintw(stdscr,8  ,0,"R -> Retry Current Game");
    mvwprintw(stdscr,9  ,0,"Q -> Quit Game");

    while(1){

        switch(getch()){
            case '1':   handle_bars(bars,sel,0);
                        break;
            case '2':   handle_bars(bars,sel,1);
                        break;
            case '3':   handle_bars(bars,sel,2);
                        break;
            case '4':   handle_bars(bars,sel,3);
                        break;
            case '5':   handle_bars(bars,sel,4);
                        break;
            case '6':   handle_bars(bars,sel,5);
                        break;
            case '7':   handle_bars(bars,sel,6);
                        break;
            case '8':   handle_bars(bars,sel,7);
                        break;
            case '9':   handle_bars(bars,sel,8);
                        break;
            case '0':   if(mode>7)handle_bars(bars,sel,9);
                        break;
            case '+':   if(mode>7)handle_bars(bars,sel,10);
                        break;
            case '/':   if(mode>9)handle_bars(bars,sel,11);
                        break;
            case '*':   if(mode>9)handle_bars(bars,sel,12);
                        break;
            case '-':   if(mode>9)handle_bars(bars,sel,13);
                        break;

            case 'a':   mode=7;
                        start=new_game(bars,box_arr,mode);
                        break;
            case 'b':   mode=9;
                        start=new_game(bars,box_arr,mode);
                        break;
            case 'c':   mode=12;
                        start=new_game(bars,box_arr,mode);
                        break;
            case 'r':   init_bars(bars,box_arr,mode);
                        break;

            case 'q':   endwin();
                        return 0;

            default :
                        break;

        }
          print_game(bars,sel,mode,start);
    }

}
