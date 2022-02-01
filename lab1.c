/**
 * @file lab1.c
 * @brief A simple geometry calculator
 * @details
 * 
 * @author Kassidy Maberry
 * @date 1/31/22
 * @bug none currently
 * @todo Finish the main function, add comments, and doxygenize.
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

        printf("Solving for the area of a rectangle.");
        rect = area_rectangle(prompt(1), prompt(2));
        printf("The area of your rectangle is: %d\n", area_rectangle(2, 3));

        printf("Solving for the perimeter of a rectangle.");
        rect = area_rectangle(prompt(1), prompt(2));
        printf("%d Prect\n", perimeter_rectangle(2, 3));

        printf("%f Ptri\n", perimeter_triangle(2,3));

        printf("%f Hypo\n", hypotenuse(2, 3));

        printf("%f Atri\n", area_triangle(2,3));

        printf("%f Acir\n", area_circle(4));

        printf("%f Circum\n", circumference(4));

        printf("%f Diarect\n", diagonal_rectangle(2,3));

        printf("%f Exang\n", exterior_angle(6));

        printf("%f Inang\n", interior_angle(6));

        printf("%f Aregpoly\n", area_regular_polygon(5, 6));

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