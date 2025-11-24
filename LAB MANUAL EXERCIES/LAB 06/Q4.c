#include <stdio.h>
int main() {

    char username[10], password[10];
    char u[10], p[10];
    int i;
    int hasUpper, hasLower, hasDigit;

    /* ========== USERNAME CREATION ========== */
    while (1) {
        printf("Enter username (5 letters): ");
        scanf("%s", username);

        // Check length = 5
        for (i = 0; username[i] != '\0'; i++);
        if (i != 5) {
            printf("Username must be 5 letters!\n");
            continue;
        }

        // Check all alphabets
        for (i = 0; i < 5; i++) {
            if (!((username[i] >= 'a' && username[i] <= 'z') ||
                  (username[i] >= 'A' && username[i] <= 'Z'))) {
                printf("Username must contain only alphabets!\n");
                continue;
            }
        }
        break;  // username correct
    }

    /* ========== PASSWORD CREATION ========== */
    while (1) {
        printf("Enter password (6 chars, 1 upper, 1 lower, 1 digit): ");
        scanf("%s", password);

        // Check length
        for (i = 0; password[i] != '\0'; i++);
        if (i != 6) {
            printf("Password must be 6 characters!\n");
            continue;
        }

        hasUpper = hasLower = hasDigit = 0;

        for (i = 0; i < 6; i++) {
            if (password[i] >= 'A' && password[i] <= 'Z')
                hasUpper = 1;
            if (password[i] >= 'a' && password[i] <= 'z')
                hasLower = 1;
            if (password[i] >= '0' && password[i] <= '9')
                hasDigit = 1;
        }

        if (hasUpper && hasLower && hasDigit)
            break;
        else
            printf("Password must include upper, lower, and digit!\n");
    }

    printf("\nAccount Created Successfully!\n");

    /* ========== LOGIN ========== */
    while (1) {
        printf("\nLogin now\n");
        printf("Username: ");
        scanf("%s", u);
        printf("Password: ");
        scanf("%s", p);

        int sameU = 1, sameP = 1;

        for (i = 0; username[i] != '\0' || u[i] != '\0'; i++)
            if (username[i] != u[i]) { sameU = 0; break; }

        for (i = 0; password[i] != '\0' || p[i] != '\0'; i++)
            if (password[i] != p[i]) { sameP = 0; break; }

        if (sameU && sameP) {
            printf("Welcome %s, you are now logged in!\n", username);
            break;
        } else {
            printf("Incorrect username or password! Try again.\n");
        }
    }

    return 0;
}

/* Develop a user-registration system have the following options. 
a) Ask the user for a user-name (5 alphabets).  
b) Password should be 6 characters long with at least 1 numeric, 1 capital and 1 small letter. 
c) Display a “Account Created Successfully”. 
d) Login the user with correct username and password. 
e) Display “Welcome username, you are now logged in”. */

#include <stdio.h>
int main () {
	
	char username[6]; 
	char pass[7];
	int lengthname = 0 ;
	int lengthpass = 0 ; 

    // input username.
	printf("Input UserName (must be Five alphabets): "); 
	fgets (username , sizeof(username) , stdin); 
	
	
	// finding it's length.
	while ( username[lengthname] != '\0' ){
		lengthname++ ; 
	}
	
	// Removing new line.
	if (lengthname > 0 && username[lengthname - 1]== '\n'){
		username[lengthname - 1] = '\0'; 
		lengthname --; 
	}
	
	// checking length.
	if (lengthname != 5 ){
		printf("Invalid Input!"); 
		return 0; 
	}
	
	
	// Validate Alphabets.
	for(int i=0 ; i<5 ; i++){
	   if ( (username[i] >= 'a' && username[i] <= 'z') || 
	      (username[i] >= 'A' && username[i] <= 'Z')) {
		  }
		  else {
		  	printf("Invalid Input!"); 
	      	return 0;  
		  }
}


     // clear leftover input. 
char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF);


	
	// Input password.
	printf("Input Password : ");
	fgets(pass , sizeof(pass) ,stdin);
	
	
	// Password's length.
	while (pass[lengthpass] != '\0') {
			lengthpass++; 
	}
	
	
	//removing newline.
	if(lengthpass > 0 && pass[lengthpass -1] == '\n'){
		pass[lengthpass - 1] = '\0'; 
		lengthpass -- ; 
	}
	
	//checking length
	if (lengthpass != 6 ){
		printf("INVALID INPUT!");
		return 0; 
	}
	
	// Validate Password.
	int hasnum = 0 , hascap = 0 , hassmall = 0; 
	for (int i=0 ; i<6 ; i++){
		if (pass[i] >= '0' && pass[i] <= '9'){
			hasnum = 1; 
		}
		else if (pass[i] >= 'a' && pass[i] <= 'z'){
			hassmall = 1; 
		}
		else if (pass[i] >= 'A' && pass[i] <= 'Z'){
			hascap = 1; 
		}
		else {
			printf("Invalid input for password!");
			return 0;
		}
	}
	
	if (!hasnum || !hascap || !hassmall) {
		printf("Invalid input");
		return 0 ; 
	}
	printf("Account Created Successfully!"); 
	
	
	//clear buffer before login
	char ch2 ; 
	while ((ch2 = getchar()) != '\n' && ch2 != EOF);
	
	char testname[6]; 
	char testpass[7]; 
	int len1 = 0  ; 
	int len2 = 0;
	
	printf("\nWelcome to the Login System!\n"); 
	printf("To Login , Input Username : "); 
	fgets(testname , sizeof(testname) ,stdin); 
	
	// length calculate
	
	while(testname[len1] != '\0'){
		len1++; 
	}
	
	if(len1 > 0 && testname[len1 - 1] == '\n'){
		testname[len1 - 1] = '\0'; 
		len1--;
	}
	
	// checking length.
	if(len1 != 5){
		printf("Invalid input!"); 
	}
	
	//comparing with stored one
	for (int i = 0 ; i < 5 ; i++){
		if (username[i] != testname[i]){
			printf("Incorrect Credentials Entered!"); 
			return 0; 
		}
	}
	
	//buffer removing.
	char ch3 ;
	while ((ch3 = getchar()) != '\n' && ch3 != EOF);

     printf("To Login , Input Password : "); 
     fgets(testpass , sizeof(testpass) ,stdin); 
     
     // calculating length . 
     while (testpass[len2] != '\0' ){
     	len2++ ; 
	 }
	 
	 //removing newline
	 if (len2 > 0 && testpass[len2 - 1] == '\n') {
	 	testpass[len2 - 1] = '\0';
	 	len2--;
	 }
	
	// chechking length 
	if (len2 != 6){
		printf("Invalif input."); 
	}
	
	for(int i=0 ; i< 6 ; i++){
		if (testpass[i] != pass[i]){
			printf("Incorrecr Credentials Entered!");
			return 0; 
		}
	}
	
	printf("Login Successful!");
	
	return 0; 
}