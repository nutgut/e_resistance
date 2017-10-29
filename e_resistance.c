#include <stdio.h>
#include <stdio.h>
#include "e_resistance.h"

int e_resistance(float orig_resistance, float *res_array )
{
int ans=0;
int count=0;
int e12[36]={10, 12, 15, 18, 22, 27, 33, 39, 47, 56, 68, 82}; 
int len=sizeof(e12)/sizeof(int);

for (int i=0; i< len-12; i++){

	e12[i+12]=e12[i]*10;
	
}

res_array[0]=0;
res_array[1]=0;
res_array[2]=0;

	for (int i=len-1; i>=0; i--)
	{
		for (int j=len-1; j>=0; j--)
		{
			for (int k=len-1; k>=0; k--)
			{
				if (orig_resistance-e12[i]==0)
				{
					res_array[0]=e12[i];
					res_array[1]=0;
					res_array[2]=0;
					ans=1;
					i,j,k=-1;
				}
				else if (orig_resistance-e12[i]-e12[j]==0)
				{
		                        res_array[0]=e12[i];
			                res_array[1]=e12[j];
					res_array[2]=0;
					ans=2;
					i,j,k=-1;		
				}
				else if (orig_resistance-e12[i]-e12[j]-e12[k]==0)
				{
                                        res_array[0]=e12[i];
                                        res_array[1]=e12[j];
                                        res_array[2]=e12[k];
					ans=3;
					i,j,k=-1;
				}
			}
		}
	}
return ans;
}
