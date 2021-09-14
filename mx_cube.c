#include <stdio.h>

void mx_printchar (char);

void mx_cube(int n){
    char space = ' ';
    char pluse = '+';
    char slash = '/';
    char dash = '-';
    char straight = '|';
    int hight;
    int width;
    hight = n + 3 + (n / 2); 
    // hight (hight of matrix) = n (size of cube or num of '|') + 3 (num of '+') + (n / 2)(num of '/')
    width = 3 + (n / 2) + (n * 2); 
    // width (width of matrix) = 3 (num of  '+') + (n / 2) (num of '/') + (n * 2) (num of '-')
    const int top_line = 1;
    const int low_line = hight;
    const int mid_top_line = 1 + (n /2) + 1;
    const int mid_low_line = low_line - (n / 2) - 1;

    //drawing
    int i = 1;
    while (i <= hight){
        if (n <= 1){
            break;
        }
/////////////////////////
//   +----------+$
/////////////////////////
        if (i == top_line){
            int j = 1;
            while (j <= width){
                while  (j < (n / 2) + 2){
                    mx_printchar(space);
                    j++;
                }
                if (j == (n / 2) + 2){
                    mx_printchar(pluse);
                    j++;
                }
                while (j > (n / 2) + 2 && j < width){
                    mx_printchar(dash);
                    j++;
                }
                if (j == width){
                    mx_printchar(pluse);
                    mx_printchar('\n');

                    j++;
                }               
            }
            i++;
        }
////////////////////////
//   +----------+$
//  /          /|$
// /          / |$ 
////////////////////////     
        else if (i > top_line && i < mid_top_line){
            int j = 1;
            while (j <= width){
                while  (j < (n / 2)  + 3 - i){
                    mx_printchar(space);
                    j++;
                }
                if (j==(n / 2) + 3 - i){
                    mx_printchar(slash);
                    j++;
                }
                while (j > (n / 2) + 3 - i && j < (n * 2) + (n /2) + 4 - i){
                    mx_printchar(space);
                    j++;
                }
                if(j == (n * 2) + (n / 2)+4 - i){
                    mx_printchar(slash);
                    j ++;
                }
                while(j > (n * 2) + 6 - i && j < width){
                    mx_printchar(space);
                    j ++;
                }
                if(j == width){
                    mx_printchar(straight);
                    mx_printchar('\n');
                    j ++;
                }
            }
            i++;
        }
/////////////////////////
//   +----------+$
//  /          /|$
// /          / |$
//+----------+  |$
/////////////////////////
        if (i == mid_top_line){
            int j = 1;
            while (j <= width){
                if (j == 1){
                    mx_printchar(pluse);
                    j++;
                }
                while(j > 1 && j < (n * 2) + 2){
                    mx_printchar(dash);
                    j++;
                }
                if (j == (n * 2) + 2){
                    mx_printchar(pluse);
                    j++;
                }
                while (j > (n * 2) + 2 && j < width){
                    mx_printchar(space);
                    j++;
                }
                if(j == width){
                    mx_printchar(straight);
                    mx_printchar('\n');
                    j++;
                }
                i++;
            }
        }
/////////////////////////
//   +----------+$
//  /          /|$
// /          / |$
//+----------+  |$
//|          |  |$
//|          |  |$
/////////////////////////
        else if (i > mid_top_line && i < mid_low_line){
            int j = 1;
            while (j <= width){
                if(j == 1){
                    mx_printchar(straight);
                    j++;
                }
                while(j > 1 && j < (n * 2) + 2){
                    mx_printchar(space);
                    j++;
                }
                if(j == (n * 2) + 2){
                    mx_printchar(straight);
                    j++;
                }
                while (j > (n * 2) + 2 && j < width){
                    mx_printchar(space);
                    j++;
                }
                if (j == width){
                    mx_printchar(straight);
                    mx_printchar('\n');
                    j++;;
                }
                i++;
            }
        }
/////////////////////////
//   +----------+$
//  /          /|$
// /          / |$
//+----------+  |$
//|          |  |$
//|          |  |$
//|          |  +$
/////////////////////////
        else if (i == mid_low_line){
            int j = 1;
            while(j <= width){
                if (j == 1){
                    mx_printchar(straight);
                    j++;
                }
                while(j > 1 && j < (n * 2) + 2){
                    mx_printchar(space);
                    j++;
                }
                if (j == (n * 2) + 2){
                    mx_printchar(straight);
                    j++;
                }
                while (j > (n * 2) + 2 && j < width){
                    mx_printchar(space);
                    j++;
                }
                if(j == width){
                    mx_printchar(pluse);
                    mx_printchar('\n');
                    j++;
                }
                i++;
            }
        }
/////////////////////////
//   +----------+$
//  /          /|$
// /          / |$
//+----------+  |$
//|          |  |$
//|          |  |$
//|          |  +$
//|          | /$
//|          |/$
/////////////////////////        
        else if (i > mid_low_line && i < low_line){
            int j = 1;
            while (j <= width){
                if (j == 1){
                    mx_printchar(straight);
                    j++;
                }
                while(j > 1 && j < (n * 2) + 2){
                    mx_printchar(space);
                    j++;
                }
                if (j == (n * 2) + 2){
                    mx_printchar(straight);
                    j++;
                }
                while(j > (n * 2) + 2 && j < ((n * 2) + 2) + hight - i ){
                    mx_printchar(space);
                    j++;
                }
                if(j == ((n * 2) + 2) + hight - i){
                    mx_printchar(slash);
                    mx_printchar('\n');
                    j++;
                    width--;
                }
            }
            i++;
        }
/////////////////////////
//   +----------+$
//  /          /|$
// /          / |$
//+----------+  |$
//|          |  |$
//|          |  |$
//|          |  +$
//|          | /$
//|          |/$
//+----------+$
/////////////////////////
        else if (i == low_line){
            int j = 1;
            width = (n *2) + 2;
            while (j <= width){
                if (j == 1){
                    mx_printchar(pluse);
                    j++;
                }
                while (j > 1 && j < width){
                    mx_printchar(dash);
                    j++;
                }
                if (j == width){
                    mx_printchar(pluse);
                    mx_printchar('\n');
                    j++;
                }  
            }
            i++;
        }
    }
}

/*int main(){
    mx_cube(100);
    return 0;
}*/







