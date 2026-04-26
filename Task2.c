#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
float BNK = 1000 ;
char serv = 'T';
float BNK_D = 0;
float BNK_R = 0;
float BNK_V = 0;
float BNK_T = 0;
float BNK_0T = 1000;
char acc_type = 'C';
int choice = 1;
while (choice != 0) {
printf("Choose your service: Deposit(T), Transfer(V), Withdrawal(R), Modification(M), Account Inquiry(C)");
scanf(" %c",&serv);
if (serv == 'Q' || serv == 'q') {
printf("Exiting the program... Goodbye!\n");
break;
}
// الايداع
if (serv == 'T'){
printf("Choose an amount to deposit:");
scanf("%f", &BNK_D);
BNK = BNK + BNK_D;
printf("Your current amount:");
printf("%f", BNK);
}
// سحب
else if (serv == 'R'){
printf("Choose an amount to withdraw:");
scanf("%f", &BNK_R);
BNK = BNK - BNK_R;
printf("Your current amount:");
printf("%f", BNK);
}
//تحويل
else if (serv == 'V'){
printf("Enter amount to transfer: ");
scanf("%f", &BNK_V);
BNK_T = BNK_0T + BNK_V;
BNK = BNK - BNK_V;
printf("Conversion completed successfully.");
printf("Your current amount:");
printf("%f", BNK);
}
// التعديل
else if (serv == 'M'){
printf("Choose the type of account you are trying to edit(P),(M),(C):");
scanf(" %c", &acc_type);
acc_type = acc_type;
printf("Your account Type is: %c", acc_type);
}
else if (serv == 'C'){
printf("your acount type is: %c and your balance is: %f", acc_type, BNK);
}
printf("\nEnter 0 to exit, 1 to continue: ");
scanf("%d", &choice);
}
return 0;
}
