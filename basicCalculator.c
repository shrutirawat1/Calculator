#include<stdio.h>
main(){
char opt,cont,res;
int num[200];
int ans[200];
printf("HELLO :)\n");
label :
instruc();
printf("enter a number :");
scanf("%d",&num[0]);
getchar();
printf("enter the operation you want to perform :");
scanf("%c",&opt);

ans[0]=num[0];
for(int i=1;i<200;i++){
printf("enter number :");
scanf("%d",&num[i]);
switch(opt){
case '+' : //printf("enter how many numbers you want to enter :");
          ans[i]=add(ans,num,i);
          printf("ans :%d\n",ans[i]);
          break;
case '-' :ans[i]=sub(ans,num,i);
          printf("ans :%d\n",ans[i]);
          break;
case '*' :ans[i]=pro(ans,num,i);
          printf("ans :%d\n",ans[i]);
          break;
case '/' :ans[i]=div(ans,num,i);
          printf("ans :%d\n",ans[i]);
          break;
case '%' :ans[i]=rem(ans,num,i);
          printf("ans :%d\n",ans[i]);
          break;
}
getchar();
printf("want to continue?\n");
scanf("%c",&cont);
getchar();
if(cont=='n'){
 break;
}
printf("do you want to restart? enter 'y' for yes :");
scanf("%c",&res);
getchar();
if(res=='y'){
 goto label;
}
printf("enter operation :");
scanf("%c",&opt);
getchar();
}
/*char hist;
printf("Do you want to see your calculating history? Enter 'y' for yes and 'n' for no :");
scanf("%c",&hist);
if()*/
printf("thank you :)");
}

void instruc(){

printf("Instructions....\n");
printf("enter '+' for addition\n'-' for subtraction\n'*' for multiplication\n'/' for division\n'%' for remainder\n");
printf("enter 'n' to stop calculating\n");
//printf("enter 'i' to see instructions again\n");
}

int add(int *ans,int *num,int i){
int sum=0;
 sum=ans[i-1]+num[i];
//printf("Addition of %d numbers is %d",n,sum);
return sum;
}
int sub(int *ans,int *num,int i){
int s=ans[i-1]-num[i];
//printf("Differnce of two numbers is %d",s);
return s;
}
int pro(int *ans,int *num,int i){
int p=ans[i-1]*num[i];
//printf("Product of %d numbers is %d",n,p);
return p;
}
int div(int *ans,int *num,int i){
int d=ans[i-1]/num[i];
//printf("division of two number is %d",d);
return d;
}
int rem(int *ans,int *num,int i){
int r=ans[i-1]%num[i];
//printf("division of two number is %d",d);
return r;
}
