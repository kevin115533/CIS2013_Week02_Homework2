#include <iostream>
using namespace std;

int main()
{
	int numBott = 99;
	bool repeat = true; 
	
	while(repeat)
	{
		cout << numBott << " bottles of beer on the wall, " << numBott << " bottles of beer." << endl;
		numBott--;
		;cout << "Take one down and pass it around, " << numBott << " bottles of beer on the wall." << endl;
		
		if(numBott > 1){repeat = true;}
		else{repeat = false;}
	}	
		
	cout << "1 bottle of beer on the wall, 1 bottle of beer." << endl;
	cout << "Take one down and pass it around, no more bottles of beer on the wall." << endl;
	cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall.";
	return 0;	
}	