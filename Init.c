#include "headers.h"
#include "declerations.h"
int val;
char **status;
int Init()
{
    val=101;
    status=(char**)malloc(sizeof(char*)*2);
    for(int i=0;i<2;i++)
    {
        status[i]=(char*)malloc(sizeof(char)*7);
    }
    status[0]="Success";
    status[1]="Failure";
    fptr[0]=ExitFunc;
    fptr[1]=Mainmenu;
    fptr[2]=CreateTree;
    fptr[3]=InsertNode;
    fptr[4]=DeleteNode;
    fptr[5]=TraverseTree;
    fptr[6]=DisplayTree;
    fptr[7]=allocateNode;
    return 0;
}