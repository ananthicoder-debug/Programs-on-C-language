//head
#include<stdio.h>
void matmul(int r1,int c1,int c2,int[][c1],int[][c2],int[][c2]);
void add(int r1,int c1,int[][c1],int[][c1],int[][c1]);
//void display(int,int,int,int[][c1],int[][c2]);
//imp
#include"mulhead.h"
void matmult(int r1,int c1,int c2,int m1[][c1],int m2[][c2],int m3[][c2])
{
        int i,j,k;
        for(i=0; i<r1; i++) {
                for(j=0; j<c2; j++) {
                        m3[i][j]=0;
                        for(k=0; k<c1; k++) {
                                m3[i][j]+=m1[i][k]*m2[k][j];
                        }
                }

        }
}
void add(int r1,int c1,int m1[][c1],int m2[][c1],int ad[][c1])
{
        int i,j;
        for(i=0; i<r1; i++) {
                for(j=0; j<c1; j++) {
                        ad[i][j]=m1[i][j]+m2[i][j];
                }
        }
}
//app
#include"mulhead.h"
int main()
{
        int r1,r2,c1,c2,i,j,k,ch,f;
        printf("Enetr the dimension of the matrix 1:");
        scanf("%d %d",&r1,&c1);
        printf("Enter the elements one by one: ");
        int m1[r1][c1],ad[r1][c1];
        for(i=0; i<r1; i++) {
                for(j=0; j<c1; j++)
                {
                        scanf("%d",&m1[i][j]);
                }
        }
        printf("Enter the dimension of the matrix 2:");
        scanf("%d %d",&r2,&c2);
        int m2[r2][c2],m3[r1][c2];
        printf("Enter the elements one by one: ");
        for(i=0; i<r2; i++) {
                for(j=0; j<c2; j++)
                {
                        scanf("%d",&m2[i][j]);
                }
        }
        printf("Menu for array opperations\n");
        printf("1.Multiply\n2.Add\n");
        do {
                printf("Enter your choice:");
                scanf("%d",&ch);
                switch(ch) {
                case 1:
                        matmult(r1,c1,c2,m1,m2,m3);
                        f=1;
                        printf("Multiplied matrix\n");
                        for(i=0; i<r1; i++) {
                                for(j=0; j<c2; j++) {
                                        printf("%d\t",m3[i][j]);
                                }
                                printf("\n");
                        }
                        break;
                case 2:
                        printf("Added matrix\n ");
                        if(r1==r2&&c1==c2) {
                                add(r1,c1,m1,m2,ad);
                                for(i=0; i<r1; i++) {
                                        for(j=0; j<c1; j++) {
                                                printf("%d\t",ad[i][j]);
                                        }
                                        printf("\n");
                                }
                        }
                        else {
                                printf("Enter a valid dimension");
                        }
                        break;
                default:
                        printf("Enter a valid imput");
                        break;
                }
        }
        while(ch>3);
        return 0;
}
ex5m:ex5mimp.o ex5mapp.o
        cc ex5mimp.o ex5mapp.o -o ex5m
ex5mimp.o:ex5mimp.c ex5mhead.h
        cc -c ex5mimp.c
ex5mapp.o:ex5mapp.c ex5mhead.h
        cc -c ex5mapp.c
}
//app
