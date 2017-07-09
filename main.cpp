#include <stdlib.h>
#include <iostream>

int solution(int A[], int N)
{
        int profit =0;

        for(auto i = 0 ; i != N ; ++i )
        {
                //j = i+1 I do not need to look back
                for(auto j = i+1 ; j != N ; ++j )
                {
                        if(A[i]>=A[j])
                        {
                        //no profit
                        }
                        else
                        {
                        //profit
                                if( (A[j]-A[i]) > profit)
				{
                                        profit = (A[j]-A[i]);
				} 
			}
		}
	}
	return profit;
}

int solution_2(int A[], int N)
{
	int profit =0;
	int min	= A[0];

	for(auto i = 1 ; i != N ; ++i )
	{
		if(A[i]>A[i-1])
		{
			//profit
			if(profit< A[i]-min)
			{	
				profit= A[i]-min;
			}
		}
		else
		{
			//new min
			if(min>A[i])
				min = A[i];
		}
	}
	return profit;
}

int  main()
{
	int A[]={23171,21011,21123,21366,21013,21367};

	int result = solution(&A[0], (int)(sizeof(A)/sizeof(*A)) );
	std::cout<<std::to_string(result)<<std::endl;
	
	result = solution_2(&A[0], (int)(sizeof(A)/sizeof(*A)) );
	std::cout<<std::to_string(result)<<std::endl;

	return 0;
}

