/**
 * @file lab1.c
 * @brief A simple geometry calculator
 * @details
 * 
 * @author Kassidy Maberry
 * @date 1/31/22
 * @bug none currently
 * @todo Add comments and doxygenize.
 */


#include <stdio.h>
#include <math.h>


int area_rectangle(int len, int wid);
int perimeter_rectangle(int len, int wid);
float perimeter_triangle(int len, int wid);
float hypotenuse(int opp, int adj);
float area_triangle(int hei, int base);
float area_circle(int radi);
float circumference(int radi);
float diagonal_rectangle(int len, int wid);
float exterior_angle(int angles);
float interior_angle(int angles);
float area_regular_polygon(int side, int angles);
int prompt(int request);

int main(void)
{
        int rect;
        float stand;        

        printf("Solving for the perimeter of a rectangle.\n");
        rect = perimeter_rectangle(prompt(1), prompt(2));
        printf("The perimeter of your rectangle is: %d\n", rect);

        printf("Solving for the perimeter of a rectangle.\n");
        rect = area_rectangle(prompt(1), prompt(2));
        printf("The area of your rectangle is: %d\n", rect);

        printf("Solving for the perimter of a triangle.\n");
        stand = perimeter_triangle(prompt(4),prompt(3));
        printf("The perimeter of your triangle is: %f\n", stand);

        printf("Solving for the hypotenuse.\n");
        stand = hypotenuse(prompt(4),prompt(3));
        printf("The hypotenuse is: %f\n", stand);

        printf("Solving for the area of a triangle.\n");
        stand = area_triangle(prompt(4),prompt(3));
        printf("The area of your triangle is: %f\n", stand);

        printf("Solving for the area of a circle.\n");
        stand = area_circle(prompt(5));
        printf("The area of your circle is: %f\n", stand);

        printf("Solving for the circumference of a circle.\n");
        stand = circumference(prompt(5));
        printf("The circumference of your circle is: %f\n", stand);

        printf("Solving for the area of a diagonal rectangle.\n");
        stand = diagonal_rectangle(prompt(1),prompt(2));
        printf("The area of your rectangle is: %f\n", stand);

        printf("Solving for the exterior angle.\n");
        stand = exterior_angle(prompt(6));
        printf("The angle of the an exterior is: %f\n", stand);

        printf("Solving for the interior angle.\n");
        stand = interior_angle(prompt(6));
        printf("The degrees of the interior angles is: %f\n", stand);

        printf("Solving for the area of a regular polygon.\n");
        stand = area_regular_polygon(prompt(1), prompt(6));
        printf("The area of a regular polygon is: %f\n", stand);

        return 0;
}

int area_rectangle(int len, int wid)
{
        return len * wid;
}


int perimeter_rectangle(int len, int wid)
{
        return 2 * len + 2 * wid;
}

float hypotenuse (int opp, int adj)
{
        return sqrt(pow(opp, 2) + pow(adj, 2));
}

float perimeter_triangle(int hei, int base)
{
        return hypotenuse(hei,base) + hei + base;
}

float area_triangle(int hei, int base)
{
        return (hei*base)/2;
}

float area_circle(int radi)
{
        return M_PI * pow(radi, 2);
}

float circumference(int radi)
{
        return 2 * M_PI * radi;
}

float diagonal_rectangle(int len , int wid)
{
        return hypotenuse(len, wid);
}

float exterior_angle(int angles)
{
        return 360/angles;
}

float interior_angle(int angles)
{
        return 180 * (angles-2);
}


float area_regular_polygon(int side, int angles)
{
        return (interior_angle(angles) / (4 * tan(M_PI / side)));
}

int prompt(int request)
{
        int val;
        switch (request) {
                case (1):
                        printf("Length: ");
                        break;

                case(2):
                        printf("Width: ");
                        break;

                case(3):
                        printf("Base: ");
                        break;
                case(4):
                        printf("Height: ");
                        break;
                case(5):
                        printf("Radius: ");
                        break;
                case(6):
                        printf("Angles: ");
                        break;
                default:
                        printf("This shouldn't appear");
                        break;
                }
        scanf("%d", &val);
        return val;
}