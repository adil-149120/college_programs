#include<stdio.h>
int main(){
    float length,breadth,radius,rectangle_area,perimeter,circle_area,circumference;;
    printf("Enter the length of the rectangle :");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle :");
    scanf("%f",&breadth);
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);

    rectangle_area=(length*breadth);
    perimeter=2*(length+breadth);
    circle_area=(22.0/7)*(radius)*(radius);
    circumference=2*(22.0/7)*(radius);

    printf("The area of the rectangle is : %f\n",rectangle_area);
    printf("The perimeter of the rectangle is : %f\n",perimeter);
    printf("The area of the circle is : %f\n",circle_area);
    printf("The circumference of  the circle is : %f\n",circumference);
    
    return 0;
}
