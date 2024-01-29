#include <stdio.h>
#include <stdlib.h>

int findMatrix(char Matrix[5][5],int Colomun, int Line){
    int numOne=0,numTwo=0,restiredArea=0;
    char value;
    
    
    if (Colomun<0 || Colomun>4 || Line<0 || Line>4 || Matrix[Colomun][Line]=='M' ||Matrix[Colomun][Line]=='O'){
        return 0 ;
    }
    
   Matrix[Colomun][Line]='M';
   findMatrix(Matrix,Colomun + 1, Line);
    findMatrix(Matrix,Colomun , Line+ 1);
    findMatrix(Matrix,Colomun - 1, Line);
    findMatrix(Matrix,Colomun , Line - 1);
    
	restiredArea++;
	return restiredArea;
}
int main()
{
    char matrix[5][5]={
            
                    {'O', 'O', 'O', 'O', 'O'},
                    {'X', 'X', 'O', 'X', 'X'},
                    {'X', 'X', 'O', 'X', 'X'},
                    {'X', 'X', 'O', 'X', 'X'},
                    {'O', 'O', 'O', 'O', 'O'}
            };
    
  
    int colomun=0,line=0,area=0;
    
  
    for(colomun;colomun<5;colomun++){
        for(line=0;line<5;line++){
            if(matrix[colomun][line]=='X'){
                area+=findMatrix(matrix,colomun,line);
               
            }
        }
    }
    printf("The Number of restireced area is %d",area);
    return 0;
}
