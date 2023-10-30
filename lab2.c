#include<stdio.h>

//Q-1
// void main(){
//     int n;
//     int sum=0;
//     printf("Enter no of numbers: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         int num = 2*i + 1;
//         sum=sum+num;
//         printf("num is: %d\n",num);
//         printf("The sum is: %d\n",sum);
//     };
// }

//Q-2
// void main(){
//     int ln;
//     printf("Enter no of rows: ");
//     scanf("%d",&ln);
//     int spac=ln-1;
//     for(int i=0;i<=ln;i++){
//         for(int j=spac;j>=0;j--){
//             printf(" ");
//         };
//     for(int z=0;z<=i;z++){
//         printf("* ");
//     };
//     printf("\n");
//     spac--;
//     }
// }

//Q-3
//  int compareStrings(const char *str1, const char *str2) {
//     while (*str1 != '\0' && *str2 != '\0') {
//         if (*str1 != *str2) {
//             return 0; // The strings are not equal
//         }
//         str1++;
//         str2++;
//     }
    
//     // Check if both strings have reached the null terminator
//     if (*str1 == '\0' && *str2 == '\0') {
//         return 1; // The strings are equal
//     } else {
//         return 0; // One of the strings is longer than the other
//     }
//  }

//  int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";

//     if (compareStrings(str1, str2)) {
//         printf("The strings are equal.\n");
//     } else {
//         printf("The strings are not equal.\n");
//     }

//     return 0;
// }


//Q-4
#include<string.h>
// void main(){
//     char stat[]="My name is Muhammed";
//     for(int i=0;i<strlen(stat);i++){
//         if(stat[i]>='A' && stat[i]<='Z'){
//             continue;
//         }
//         else if(stat[i]==' '){
//             continue;
//         }
//         else{
//             stat[i]=stat[i]-32;
//         }
//     };
//     printf("%s",stat);
// }

//Q-5(printing unique elements)
// void main(){
//     int array[9] = {1,1,2,3,4,5,6,6,7};
//     int count=0;
//     for(int i =0;i<9;i++){
//         count=0;
//         for(int j=0;j<9;j++){
//             if(i!=j && array[i]==array[j]){
//                 count=1;
//                 break;
//             }
//         }
//         if(count==0){
//             printf("%d\n",array[i]);
//         }
        
//     }
// }

//Q-6
#include <stdio.h>

// Define a structure to represent distance in inch-feet system
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance sum;

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;3

    // If the sum of inches exceeds 12, adjust feet and inches
    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches %= 12;
    }

    return sum;
}

int main() {
    struct Distance distance1, distance2, result;

    // Input the first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inches);

    // Input the second distance
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inches);

    // Add the two distances
    result = addDistances(distance1, distance2);

    // Display the result
    printf("\nSum of distances: %d feet %d inches\n", result.feet, result.inches);

    return 0;
}
