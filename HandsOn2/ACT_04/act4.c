#include <stdio.h>
#include <math.h>
 

typedef struct {
float x;
float y;
} points ;

double cal_distance(double d_x1, double d_x2, double d_y1, double d_y2)
{
	return sqrt(pow(d_x2 - d_x1,2)+pow(d_y2 - d_y1,2));
}


 
float dist( points A, points B) {
    



	char map[20][79];

	map[(int)A.y][(int)B.x] = 'A';
	map[(int)A.y][(int)B.x] = 'B';

	double distance = 0;

	distance = cal_distance( A.x , B.x , A.y , B.y );
    
return(distance);
}
 
int main(){
 
float d;
points A, B;
 

printf("The coordinates of the point A are: ");
scanf("%f %f",&A.x,&A.y);
 

printf("\nThe coordinates of the point B are: ");
scanf("%f %f",&B.x,&B.y);
 

printf("\nThe distance between A and B is %f\n", dist(A,B));
 
exit (0);
}
