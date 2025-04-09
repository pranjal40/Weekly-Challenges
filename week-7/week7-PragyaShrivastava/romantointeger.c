#include<stdio.h>
#include<string.h>
int roman(char a){
if(a=='I'||a=='i'){
    return 1;
}
else if(a=='V'||a=='v'){
    return 5;
}
else if(a=='X'||a=='x'){
    return 10;
}
else if(a=='L'||a=='l'){
    return 50;
}   
else if(a=='C'||a=='c' ){
    return 100;

}
else if(a=='D'||a=='d'){
    return 500;
}
else if(a=='M'||a=='m'){
    return 1000;
}  else{
    return 0;
} 
}
int main(){
    int i, num, sum=0;
    char str[50];
    printf("enter  roman number:");
    scanf("%s",&str);
    num=strlen(str);
    int present =0;
    int next=0;
    for(i=0;i<num;i++){
        present = roman(str[i]);
        if(i+1<num){
            next=roman(str[i+1]);

        }
        if(present==0){
            printf(" invalid input");
            return 0;
        }
        if(present<next){
            sum=sum-present;

        }
         else{
            sum=sum+present;
        }
    }
   
    
    printf("%d",sum);
    return 0;


    
}