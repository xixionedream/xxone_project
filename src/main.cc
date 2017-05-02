#include "print.h"

#define PAUSE std::cout<<"Enter Press any key to continue."<<std::endl; fgets(stdin);

int main(int argc, char* argv[])
{
	Print print;
	print.show();

	std::cout<<"this is my first modify document"<<std::endl;
	PAUSE
	return 0;
}