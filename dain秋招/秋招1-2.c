#include<stdio.h> 
int main()
{
    printf("��������Ҫ�ڷŵĻ�����Ϣ���� \"A 3 7 5\"��ʾ����A����3��ͨ��������Ϊ7Ԫ���ڷ���5��:"); 
    int a,b,c;//����a��ʾ�������ڵ�ͨ����b��ʾ�û���ĵ��ۣ�c��ʾ����������� 
    char d;//dΪ��������࡯ 
    int i=0;

     do{scanf(" %c %d %d %d",&d,&a,&b,&c);
    if(a>0&&a<=5&&b>0&&b<10&&c>0&&c<=50){
    
    printf("%d: ",a);
    while(i<c){printf("%c",d);i++;}printf("\t%d\n",b);break; 
   }else{printf("������Ϣ��������������:\n");
    }
    }
    while(1);
    int total;
    
    printf("��������������Ʒ���ܽ�") ;
    while(1){
	scanf("%d",&total) ;
	if(total<=b*c){break;
	}else{printf("�����ϵĻ����������������Ŀ�������������"); 
	}
	
	}
	printf("��Ͷ�ң�\n");
    int amount=0;int x=0;//amount��ʾ�ܹ�����Ǯ��x��ʾÿ�θ���Ǯ 
     i=0;//���ڴ˴���i��ʾͶ�ҵĴ��� 
    while(amount<total){
        scanf("%d",&x);if(x==1||x==2||x==5){i++;printf("��%d��Ͷ��%dԪ��\n",i,x);amount+=x;x=0;}else{printf("��Ͷ�Ҵ���������Ͷ��:\n");continue;}
    if(amount<total){
    printf("���Ǯ�����������Ͷ�ҡ�\n");     }
    } 
    int change=amount-total;//chamge��ʾӦ�ҵ���Ǯ 
    if(amount>total)printf("��ʱ����㹻��ִ�����㣬����%dԪ��",change) ;
    if(amount==total)printf("����֧����Ӧ�Ľ������㡣");
    return 0;
    
}
