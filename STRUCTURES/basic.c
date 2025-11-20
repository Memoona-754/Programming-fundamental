#include<stdio.h>
void student();
int main(){
    struct STUDENTS {
        int roll_nmbr;
        char name[100];
        char section;
        float marks;
    };
    void(S1.a,S2.b);
}
    void student (){
        struct student S[60];
           for(int i=0;i<60;i++){
              scanf("%d %s %f",S[i].roll_nmbr,S[i].name,S[i].marks);
           }
    } 

// ...existing code...
// extern struct student STUDENTS[]; // if declared in another file

// printf("%s\n", STUDENTS[0].name); // valid: index needed
// size_t count = sizeof STUDENTS / sizeof STUDENTS[0]; // only works if STUDENTS is visible here
// for (size_t i = 0; i < count; ++i) {
//     printf("%d %s %d\n", STUDENTS[i].id, STUDENTS[i].name, STUDENTS[i].batch);
// }
// }
// ...existing code...