/**
 * @file lab1.c
 * @brief A simple geometry calculator
 * @details
 * 
 * @author Kassidy Maberry
 * @date 1/31/22
 * @bug none currently
 * @todo code basic 11 functions currently.
 */


#include <stdio.h>
#include <math.h>

int main(void)
{
        


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

float hypotenuse (float opp, float adj)
{
        return sqrt(pow(opp, 2) + pow(adj, 2));
}

float perimeter_triangle(float hei, float base)
{
        return hypotenuse(hei,base) + hei + base;
}

float area_triangle(int hei, int base)
{
        return (hei*base)/2;
}

float area_circle(float radi)
{
        return M_PI * pow(radi, 2);
}

float area_circle(float radi)
{
        return 2 * M_PI * radi;
}

float diagonal_rectangle(int len, int wid)
{
        return hypotenuse(len, wid);
}

double exterior_angle(int angles)
{
        return 360/angles;
}

double interior_angle(int angles)
{
        return 0.0;
}