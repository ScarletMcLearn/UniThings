#include <iostream>

#include <cstdlib>
#include <ctime>

using namespace std;


int factorial(int num);


void sort_array(int Arr[]);

int median(int Arr[]);


void sort_and_median(int Arr[]);

int maximum(int Arr[]);

int minimum(int Arr[]);

float average(int Arr[]);

int sum(int Arr[]);

int display(int Arr[]);



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


void sort_and_median(int Arr[])
{	
	 cout<<endl<<endl<<"Sorted Array: ";

           sort_array(Array);

            for (int j = 0; j<5; j++ )
           {
           		// Array[j] =  0 + rand() % (10 + 1);
             //   cout<< 0 + rand() % (10 + 1) <<" ";

           	cout<< Array[j] <<" ";
           }


           cout<<endl;
	sort_array(Arr[]);
	median(Arr[]);
}




int maximum(int Arr[])
{
	int max = Arr[0];

	for (int iter = 1; iter < 5; iter++)
	{
		if Arr[iter] > max
			max = Arr[iter];
	}

	return max;
}

int minimum(int Arr[])
{
	int min = Arr[0];

	for (int iter = 1; iter < 5; iter++)
	{
		if Arr[iter] > min
			min = Arr[iter];
	}

	return min;
}

float average(int Arr[])
{
	// ;

	return (float(sum(Arr))/5);
}

int sum(int Arr[])
{
	int s = 0;
	for (int iter = 0; iter < 5; iter++)
	{
		s = s + Arr[iter];
	}

	return s;
}

int display(int Arr[])
{
	for (int iter = 0; iter < 5; iter++)
	{
			cout<<Arr[iter] << " ";
	}
}