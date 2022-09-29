#pragma once


/* Struct for a point */
typedef struct point {
	int x;
	int y;
} point;

/*add your definition of circle here. You need to call it "circle"*/
/* Struct for circle */
typedef struct circle {
	point p; /*Centre point of circle */
	int r; /* Radius variable */
} circle;

void fiveCircles(circle c[]);
int circleIsValid(const circle* c);
void translate(circle* c, const point* p);