#include<stdio.h>

// Q-1

//int main()
//{ 
//int id,totalHours,salary;
//printf("Enter ID: \n");
//scanf("%d", &id);
//printf("Enter total hours worked: \n");
//scanf("%d", &totalHours);
//printf("Enter salary per hour: \n");
//scanf("%d", &salary);
//float totalSalary = totalHours*salary;
//printf("Your Salary is: %.2f\n",totalSalary);
//printf("Your ID is: %d", id);
//return 0;
//}

//Q 2

//int main()
//{int height,width;
//printf("Enter height of rectangle: \n");
//scanf("%d", &height);
//printf("Enter width of rectangle: \n");
//scanf("%d", &width);
//int perimeter = 2*(height+width);
//int area = height*width;
//printf("Perimeter is: %d\n",perimeter);
//printf("Area is: %d",area);
//return 0;
//}

//Q3

//int main()
//{int height;
//printf("Enter your height: \n");
//scanf("%d", &height);
//if(height<150){
//    printf("You are dwarf in height\n");
//}
//else if(height >= 150 && height < 165){
//    printf("You are average in height\n");
//}
//else {
//    printf("You are tall in height\n");
//}
//return 0;
//}

//Q4

//int decimalToBinary(int dec) {
//    int bin = 0;
//    int place = 1;
    
//    while (dec > 0) {
//        int rem = dec % 2;
//        bin = bin + (place * rem);
//        place = place * 10;
//        dec = dec / 2;
//    }
    
//    return bin;
//}

//int main() {
//    printf("Binary to Decimal Converter\n");
//    int x;
//    printf("Enter the Decimal Number: \n");
//    scanf("%d", &x);
    
//    int bin = decimalToBinary(x);
    
//    printf("Binary value is: %d\n", bin);
    
//    return 0;
//}

//Q-5

int fab(int a,int b,int num){
    int x=a;
    int y=b;
    int z;
    int n=num;
    if (n==0){
        return 0;}
    else{
        z=x+y;
        printf("%d ",z);
        return fab(y,z,n-1);
    }    
}
int main(){
    int a=0;
    int b=1;
    int num;
    printf("FIBONACCI SERIES PRINTER\nEnter nth term of fibonacci series:\t ");
    scanf("%d",&num);
    printf("1 ");
    fab(a,b,num);
return 0       
}
