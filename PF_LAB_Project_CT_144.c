#include <stdio.h>  
#include <string.h> 

struct ID
{
  char email[100];  
  char password[20];
  char Name[100];
  int Count;
  long long int Balance;
};

int main() {  
    struct ID User[300] = {0};
    char email[100]; 
   // char email_2[100];
    char password[20];
  //  char password_2[20];
    char Name[100];
    int Roll_number;
    int rn;  
    char option ; 
    int num=1;
    int num_1=1;
    int num_2=1;
    int menu;
    int tran_rn;
    long long int Transfer;
    long long int Transact; 
    long long int Deposit=0;

    printf("\n==============================================\n");
    printf("         Welcome to BANK Application\n");
    printf("==============================================\n"); 

while(num_1!=0){ 
    do{      
    printf("Please enter your Account Number(1-300):");
    scanf("%d", &Roll_number);
    rn = Roll_number - 1;
    if (rn >=0 && rn <=299)
    {
        break;
    }
    else {  
        printf("Invalid Account Number.\n\n");    
    }
    }while (1);

    while(num_2!=0){ 
    printf("\n\nChoose from:\ta_SIGN IN\tb_SIGN UP\tc_EXIT\n");  
    

    do {  
        printf("Enter your option (a, b or c): ");  
        scanf(" %c", &option);   

        if (option == 'a' || option == 'b' || option == 'c') {  
            break; // if user will enter valid option, exit the loop  
        } else {  
            printf("Invalid option.\n\n");  
        }  
    } while (1); // Keep looping until a valid option is entered  

     
    
    switch (option) {  
      case 'a': // SIGN IN
       while(1){
        printf("\n====================\n");
        printf("       SIGN IN:\n");
        printf("====================\n");  
        printf("Please enter email: ");                
        getchar();                                     
        fgets(email, sizeof(email), stdin);  
        email[strcspn(email, "\n")] = 0;               

        printf("Please enter password: ");  
        fgets(password, sizeof(password), stdin);  
        password[strcspn(password, "\n")] = 0;         
        
        if ((strcmp (User[rn].email, email) == 0 ) && (strcmp (User[rn].password, password) == 0)) {  
            printf("Log In successful.\n");
            
            while (1) { 
            printf("\n============\n");
            printf("    MENU:\n");
            printf("============\n");    
            printf("Choose the desire function from the Menu:\n");
            printf("1_Deposit\n2_Transfer\n3_Transaction\n4_Balance Inquiry\n5_Delete Account\n6_Logout\n");
            
             printf("Enter your option (1, 2, 3, 4, 5 or 6): ");  
             scanf("%d", &menu);  
             if (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5 || menu == 6) {  
               printf("Loading......\n\n");
             } 
            else {  
            printf("Invalid option. Please enter 1, 2, 3, 4, 5 or 6.\n\n");  
             } 
            
            switch (menu) {
            case 1:
                printf("\n==============\n");
                printf("  DEPOSIT:\n");
                printf("==============\n");
                printf("%s, please enter the amount you want to deposit:" , User[rn].Name);
                scanf("%lld",&Deposit);

                if (Deposit < 0)
                {
                  printf("\n\n%s, you can't deposit negative amount.\n\n", User[rn].Name);
                  break;
                }
                else if (Deposit>1000000000000)
                {
                  printf("\n\n\t    Exceeded Transaction Limit!!\n%s, your Deposit limit is One Trillion Rupees.\n\n",User[rn].Name);
                  break;
                }
                
                User[rn].Balance +=  Deposit;
                printf("\n\n%s, your current balance after deposit of Rs.%lld is Rs.%lld\n\n",User[rn].Name,Deposit,User[rn].Balance);
                break;

            case 2:
                printf("\n================\n");
                printf("    TRANSFER:\n");
                printf("================\n");
                printf("Please enter the Account Number of the person you want to transfer money to: ");  
                scanf("%d", &tran_rn);  
                tran_rn--; // Adjust Account Number according to zero index as array start from 0 index  
                if (tran_rn < 0 || tran_rn >= 300) {  
                    printf("\n\nInvalid Account Number for transfer.\n\n");  
                    break;  
                }
                if (strlen(User[tran_rn].Name) == 0) {  
                   printf("\n\nAccount not found.\n\n");
                   break; 
                }
                else if (rn == tran_rn)
                {
                    printf("\n\nYou can't Transfer money to yourself.\n\n");
                    break;
                }
                
                  
                printf("Please enter the amount you want to transfer: ");  
                scanf("%lld", &Transfer);  
                if (User[rn].Balance >= Transfer) {  
                    User[rn].Balance -= Transfer;  
                    User[tran_rn].Balance += Transfer;  
                    printf("Rs.%lld successfully sent to %s\n", Transfer, User[tran_rn].Name);  
                    printf("%s, your current balance after transferring money is Rs.%lld\n\n", User[rn].Name, User[rn].Balance);  
                } else {  
                    printf("Insufficient balance for transfer.\n\n");  
                }  
                break;

            case 3:
                printf("\n===================\n");
                printf("    TRANSACTION:\n");
                printf("===================\n");
                printf("%s, Please enter the amount you want to Transact: ",User[rn].Name);
                scanf("%lld",&Transact);
                if (Transact > User[rn].Balance)
                {
                  printf("\n\nInsufficient Balance.\n\n");   
                }
                else if (Transact == 0)
                {
                  printf("\n\n%s, you can't transact Rs.0 \n\n",User[rn].Name);
                }
                
                else if (Transact < 0)
                {
                  printf("\n\n%s, you can't transact negative amount.\n\n",User[rn].Name);
                }
                
                else{
                
                User[rn].Balance -= Transact;
                printf("\n\n%s, your current Balance after Transaction of Rs.%lld is Rs.%lld\n\n",User[rn].Name,Transact,User[rn].Balance);
                }
                break;

            case 4:
                printf("\n=======================\n");
                printf("    BALANCE INQUIRY:\n");
                printf("=======================\n");
                printf("%s, your current Balance is Rs.%lld\n\n",User[rn].Name,User[rn].Balance); 
                break;

            case 5:
               printf("\n========================\n");
               printf("    ACCOUNT DELETION:\n");
               printf("========================\n");
               printf("%s, Please enter you email and password to delete account.\n\nEmail:",User[rn].Name);
               getchar();                                   // Clear the newline character left in input buffer
               fgets(email , sizeof(email), stdin);
               email[strcspn(email, "\n")] = 0 ;

               printf("Password: ");  
               fgets(password, sizeof(password), stdin);  
               password[strcspn(password, "\n")] = 0;    

             if ((strcmp (User[rn].email, email) == 0 ) && (strcmp (User[rn].password, password) == 0)) {  
               printf("%s, are you sure you want to delete your account? (1 for Yes / 2 for No): ",User[rn].Name);
               int Choice;  
                scanf("%d", &Choice);  
                if (Choice != 1) {  
                    break; // Exit the sign-in loop to return to the main menu  
                }
                else
                {
                    printf("%s, your account has been DELETED succesfully!\n\n",User[rn].Name);
                    strcpy(User[rn].Name,"\0");
                    strcpy(User[rn].email,"\0");
                    strcpy(User[rn].password,"\0");
                    User[rn].Balance = 0;
                    User[rn].Count = 0;
                    num = 0;
                    break;
                }                                  
            }
             else {  
            printf("Incorrect email or password.\n\n");
            break;  
            }
                      
            case 6: // Logout

                printf("Logging out...\n\n");  
                num = 0; // Exit the menu loop  
                break;  

            default:  
                printf("Invalid option. Please enter a valid option.\n\n");  
                break;  
            }  

            if (num == 0) {  
             break; // Break to exit from the menu loop  
            }
          } 
        break;  // Exit the sign-in loop 
        } 

        else {  
            printf("Incorrect email or password. Would you like to try again? (1 for Yes / 2 for No): ");  
                int retryChoice;  
                scanf("%d", &retryChoice);  
                if (retryChoice != 1) {  
                    break; // Exit the sign-in loop from here 
                }    
        }

      }  
      break; // break from case 'a'.

    case 'b': // SIGN UP
        
        if (User[rn].Count != 0)
        {
          printf("You can't SIGN UP again.\n\n");
              break;
        }
        printf("\n====================\n");
        printf("      SIGN UP:\n");
        printf("====================\n");
        printf("Please enter Name: ");  
        getchar();  
        fgets(User[rn].Name, sizeof(User[rn].Name), stdin);  
        User[rn].Name[strcspn(User[rn].Name, "\n")] = 0;   
        

        printf("Please enter email: ");  
        fgets(User[rn].email, sizeof(User[rn].email), stdin);  
        User[rn].email[strcspn(User[rn].email, "\n")] = 0;


        printf("Please enter password: ");  
        fgets(User[rn].password, sizeof(User[rn].password), stdin);  
        User[rn].password[strcspn(User[rn].password, "\n")] = 0;

        User[rn].Count++ ;  
  
        printf("Sign up successful. You can now log in.\n");  
        break; 

    case 'c':

     printf("Exiting.......\n");  
     num_2 = 0;  
     break;  

    default:  
        printf("Invalid option.\n");  
        break; 

    } 
 
    }
    printf("If you want to use the Application again enter 1 else enter 0: ");
    scanf("%d",&num_1);
    while (num_1 != 1 && num_1 != 0){
     printf("Please Enter 1 or 0.");
     scanf("%d",&num_1);
     printf("%d",num_1);
    }

    num_2 = 1;
    
    }
    printf("\n======================================================================\n");
    printf("\t\tThanks for using our Bank Application.\n");
    printf("======================================================================\n");
    
    return 0;
}