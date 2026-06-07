#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){

    char name[20] = "";
    char father_name[20] = {'\0'};
    char mother_name[20] = {'\0'};
    int age = 0;
    char contact_number[20] = "";
    char email[50] = "";
    bool is_current_student;
    char present_address[100] = "";
    char permanent_address[100] = "";
    char school[50] = "";
    char college[50] = "";
    int temp = 0; // temporary variable to store boolean input for current student status
    is_current_student = false; // default value for current student status
    


    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);
    // fgets is used to read a string with spaces. It reads a line of text from the user and stores it in a string variable, including spaces.
    name[strcspn(name, "\n")] = '\0'; // to remove the newline character added by fgets() at the end of the string. strcspn() returns the index of the first occurrence of the newline character, and we replace it with a null terminator.

    printf("Enter your Father's Name: ");
    fgets(father_name, sizeof(father_name), stdin);
    father_name[strcspn(father_name, "\n")] = '\0';

    printf("Enter your Mother's Name: ");
    fgets(mother_name, sizeof(mother_name), stdin);
    mother_name[strlen(mother_name) - 1] = '\0';

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Contact Number: ");
    scanf("%19s", contact_number);
    

    printf("Enter your E-mail address: ");
    scanf("%49s", email);
    printf("\n");

    printf("Are you a current student of this University? (1 for yes, 0 for no): ");
    scanf("%d", &temp);
    is_current_student = (temp == 1) ? true : false;  // set current student status based on user input
    printf("\n");

    getchar(); // to consume the leftover newline character from the previous input
    printf("Enter your Present Address: ");
    fgets(present_address, sizeof(present_address), stdin);
    present_address[strcspn(present_address, "\n")] = '\0';
    
    printf("Enter your Permanent Address: ");
    fgets(permanent_address, sizeof(permanent_address), stdin);
    permanent_address[strlen(permanent_address) - 1] = '\0';

    printf("Enter your School Name: ");
    fgets(school, sizeof(school), stdin);
    school[strcspn(school, "\n")] = '\0';

    printf("Enter your College Name: ");
    fgets(college, sizeof(college), stdin);
    college[strcspn(college, "\n")] = '\0';

    printf("\n\n\n\n");
    printf("===============================================\n");
    printf("            Student Information Form           \n");
    printf("===============================================\n");

    printf("%-17s : %s\n", "Name", name);

    printf("%-17s : %s\n", "Father's Name", father_name);

    printf("%-17s : %s\n", "Mother's Name", mother_name);

    printf("%-17s : %d\n", "Age", age);

    if(is_current_student == true){
        printf("%-17s : Yes\n", "Current Student");
    } else {
        printf("%-17s : No\n", "Current Student");
    }

    printf("%-17s : %s\n", "Contact Number", contact_number);

    printf("%-17s : %s\n", "E-mail address", email);

    printf("%-17s : %s\n", "Present Address", present_address);

    printf("%-17s : %s\n", "Permanent Address", permanent_address);

    printf("%-17s : %s\n", "School Name", school);

    printf("%-17s : %s\n", "College Name", college);

    printf("===============================================");

    return 0;

}