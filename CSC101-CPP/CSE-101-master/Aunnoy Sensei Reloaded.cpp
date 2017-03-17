#include <iostream>

#include <cstdlib>
#include <ctime>

using namespace std;


int factorial(int num);


void sort_array(int Arr[]);

int median(int Arr[]);


int main()
{
	while (true)
	{
cout<<endl<<endl<<"Enter Choice: ";

	string choice;

	cin>> choice;

	if (choice == "f")
	{
		cout<<endl<<"Enter Number: ";
		int number;
		cin>> number;

		factorial(number);
	}

	else if (choice == "m")
	{
		int Array[5];

		srand(time(0));

		cout<<endl<<"Array Elements: ";

           for (int j = 0; j<5; j++ )
           {
           		Array[j] =  0 + rand() % (10 + 1);
               cout<< Array[j] <<" ";
           }

           cout<<endl<<endl<<"Sorted Array: ";

           sort_array(Array);

            for (int j = 0; j<5; j++ )
           {
           		// Array[j] =  0 + rand() % (10 + 1);
             //   cout<< 0 + rand() % (10 + 1) <<" ";

           	cout<< Array[j] <<" ";
           }


           cout<<endl;

           median(Array);





	}

	else
		cout<<endl<<"Invalid Input. Try Again." <<endl;

	}
	
	return 0;
}



int factorial(int num)
{
	int fact = 1;

	int n = num;

	for(int i = 1; i <=n; ++i)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " = " << fact;

    return fact;
}




void sort_array(int Arr[])
{

	int ArrSize = 5;

	for (int iter = 0; iter < ArrSize - 1; iter++)
	{
		for (int jiter = iter + 1; jiter < ArrSize; jiter++)
		{
			if (Arr[iter] > Arr[jiter])
			{
				int temp = Arr[iter];
				Arr[iter] = Arr[jiter];
				Arr[jiter] = temp;
			}
		}

		
	}	
}



int median(int Arr[])
{	
	cout<<"Median: " << Arr[2] <<endl;
	return Arr[2];
}