#include<iostream>
#include<unistd.h>
int main(void)
{
	int number;
	system("COLOR A");
	std::cout<<"The PID of this process is: "<<getpid() <<std::endl;
	// the following instrucion will block the process waiting for input
	std::cin>>number;
	return 0;
}
