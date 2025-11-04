 #include <stdio.h>
 #include <string.h>
 
// Define structure for Room
struct Room {
    int room_number;
    char room_type[50];
    int capacity;
    float rate;
    char status[50]; // "Available" or "Occupied"
    char guest_name[50];
};
                                                                                                                                         
// Function to display main menu
void displayMenu() {
    //printf("\t\t\n====================================\n");
    //printf("\t\t\"HOTEL MANAGEMENT SYSTEM\"\n");
    //printf("\t\t\n====================================\n");
    printf("1. DISPLAY ROOMS\n"); 
    printf("2. ROOM BOOKING\n");      
    printf("3. CHECKING OUT\n");
    printf("4. EXIT\n");
}

// Function to display room details
void displayRoomDetails(struct Room rooms[], int totalRooms) {
    printf("\nRoom Details:\n");
    printf("Room Type\t\tQuantity\tCapacity\tRate\n");

    char current_type[50];
    int count = 0;
    int start_room = 1;
   // used nested loops to display the room details 
    for (int i = 0; i < totalRooms; ) {
        strcpy(current_type, rooms[i].room_type);
        count = 0;
    //1. current_type[50]: stores the current room type
    //2. count: number of rooms of the current type
    //3. start_room: starting room number for the current type
    //4. i: outer loop index (iterates through all rooms)
    //5. j: inner loop index (iterates through rooms of the same type)
for (int j = i; j < totalRooms; j++) {                             
if (strcmp(rooms[j].room_type, current_type) == 0) {
                count++;
                i++;             
            } else { 
                break;
            }
        }

      printf("%-20s\t%d (%d-%d)\t%-5d\t\t$%.2f\n",  //
               current_type, 
               count, 
               start_room, 
               start_room + count - 1, 
               rooms[i-1].capacity, 
               rooms[i-1].rate);
        
        start_room += count;
    }
} 

// Function to book a room
void bookRoom(struct Room rooms[], int totalRooms) {

    int roomNumber;
    int capacity;
    char guestName [100];
    char day[10];
    printf("Enter Room Number to be Booked : ");
    scanf("%d", &roomNumber);
    printf("Enter the  Capacity: ");
    scanf("%d", &capacity);
    printf("Enter the  Guest Name: ");
    scanf(" %[^\n]s",&guestName);
    printf("Enter the current day: ");
    scanf("%s",&day);
//1. Loop through all rooms (for (int i = 0; i < totalRooms; i++)).
//2. Check if:
    //- Room number matches user input (rooms[i].room_number == roomNumber).
    //- Room status is "Available" (strcmp(rooms[i].status, "Available") == 0).
    //- Room capacity meets user input (rooms[i].capacity >= capacity).
//3. If all conditions are true, proceed to booking confirmation.


    for (int i = 0; i < totalRooms; i++) {
        if (rooms[i].room_number == roomNumber && 
            strcmp(rooms[i].status, "Available") == 0 && 
            rooms[i].capacity >= capacity) {
            
            printf("Room Type: %s\n", rooms[i].room_type);
            printf("Rate: $%.2f\n", rooms[i].rate);
            
            char confirm;
            printf("Confirm Booking (yes/no): ");
            scanf(" %c", &confirm);
            
            if (confirm == 'y' || confirm == 'Y') {
                strcpy(rooms[i].status, "Occupied");
                strcpy(rooms[i].guest_name, guestName);
                
                printf("Room %d Booked Successfully by %s on %s!\n", roomNumber,guestName,day);
            } else {
                printf("THANKS FOR USING THIS APPLICATION!\n");
            }
            return;
        }
    }
    printf("Room Not Available or Insufficient Capacity!\n");
}
// function for checkout
void checkOut(struct Room rooms[], int totalRooms) {
    int roomNumber;
    printf("Enter Room Number: ");
    scanf("%d", &roomNumber);
//1. Loop through all rooms (for (int i = 0; i < totalRooms; i++)).
//2. Check if:
    //- Room number matches user input (rooms[i].room_number == roomNumber).
    //- Room status is "Occupied" (strcmp(rooms[i].status, "Occupied") == 0).
//3. If both conditions are true, proceed to check-out confirmation.
    
    for (int i = 0; i < totalRooms; i++) {
        if (rooms[i].room_number == roomNumber && strcmp(rooms[i].status, "Occupied") == 0) {
            printf("Room Type: %s\n", rooms[i].room_type);
             printf("Guest Name: %s\n", rooms[i].guest_name);
            printf("Rate: $%.2f\n", rooms[i].rate);
          
            char confirm;
            printf("Confirm Check Out (yes/no): ");
            scanf(" %c", &confirm);

            if (confirm == 'Y' || confirm == 'y') {
                strcpy(rooms[i].status, "Available");
              rooms[i].guest_name[0] = '\0';
                printf("Check Out Successful! Room %d is now available.\n\n", roomNumber);
            } else {
                printf("Check Out Cancelled!\n");
            }
            return;
        }
    }
    printf("Room Not Occupied!\n");
}

int main() {

     int TOTAL_ROOMS = 50;
    struct Room rooms[TOTAL_ROOMS];

    printf("\t\n====================================\n");
    printf("\"HOTEL MANAGEMENT SYSTEM\"");
    printf("\t\t\n====================================\n");

    // Initialize rooms with default values
    for (int i = 0; i < TOTAL_ROOMS; i++) {
        rooms[i].room_number = i + 1;
        
        // Assign room types and rates through conditional statement
        if (i <=9) {
            strcpy(rooms[i].room_type, "Standard");
            rooms[i].rate = 800.0;
            rooms[i].capacity = 2;

        } else if (i <=19) {
            strcpy(rooms[i].room_type, "Deluxe");
            rooms[i].rate = 1200.0;
            rooms[i].capacity = 5;
        } else if (i <=29) {
            strcpy(rooms[i].room_type, "Suite");
            rooms[i].rate = 2000.0;
            rooms[i].capacity = 7;
        } else {
            strcpy(rooms[i].room_type, "Luxury");
            rooms[i].rate = 5000.0;
            rooms[i].capacity = 10;
        }
        
        strcpy(rooms[i].status, "Available");   
            // initializing rooms status 
    }

int choice;
    while (1) {                              // used switch statement to handle the choice of the user 
        displayMenu();                       // calls display menu function to display main menu 
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            displayRoomDetails(rooms, TOTAL_ROOMS);      // calls display room details function in case 1 of main menu 
                break;
            case 2:
            bookRoom(rooms, TOTAL_ROOMS);                // calls room booking function in case 2 of main menu 
                break;
            case 3:
            checkOut(rooms, TOTAL_ROOMS);                // calls check out function in case 3 of main menu 
                break;
            case 4:
                printf("\n====================================\n");    
                printf("   THANKS FOR VISITING OUR HOTEL.\n");
                printf("====================================\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
                break;
        }
                                                                                                            
    }
    return 0;
}
