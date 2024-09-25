#include<stdio.h> 
int main()
{
char A[50];//货物种类 
int B[10],C[5]={0,0,0,0,0},D[10];//通道、数目、单价
 printf("请输入您要摆放的货物信息，如输入\"A 3 5 7\"表示\"摆放了5个A货物在3号通道上，单价为7元\",输入END以结束摆放(此售货机仅有五个通道，货物单价应不大于10元，且一个货道最多摆放50个货物)。\n请输入：\n") ;
 int i1=0;int cnt=0;
 for(i1=0;i1<5;i1++){
 	scanf("%s",&A[i1]) ;//我发现此处输入两个字符，第二个字符会被读入A的下一位 
 	if(A[i1]=='E'&&A[i1+1]=='N'&&A[i1+2]=='D'){break;};
 	if(A[i1]=='B'&&A[i1+1]=='A'&&A[i1+2]=='C'&&A[i1+3]=='K'){if(cnt<3){
	 cnt++;i1-=2;printf("您已撤销上一步操作，您还有%d次撤销机会。\n",3-cnt);
	 }else{printf("抱歉，您的撤销次数已用尽,无法撤销。");i1--; 
	 }
	}
 	
 	scanf("%d %d %d",&B[i1],&C[i1],&D[i1]);
 	if(B[i1]>5||B[i1]<0||C[i1]<0||C[i1]>50||D[i1]>10||D[i1]<0||B[i1]==B[i1-1]||B[i1]==B[i1-2]||B[i1]==B[i1-3]||B[i1]==B[i1]-4) {i1--;printf("请确保您输入的信息在有效范围内，不要对同一通道进行重复摆放：\n");
	 }
 }
 printf("货物已摆放完毕。");

 char a[50][5];int b[50]={0},c[50]={0};//种类，通道，数目
 int i2=0;int total=0;int i;char Q='Y';
 while(Q=='Y'){
  printf("请输入您要购买的货物信息(A 3 1表示购买了3号通道的货物A，买一个)：\n");
 while(1){
 scanf("%s",&a[i2][0]) ;
 if(a[i2][0]=='E'&&a[i2][1]=='N'&&a[i2][2]=='D'){a[i2][0]=0,a[i2][1]=0,a[i2][2]=0;break;
 }
 if(a[i2][0]=='B'&&a[i2][1]=='A'&&a[i2][2]=='C'&&a[i2][3]=='K'){
 	if(cnt<3){cnt++;
	 printf("您已撤销上一步操作，剩余%d次撤销机会。",3-cnt);total-=c[i2-1]*D[i];C[i]+=c[i2-1];i2-=1;continue;
	}else{printf("您的撤销机会已用尽，无法撤销。"); continue;
	}
 }
 scanf("%d %d",&b[i2],&c[i2]);
 
 for(i=0;i<=i1;i++){if(b[i2]==B[i]){break;
 }
 }
 if(a[i2][0]==A[i]){
 	if(c[i2]<=C[i]){C[i]-=c[i2];
	 }else{printf("货物不够，请重新输入");continue ;
	 }
 }else{printf("在该货架上未能找到该商品，请重新输入");continue; 
 }total+=c[i2]*D[i];
 i2++;
 if (C[0]==0&&C[1]==0&&C[2]==0&&C[3]==0&&C[4]==0){printf("货物已售完。") ; break;
 }
 }

 printf("您需支付%d元,请投币支付（仅支持1元、2元、5元的投币方案）：\n",total);
 int totalpay=0;
 char d1[50][5];//以字符暂时储存用户每次的投币金额
 int  d2[50] ={0};//用户的 金额 
  int i3=0;
  while(totalpay<total){
  	
  	scanf("%s",&d1[i3][0]) ;d2[i3]=d1[i3][0]-'0';
  	if (d1[i3][0]=='B'&&d1[i3][1]=='A'&&d1[i3][2]=='C'&&d1[i3][3]=='K'){
  		if(cnt<3){cnt++;
	 printf("您已撤销上一步操作，剩余%d次撤销机会。",3-cnt);totalpay-=d2[i3-1];
	}else{printf("您的撤销机会已用尽，无法撤销。"); continue;
	}
	  }
	if(d2[i3]!=1&&d2[i3]!=2&&d2[i3]!=5){
		printf("您投币方式错误，请重新投币。"); continue;
	}
  	totalpay+=d2[i3];
  	printf("您的钱不够，请继续投币：\n");
  	
  	i3++;
  }
 printf("找您%d元\n",totalpay-total);
 
 
 
 
 printf("是否继续购买：Y(yes),N(no)") ;scanf(" %c",&Q);
 
}
 printf("谢谢使用");
 
 
 
 return 0; 
}
