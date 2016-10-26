/* 
First Come First Served Algorithm
Author: Federico Farris 
*/
#include<iostream>
#include<math.h>

 int main()
 { int processCount,i=0;
   
   std::cout<<"Insert the number of process:"<<std::endl;
   std::cin>>processCount;
   int burstTime[processCount];
   int waitingTime[processCount];
   int tournaroundTime[processCount];
   
   for(i=0;i<processCount;i++)
   { std::cout<<"Insert the burstTime of the P["<<(i+1)<<"]"<<std::endl;
     std::cin>>burstTime[i];
   	}
    
    waiting time[0]=0;
	for(i=0;i<processCount;i++)
	{
		waitingtime[i]=waitingtime[i-1]+burstTime[i-i];
	}
	
		for(i=0;i<processCount;i++)
	{
		
	}
   
   
   
   
   
   
   
   
   return 0;
 	
 }
