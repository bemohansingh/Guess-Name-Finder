#include<windows.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int lno=0,cnt=1,b[39],r[39],c[39],i=0,j=0,view=0;
char ans='y';
while(ans=='y' || ans =='Y')
{
printf("think any name or number or its combination\n\n");
system("pause");
    do
    {
        alpha();
        printf("\n\n");
        if(lno!=0 && lno<=5)
        {
            printf("%d ",lno);
        }
        if(cnt==1)
        {
            strcpy(b,"FIRST");
        }
        else if(cnt==2)
        {
           strcpy(b,"SECOND");
        }
        else if(cnt==3)
        {
           strcpy(b,"THIRD");
        }

   if(cnt<=3)
printf("\n\nenter the line number of where %s alphabet is placed (note: if done press 0 zero)>>",b);
else
printf("\n\nenter the line number of where %dth alphabet is placed (note: if done press 0 zero)>>",cnt);
scanf("%d",&r[cnt]);
system("cls");
cnt++;
    }while(r[cnt-1]!=0);
system("cls");
fflush(stdin);
lno=1;

do
{
    printf("1 >> A G M S Y 4\n\n");
    printf("2 >> B H N T Z 5\n\n");
    printf("3 >> C I O U 0 6\n\n");
    printf("4 >> D J P V 1 7\n\n");
    printf("5 >> E K Q W 2 8\n\n");
    printf("6 >> F L R X 3 9\n\n");

        if(lno==1)
        {
            strcpy(b,"FIRST");
        }
        else if(lno==2)
        {
           strcpy(b,"SECOND");
        }
        else if(lno==3)
        {
           strcpy(b,"THIRD");
        }
fflush(stdin);
   if(lno<=3)
printf("\n\nenter the line number of where %s alphabet is placed (note: if done press 0 zero)>>",b);
else
printf("\n\nenter the line number of where %dth alphabet is placed (note: if done press 0 zero)>>",lno);
fflush(stdin);
scanf("%d",&c[lno]);
system("cls");

   lno++;
}while(c[lno-1]!=0);
int aa,bb;
system("cls");
lno=1;
while(lno<cnt-1)
{
    aa=r[lno];
    bb=c[lno];
    if((64+(aa-1)*6+bb)>90)
    view=47+64+(aa-1)*6+bb-90;
    else
    view=64+(aa-1)*6+bb;
printf("%c",view);
lno++;
}
printf("\n\n\nTHIS IS YOUR THINK \n\n\n");
printf("play again press 'y or Y' other wise press other any key >> ");
ans=getch();
system("cls");

}
    }
void alpha();
void alpha()
{
  int a[39],i=1,cnt=0;
    a[1]=65;

    while(i<=36)
    {
         if(i>26)
         {
        a[i]=47+i-26;
         }
        else
        {
        a[i]=a[1]+i-1;
        }

        if(i>6*cnt)
        {

            printf("\n\n%d >>   ",cnt+1);
            cnt++;


        }
        else
        {
            printf(" ");
        }

        printf("%c",a[i]);
        i++;
    }
    }



