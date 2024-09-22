#include<stdio.h>
int main()
{
 printf("请输入您要摆放的货物信息，如 \"A 3 7 5\"表示货物A放在3号通道，单价为7元，摆放了5个(仅有5个货道，单价应小于10元，每个货道上最多摆放50个货物):"); 
    int a,b,c;//我用a表示货物所在的通道，b表示该货物的单价，c表示货物的数量。 
    char d;//d为货物的总类’ 
    int i=0;

     do{scanf(" %c %d %d %d",&d,&a,&b,&c);
    if(a>0&&a<=5&&b>0&&b<10&&c>0&&c<=50){
    
    printf("%d: ",a);
    while(i<c){printf("%c",d);i++;}printf("\t%d",b);break; 
   }else{printf("输入信息有误,请重新输入:\n");}

}while(1) ;
	return 0;
 } 
