#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 

typedef struct {
float x;
float y;
} point ;

typedef struct {
	point inici;
	point final;
} line;

float dist( line L ) {
return(sqrt((L.inici.x- L.final.x)*(L.inici.x - L.final.x) + (L.inici.y - L.final.y)*(L.inici.y - L.final.y)));
}
 
int main(){
 
line l;
 

printf("The coordinates of the point A are: ");
scanf("%f %f",&l.inici.x,&l.inici.y);
 

printf("\nThe coordinates of the point B are: ");
scanf("%f %f",&l.final.x,&l.final.y);
 

printf("\nThe distance between A and B is %f\n", dist(l));
 
exit (0);
}
