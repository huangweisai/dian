#include<stdio.h> 
int main(){
char A[30];//�������� 
int B[10],C[10]={0,0,0,0,0},D[10];//ͨ������Ŀ������
 printf("��������Ҫ�ڷŵĻ�����Ϣ��������\"A 3 5 7\"��ʾ\"�ڷ���5��A������3��ͨ���ϣ�����Ϊ7Ԫ\",����END�Խ����ڷ�(���ۻ����������ͨ�������ﵥ��Ӧ������10Ԫ����һ���������ڷ�50������)��\n�����룺\n") ;
 int i1=0;
 for(i1=0;i1<5;i1++){
 	scanf("%s",&A[i1]) ;//�ҷ��ִ˴����������ַ����ڶ����ַ��ᱻ����A����һλ 
 	
 	if(A[i1]=='E'&&A[i1+1]=='N'&&A[i1+2]=='D'){break;};
 	scanf("%d %d %d",&B[i1],&C[i1],&D[i1]);
 	if(B[i1]>5||B[i1]<0||C[i1]<0||C[i1]>50||D[i1]>10||D[i1]<0||B[i1]==B[i1-1]) {i1--;printf("��ȷ�����������Ϣ����Ч��Χ�ڣ���Ҫ��ͬһͨ�������ظ��ڷţ�\n");
	 }
 }
 printf("�����Ѱڷ���ϡ�");
 char E[50];
 int b,c; 
 int i2=0;
int i3=0;
 int total=0;//�ܼ� 
 char Q='Y';
 while(Q=='Y') {printf("��������Ҫ����Ļ�����Ϣ(A 3 1��ʾ����1��3��ͨ���Ļ���A):\n");
 while(1){
 	scanf("%s",&E[i2]);
 	if(E[i2]=='E'&&E[i2+1]=='N'&&E[i2+2]=='D'){break;};
 	scanf("%d %d",&b,&c);
 	 
 	for(i3=0;i3<=i1;i3++){if(b==B[i3]) break;
	 }
	  if(E[i2]==A[i3]) {
	  	if(c<=C[i3]){C[i3]-=c;total+=D[i3] *c;
		  }
	  	else{printf("�����������������ٴ����룺");
		  }
	  }
	 else{
	  printf("�û�����δ���ҵ��û�����ٴ����룺");continue;} 
	  
 }
   printf("����֧��%dԪ(��֧��1Ԫ��2Ԫ��5Ԫ��Ͷ�ҷ�ʽ)\n��֧����",total);
  int amount=0;int x=0;//amount��ʾ�ܹ�����Ǯ��x��ʾÿ�θ���Ǯ 
     int i=0;//���ڴ˴���i��ʾͶ�ҵĴ��� 
    while(amount<total){
        scanf("%d",&x);if(x==1||x==2||x==5){i++;printf("��%d��Ͷ��%dԪ��\n",i,x);amount+=x;x=0;}else{printf("��Ͷ�ҷ�ʽ����������Ͷ�ҡ�\n");continue;}
    if(amount<total){
    printf("���Ǯ�����������Ͷ�ң�\n");     }
    } 
    int change=amount-total;//chamge��ʾӦ�ҵ���Ǯ 
    if(amount>total){
	printf("��ʱ����㹻��ִ�����㣬����%dԪ��\n",change) ;}
    if(amount==total){
	printf("����֧����Ӧ�Ľ������㡣\n");}
	total=0; 
	 if(C[0]==0&&C[1]==0&&C[2]==0&&C[3]==0&&C[4]==0){printf("����������,") ;break;
	  }
   else{
   printf("�Ƿ��������������Y(yes)��N(no):") ;
	scanf(" %c",&Q);}
}
    

 printf("лл�ݹˡ�"); 
 return 0; 
}
