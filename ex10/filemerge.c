#include <stdio.h>
#include<stdlib.h>
int main()
{
        int f=0;
        FILE *fp1;
        char ch;
        char text[100];
        fp1=fopen("file1.txt","r");
        if(fp1==NULL) {
                printf("Error in openning file");
                return 0;
        }
        FILE *fp2;
        fp2=fopen("file2.txt","r");
        if(fp2==NULL) {
                printf("Error in openning file");
                return 0;
        }
        FILE *fp3;
        fp3=fopen("file3.txt","w");
        if(fp3==NULL) {
                printf("Error in openning file");
                return 0;
        }
    while(!feof(fp1)){
        ch=getc(fp1);
        fputc(ch,fp3);
    }
    fclose(fp3);
    fp3=fopen("file3.txt","a");
    while(!feof(fp2)){
        ch=getc(fp2);
        fputc(ch,fp3);
        f=1;
    }
    if(f=1)
       printf("The file is merged succesfully\n");
    else
       printf("The file is not merged");
    fclose(fp3);
    fclose(fp2);
    fclose(fp1);
        return 0;
}
