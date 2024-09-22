#include<stdio.h> 
int main()
{
    printf("请输入您要摆放的货物信息，如 \"A 3 7 5\"表示货物A放在3号通道，单价为7元，摆放了5个:"); 
    int a1,b,c;//我用a表示货物所在的通道，b表示该货物的单价，c表示货物的数量。 
    char d1;//d1为货物的总类’ 
    int i=0;

     do{scanf(" %c %d %d %d",&d1,&a1,&b,&c);
    if(a1>0&&a1<=5&&b>0&&b<10&&c>0&&c<=50){
    
    printf("%d: ",a1);
    while(i<c){printf("%c",d1);i++;}printf("  %d\n",b);break; 
   }else{printf("此售货机仅有5个通道，且每个通道最多摆放50个货物，请确保您输入的通道序号、单价、数目正确\n请重新输入：");
    }
    }
    while(1);
    int total;//
    int times=0;
    int a2;
    char d2;
    int next=0;//我用next判断用户是否继续购买货物 
    while(c>0){
	printf("请输入您所要购买货物种类，所在通道以及购买数量(例如A 3 1表示购买3号通道的A货物，买1个):") ; 
    while(1){
	scanf(" %c %d %d",&d2,&a2,&times);
    if(d2==d1&&a2==a1&&times<=c){printf("请投币(仅支持1元、2元、5元的投币方式):");break;}
    else{printf("此时通道%d上有%d件货物%c\n请输入正确的货物种类、其所在通道，并确认您的购买数量不大于货架上已有货物的数量：",a1,c,d1);} 
    }
    total=b*times;
    int amount=0;int x=0;//amount表示总共付的钱，x表示每次付的钱 
     i=0;//我在此处用i表示投币的次数 
    while(amount<total){
        scanf("%d",&x);if(x==1||x==2||x==5){i++;printf("第%d次投币%d元。\n",i,x);amount+=x;x=0;}else{printf("您投币方式错误，请重新投币。\n");continue;}
    if(amount<total){
    printf("你的钱不够，请继续投币。\n");     }
    } 
    int change=amount-total;//chamge表示应找的零钱 
    if(amount>total)printf("此时金额足够，执行找零，找您%d元。\n",change) ;
    if(amount==total)printf("您已支付相应的金额，无找零。\n");
    c-=times;
    if(c==0) {printf("货物已售完，谢谢使用。");break; 
	}
    printf("购买成功，输入任意数字以继续购买，若要结束购买，请输入1:"); 
    scanf("%d",&next); 
    if(next==1){printf("谢谢使用。");break; 
	}
	}
    return 0;
}
