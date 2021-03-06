// 计算最大公约数的欧几里德算法
//

unsigned int Gcd( unsigned int M, unsigned int N )
{
    unsigned int Rem;

    while( N > 0 )
    {
        Rem = M % N;
        M = N;
        N = Rem;
    }
    return M;
}

int main(void)
{

