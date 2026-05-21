#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    fp1=fopen("Input.txt","r");
    fp2=fopen("Output.txt","w");
    char ch;
    while(1){
        ch=getc(fp1);
        if(ch==EOF){
            break;
        }
        else if(ch =='a' || ch =='e'||ch =='i'||ch =='o'||ch =='u' ){
            continue;
        }
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}