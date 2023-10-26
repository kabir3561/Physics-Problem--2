#include<stdio.h>
#include<math.h>

int main()
{
    int m_green=3, m_red=2;
    double lambda_green = 530e-9;
    double lambda_red = 700e-9;
	double theta_green = 65 * (3.1416/180.0); //Converting to radian
	double theta_red, d;

    d = (m_green * lambda_green) / (sin(theta_green));
    //now calculating theta for red light
   theta_red = asin((m_red*lambda_red)/d);
   theta_red=theta_red*(180/3.1416);
    printf("Result is= %.2lf",theta_red);

    return 0;
}

