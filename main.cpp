#include <stdlib.h>
#include <iostream>

int solution(int A[], int N)
{
        int profit =0;

        for(auto i = 0 ; i != N ; ++i )
        {
                //j = i+1 porque no necesito mirar al pasado
                for(auto j = i+1 ; j != N ; ++j )
                {
                        if(A[i]>=A[j])
                        {
                        //no ganancias
                        }
                        else
                        {
                        //ganancias
                                int aux = (A[j]-A[i]);
                                if(aux>profit)
                                        profit = aux;
                        }
                }
        }
        return profit;
}

int  main()
{
        int A[]={23171,21011,21123,21366,21013,21367};

        int result = solution(&A[0], (int)(sizeof(A)/sizeof(*A)) );

        std::cout<<std::to_string(result)<<std::endl;

        return 0;
}
          
