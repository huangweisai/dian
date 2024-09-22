#include<stdio.h> 
int main()
{
    printf("请输入您要摆放的货物信息，如 \"A 3 7 5\"表示货物A放在3号通道，单价为7元，摆放了5个:"); 
    int a,b,c;//我用a表示货物所在的通道，b表示该货物的单价，c表示货物的数量。 
    char d;//d为货物的总类’ 
    int i=0;

     do{scanf(" %c %d %d %d",&d,&a,&b,&c);
    if(a>0&&a<=5&&b>0&&b<10&&c>0&&c<=50){
    
    printf("%d: ",a);
    while(i<c){printf("%c",d);i++;}printf("\t%d\n",b);break; 
   }else{printf("输入信息有误，请重新输入:\n");
    }
    }
    while(1);
    int total;
    
    printf("请输入您所购商品的总金额：") ;
    while(1){
	scanf("%d",&total) ;
	if(total<=b*c){break;
	}else{printf("货道上的货物少于您购买的数目，请重新输入金额："); 
	}
	
	}
	printf("请投币：\n");
    int amount=0;int x=0;//amount表示总共付的钱，x表示每次付的钱 
     i=0;//我在此处用i表示投币的次数 
    while(amount<total){
        scanf("%d",&x);if(x==1||x==2||x==5){i++;printf("第%d次投币%d元。\n",i,x);amount+=x;x=0;}else{printf("您投币错误，请重新投币:\n");continue;}
    if(amount<total){
    printf("你的钱不够，请继续投币。\n");     }
    } 
    int change=amount-total;//chamge表示应找的零钱 
    if(amount>total)printf("此时金额足够，执行找零，找您%d元。",change) ;
    if(amount==total)printf("您已支付相应的金额，无找零。");
    return 0;
    
}
