/* Enter your solutions in this file */
#include<stdio.h>

int max(int x[],int y)
{
       int large=x[0];
       for(int i=1;i<y;i++)
       {
          if(x[i]>large)
          large =x[i];
       }
       return large;
}

int min(int x[],int y)
{
       int small=x[0];
       for(int i=1;i<y;i++)
       {
          if(x[i]<small)
          small=x[i];
       }
       return small;
}

float average(int x[],int y)
{
       float sum=0;
       for(int i=0;i<y;i++)
       {
          sum+=x[i];
       }
       return sum/y;
}

int mode(int x[],int y)
{
       int tol_max=0,max_val;
       for(int i=0;i<y;i++)
       {
          int max=0;
          for(int j=0;j<y;j++)
          {
             if(x[j]==x[i])
             max++;
          }
          if(max>tol_max)
          {
            tol_max=max;
            max_val=x[i];
          }
       }
       return max_val;
}

int factors(int x,int y[])
{
       int k=0;
       int a=x;
       while(a%2==0)
       {
         a/=2;
         y[k]=2;
         k++;
       }
       while(a>3)
       {
          for(int i=3;i<x/2;i++)
          {
             if(a%i==0)
             {
               int count=0;
               for(int j=2;j<i;j++)
               {
                  if(i%j==0)
                  {
                    count++;
                    break;
                  }
               }
               if(count==0)
               {
                 y[k]=i;              
                 k++;
                 a/=i;
                 break;
               }
             }
          }
       }
       return k;
}
