#include<stdio.h>
#include<math.h>
int main(){
    int x,y,a,b,radius,cal;
    printf("Enter the x & y cordinates of centre of the circle :");
    scanf("%d,%d",&x,&y);
    printf("Enter the radius of the circle :");
    scanf("%d",&radius);
    printf("Enter the x & y coordinates of the point :");
    scanf("%d,%d",&a,&b);
    
    cal=pow((x-a),2)+pow((y-b),2);
    if(cal>pow(radius,2)) printf("The point is outside the circle .");
    else if(cal<pow(radius,2)) printf("The point is inside the circle .");
    else printf("The point is on the circle .");
    return 0;
}