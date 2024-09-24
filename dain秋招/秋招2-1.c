#include<stdio.h> 
int main(){
char A[30];//货物种类 
int B[10],C[10]={0,0,0,0,0},D[10];//通道、数目、单价
 printf("请输入您要摆放的货物信息，如输入\"A 3 5 7\"表示\"摆放了5个A货物在3号通道上，单价为7元\",输入END以结束摆放(此售货机仅有五个通道，货物单价应不大于10元，且一个货道最多摆放50个货物)。\n请输入：\n") ;
 int i1=0;
 for(i1=0;i1<5;i1++){
 	scanf("%s",&A[i1]) ;//我发现此处输入两个字符，第二个字符会被读入A的下一位 
 	
 	if(A[i1]=='E'&&A[i1+1]=='N'&&A[i1+2]=='D'){break;};
 	scanf("%d %d %d",&B[i1],&C[i1],&D[i1]);
 	if(B[i1]>5||B[i1]<0||C[i1]<0||C[i1]>50||D[i1]>10||D[i1]<0||B[i1]==B[i1-1]) {i1--;printf("请确保您输入的信息在有效范围内，不要对同一通道进行重复摆放：\n");
	 }
 }
 printf("货物已摆放完毕。");
 char E[50];
 int b,c; 
 int i2=0;
int i3=0;
 int total=0;//总价 
 char Q='Y';
 while(Q=='Y') {printf("请输入您要购买的货物信息(A 3 1表示购买1个3号通道的货物A):\n");
 while(1){
 	scanf("%s",&E[i2]);
 	if(E[i2]=='E'&&E[i2+1]=='N'&&E[i2+2]=='D'){break;};
 	scanf("%d %d",&b,&c);
 	 
 	for(i3=0;i3<=i1;i3++){if(b==B[i3]) break;
	 }
	  if(E[i2]==A[i3]) {
	  	if(c<=C[i3]){C[i3]-=c;total+=D[i3] *c;
		  }
	  	else{printf("货物数量不够，请再次输入：");
		  }
	  }
	 else{
	  printf("该货架上未能找到该货物，请再次输入：");continue;} 
	  
 }
   printf("您需支付%d元(仅支持1元、2元、5元的投币方式)\n请支付：",total);
  int amount=0;int x=0;//amount表示总共付的钱，x表示每次付的钱 
     int i=0;//我在此处用i表示投币的次数 
    while(amount<total){
        scanf("%d",&x);if(x==1||x==2||x==5){i++;printf("第%d次投币%d元。\n",i,x);amount+=x;x=0;}else{printf("您投币方式错误，请重新投币。\n");continue;}
    if(amount<total){
    printf("你的钱不够，请继续投币：\n");     }
    } 
    int change=amount-total;//chamge表示应找的零钱 
    if(amount>total){
	printf("此时金额足够，执行找零，找您%d元。\n",change) ;}
    if(amount==total){
	printf("您已支付相应的金额，无找零。\n");}
	total=0; 
	 if(C[0]==0&&C[1]==0&&C[2]==0&&C[3]==0&&C[4]==0){printf("货物已售完,") ;break;
	  }
   else{
   printf("是否继续购买？请输入Y(yes)或N(no):") ;
	scanf(" %c",&Q);}
}
    

 printf("谢谢惠顾。"); 
 return 0; 
}
