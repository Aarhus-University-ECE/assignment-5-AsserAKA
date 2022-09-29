#include <malloc.h>
#include "circle.h"
#include <stdbool.h>


/* Array of five different circles */
void fiveCircles(circle c[]) {
	int i;
	for (i = 0; i < 5; i++){
		c[i].p.x = i;
		c[i].p.y = i;
		c[i].r = i;
	}
return;
/*post: returns an array with five circles - solution to 6.b*/
}

/* Function checking if a circle is valid */
bool circleIsValid(const circle *c) {
	if(c->r > 0) /* Points and checks if radius is larger than zero */
		return true;
	else
		return false;
/*post: answer to exercise 6.c*/
}

/* Function translating a circle´s centre by vector 
	does this by adding coordinate values of the circle´s centre and vector */
void translate(circle* c, const point* p) {
	c->p.x = c->p.x + p->x; /* Pointers to x-coordinates gets added */
	c->p.y = c->p.y + p->y; /* Pointers to y-coordinates gets added */
	return;
/*answer to exercise 6.d*/
}