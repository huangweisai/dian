#include<stdio.h> 
int main()
{
    printf("��������Ҫ�ڷŵĻ�����Ϣ���� \"A 3 7 5\"��ʾ����A����3��ͨ��������Ϊ7Ԫ���ڷ���5��:"); 
    int a1,b,c;//����a��ʾ�������ڵ�ͨ����b��ʾ�û���ĵ��ۣ�c��ʾ����������� 
    char d1;//d1Ϊ��������࡯ 
    int i=0;

     do{scanf(" %c %d %d %d",&d1,&a1,&b,&c);
    if(a1>0&&a1<=5&&b>0&&b<10&&c>0&&c<=50){
    
    printf("%d: ",a1);
    while(i<c){printf("%c",d1);i++;}printf("  %d\n",b);break; 
   }else{printf("���ۻ�������5��ͨ������ÿ��ͨ�����ڷ�50�������ȷ���������ͨ����š����ۡ���Ŀ��ȷ\n���������룺");
    }
    }
    while(1);
    int total;//
    int times=0;
    int a2;
    char d2;
    int next=0;//����next�ж��û��Ƿ����������� 
    while(c>0){
	printf("����������Ҫ����������࣬����ͨ���Լ���������(����A 3 1��ʾ����3��ͨ����A�����1��):") ; 
    while(1){
	scanf(" %c %d %d",&d2,&a2,&times);
    if(d2==d1&&a2==a1&&times<=c){printf("��Ͷ��(��֧��1Ԫ��2Ԫ��5Ԫ��Ͷ�ҷ�ʽ):");break;}
    else{printf("��ʱͨ��%d����%d������%c\n��������ȷ�Ļ������ࡢ������ͨ������ȷ�����Ĺ������������ڻ��������л����������",a1,c,d1);} 
    }
    total=b*times;
    int amount=0;int x=0;//amount��ʾ�ܹ�����Ǯ��x��ʾÿ�θ���Ǯ 
     i=0;//���ڴ˴���i��ʾͶ�ҵĴ��� 
    while(amount<total){
        scanf("%d",&x);if(x==1||x==2||x==5){i++;printf("��%d��Ͷ��%dԪ��\n",i,x);amount+=x;x=0;}else{printf("��Ͷ�ҷ�ʽ����������Ͷ�ҡ�\n");continue;}
    if(amount<total){
    printf("���Ǯ�����������Ͷ�ҡ�\n");     }
    } 
    int change=amount-total;//chamge��ʾӦ�ҵ���Ǯ 
    if(amount>total)printf("��ʱ����㹻��ִ�����㣬����%dԪ��\n",change) ;
    if(amount==total)printf("����֧����Ӧ�Ľ������㡣\n");
    c-=times;
    if(c==0) {printf("���������꣬ллʹ�á�");break; 
	}
    printf("����ɹ����������������Լ���������Ҫ��������������1:"); 
    scanf("%d",&next); 
    if(next==1){printf("ллʹ�á�");break; 
	}
	}
    return 0;
}
