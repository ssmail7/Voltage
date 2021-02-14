//************************************************************
// Written by Steven Smail for COP3514
//
// voltage.c (Project 2)
//
// This program will calculate the voltage starting at time 0
// until the time reaches 12. The time will be incremented by
// 0.5 for each successive calculation of the voltage.
//************************************************************

#include <stdio.h>
#include <math.h>

int main(void)
{
  double t, v;

  //Heading
  printf("time (sec)\t voltage\n");

  //Loop to calculate voltage
  for(t = 0; t <= 12; t += 0.5)
  {
    if (t < 1.0)
    {
      v = 0.5 * sin(2 * t);
      printf("%.2f \t\t %.2f\n", t, v);
    }
    else if (t > 10.0)
    {
      v = sin(10.0);
      printf("%.2f \t\t %.2f\n", t, v);
    }
    else
    {
      v = sin(t);
      printf("%.2f \t\t %.2f\n", t, v);
    }
  }

  return 0;
}