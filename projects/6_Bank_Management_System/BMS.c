#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char name[50];
  int acc_no;
  float balance;
} Account;
int menu()
{
  int select;
  printf("\n\n*** Bank Management System ***\n\n");
  printf("**************************************\n");
  printf("1. Create account\n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
  printf("4. Check Balance\n");
  printf("5. Exit\n");
  printf("**************************************\n");
  printf("Enter your choice: ");
  scanf("%d", &select);
  return select;
}
void create_acount()
{
  Account acc;
  FILE *file = fopen("account.dat", "ab+");
  if (file == NULL)
  {
    printf("Unable to open file!!\n");
    return;
  }
  int ch;
  do
  {
    ch = getchar();
  } while (ch != '\n' && ch != EOF);

  printf("\nEnter your name: ");
  fgets(acc.name, sizeof(acc.name), stdin);
  acc.name[strcspn(acc.name, "\n")] = '\0';
  printf("\nEnter your account number: ");
  scanf("%d", &acc.acc_no);
  acc.balance = 0.0;
  fwrite(&acc, sizeof(acc), 1, file);
  fclose(file);
  printf("\nAccount created successfully!");
  // char buf[32];
  // fgets(buf, sizeof(buf), stdin);
  // acc.acc_no = strtol(buf, NULL, 10);
}
void Deposit_Money()
{
  FILE *file = fopen("account.dat", "rb+");
  if (file == NULL)
  {
    printf("Unable to open file!!\n");
    return;
  }
  int acount_no;
  double money;
  Account acc_read;
  printf("\nEnter your account number: ");
  scanf("%d", &acount_no);
  while (fread(&acc_read, sizeof(acc_read), 1, file))
  {
    if (acc_read.acc_no == acount_no)
    {
      printf("\nEnter your amount to deposit: ");
      scanf("%lf", &money);
      acc_read.balance += money;
      fseek(file, -(long)sizeof(acc_read), SEEK_CUR);
      fwrite(&acc_read, sizeof(acc_read), 1, file);
      fclose(file);
      printf("\nSuccessfully deposited Rs.%.2f\nNew balance is Rs.%.2f", money, acc_read.balance);
      return;
    }
  }
  fclose(file);
  printf("\nAccount No:%d was not found.", acount_no);
}
void Withdraw_Money()
{
  FILE *file = fopen("account.dat", "rb+");
  if (file == NULL)
  {
    printf("Unable to open file!!\n");
    return;
  }
  int acount_no;
  double money;
  Account acc_read;
  printf("\nEnter your account number: ");
  scanf("%d", &acount_no);
  while (fread(&acc_read, sizeof(acc_read), 1, file))
  {
    if (acc_read.acc_no == acount_no)
    {
      printf("\nEnter your amount to Withdraw: ");
      scanf("%lf", &money);
      if (money > acc_read.balance)
      {
        printf("\nInsufficient balance! Current balance: Rs.%.2f\n", acc_read.balance);
        fclose(file);
        return;
      }
      acc_read.balance -= money;
      fseek(file, -(long)sizeof(acc_read), SEEK_CUR);
      fwrite(&acc_read, sizeof(acc_read), 1, file);
      fclose(file);
      printf("\nSuccessfully Withdraw Rs.%.2f\nYour current balance is Rs.%.2f", money, acc_read.balance);
      return;
    }
  }
  fclose(file);
  printf("\nAccount No:%d was not found.", acount_no);
}
void Check_Balance()
{
  FILE *file = fopen("account.dat", "rb");
  if (file == NULL)
  {
    printf("Unable to open file!!\n");
    return;
  }
  int acount_no;
  Account acc_read;
  printf("\nEnter your account number: ");
  scanf("%d", &acount_no);
  while (fread(&acc_read, sizeof(acc_read), 1, file))
  {
    if (acc_read.acc_no == acount_no)
    {
      printf("\nYour name is %s", acc_read.name);
      printf("\nYour account number is %d", acc_read.acc_no);
      printf("\nYour current balance is Rs.%.2f", acc_read.balance);
      fclose(file);
      return;
    }
  }
  fclose(file);
  printf("\nAccount No:%d was not found.", acount_no);
}

int main()
{
  while (1)
  {
    int option = menu();
    switch (option)
    {
    case 1:
      create_acount();
      break;
    case 2:
      Deposit_Money();
      break;
    case 3:
      Withdraw_Money();
      break;
    case 4:
      Check_Balance();
      break;
    case 5:
      printf("Program Exit\n");
      return 0;

    default:
      printf("\nInvalid option\n");
      break;
    }
  }
  return 0;
}