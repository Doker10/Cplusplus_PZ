Завдання 1
#include <iostream> 
#include <algorithm> 
using namespace std; 
int main()
{
	const int length = 12;
	int array[length] = { 25, 40, 10, 7, 30, 39, 45, 80, -35, 90, -45, 88 };
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}
		swap(array[startIndex], array[smallestIndex]);
	}
	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';
 
	return 0;
}
Завдання 2 
  #include <iostream>
using namespace std;
int main(void) {
    int Arr[6]={12,34,54,125,-1,65};
     
    for(int i=0; i<6; i++){
        if(Arr[i]<0)
            Arr[i]=0;
            
    
        cout<<Arr[i] <<" ";}
 return 0;
 }
