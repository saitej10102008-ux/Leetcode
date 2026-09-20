#include <stdio.h> 
#include <stdlib.h>
int main (void) { 
    char board[9][9], nums[9]; 
    int index;
    printf("Enter Sudoku board: \n");
    for (int i=0; i<9; i++) { 
        for (int j=0; j<9; j++) { 
            scanf(" %c", &board[i][j]);
        }
    }
    for (int i=0; i<9; i++) { 
        for (int j=0; j<9; j++) { 
            for (int k=j+1; k<9; k++) {  
                if (board[i][j]!='.' && board[i][k]!='.') { 

                    if (board[i][j]==board[i][k]) { 
                        printf("Invalid sudoku\n");
                        exit(0);
                    }
                }
                    if (board[j][i]!='.' && board[k][i]!='.') { 

                    if (board[j][i]==board[k][i]) { 
                        printf("Invalid sudoku\n");
                        exit(0);
                    }

                }
            }
        }
    }

for (int boxRow=0; boxRow<9; boxRow+=3) { 
    for (int boxCol=0; boxCol<9; boxCol+=3) { 
        index=0;
        for (int i=boxRow; i<boxRow+3; i++) { 
            for (int j=boxCol; j<boxCol+3; j++) {  
                nums[index]=board[i][j]; 
                index++;
            }
        }
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (nums[i]!='.' && nums[j]!='.') {
                if (nums[i] == nums[j]) {
                    printf("Invalid sudoku"); 
                    exit(0);
                }
                }
            }
        }
        
    }
}
    printf("valid sudoku");

    return 0;
}
