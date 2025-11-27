/*

Nama        :MUHAMMAD AIMAN BIN MAHADI
Fakulti     :FSKTM
Universiti  :UTHM

*/


#include <stdio.h>
int main()
{

  float balance = 0.00,withdraw,deposit;
  char name[10] = "Aiman";
  int age = 22,pin,option,repeat;

  printf(
          "**********************\n"
          "*WELCOME TO AIMAN ATM*\n"
          "**********************\n"
          "\n\n\n"
          "Please enter your pin: "
        );
        scanf("%d",&pin);

  do
  {
    if (pin == 1234)
    {
      printf(
              "1 - Balance\n"
              "2 - Withdraw\n"
              "3 - Deposit\n"
              "4 - Info\n"
              "Please choose your option: "
            );
      scanf("%d",&option);

      switch (option)
      {
        case 1:
              printf("Your balance is %2.f\n",balance);
        break;

        case 2:
              printf("Please enter amount you want to withdraw: ");
              scanf("%f",&withdraw);
              balance = balance - withdraw;
              printf("Your total withdraw: %.2f",withdraw);
              printf("Your balance: %.2f\n", balance);
        break;

        case 3:
              printf("Plese enter amount you want to deposit: ");
              scanf("%f",&deposit);
              balance = balance + deposit;
              printf("Your total deposit: %.2f\n",deposit);
              printf("Your balance: %.2f\n", balance);
        break;

        case 4:
              printf(
                      "\bUser info:\n"
                      "User name: %s\n"
                      "User age: %d\n",name,age
                    );
        break;
                      
        default:
              printf("Wrong input\n");
        break;
        }
      
    printf("\nDo you still want to use this ATM?(1-yes,0-no): ");
    scanf("%d\n",&repeat);

    }
    else
    {
      printf("Your password is incorrect please try again\n");
      printf("Do you still want to use this ATM?(1-yes,0-no): ");
      scanf("%d\n",&repeat);
    }
  } while (repeat == 1);
        
  printf( "\n\n"
          "*******************************\n"
          "*THANK YOU FOR USING AIMAN ATM*\n"
          "*******************************\n"
        );

  return 0;
}