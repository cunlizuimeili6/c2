#include <stdio.h>

int main(){
    int code;
    int index=0;
    char arr[1024];
    printf("guanlimingganxitong\n");
    while(1){
    printf("1---tianjia\n");
    printf("2---shanchuzuihou\n");
    printf("3---chakansuoyou\n");
    printf("4---tihuan\n");
    printf("5---tuichu\n");
    printf("gongneng\n");
    scanf("%d",&code);
    if(code==1){
        char x;
        char i;
    printf("tianjia\n");
    scanf("%c",&x);
    scanf("%c",&x);
    arr[index]=x;
    index++;
    printf("jixu\n");
    scanf("%c",&i);
    scanf("%c",&i);
    }
    if(code==2){
        char x;
    printf("shanchu\n");
    if(index>0){
        index--;
    printf("chenggongjixu\n");
    scanf("%c",&x);
    scanf("%c",&x);
    }else{
    printf("shibaijixu\n");
    scanf("%c",&x);
    scanf("%c",&x);
    }
    }
    if(code==3){
        char x;
        if(index>0){
            for(int v=0;v<index;v++){
                printf("di %d gezifu %c\n",v+1,arr[v]);
            }
        }else{
            printf("wu");
        }
        printf("jixu\n");
        scanf("%c",&x);
        scanf("%c",&x);
    }
    if(code==4){}
    if(code==5){
        printf("tuichu\n");
        break;

    }
    }
    return 0;

}