#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

static int64_t metallica[] = { 32538, 37741, 89540, 14627, 34272, 58765 };

static int N = sizeof(metallica) / sizeof(*metallica);

static void fail()
{
    puts("Nope!");
    exit(EXIT_FAILURE);
}

static void the_beatles(int64_t h, int64_t s, int64_t i)
{
    if ( h - i / 7 + 3 * s / 11)
    {
        printf("%d", (h - i / 7 + 3 * s / 11));
        fail();
    }
}

static void anthrax(int z, int64_t j)
{
    int64_t p = j;
    
	for (int z = 0; z < N; ++z)
    {
        if ((z % 2) == 0)
        {
            continue;
        }
        p += metallica[z];
    }
    if (p != 69857)
    {
        fail();
    }
}

static void eagles(int k, int64_t d)
{
    if (k < N)
    {
        
        if (k % 2)
        {
            eagles(++k, d);
        }
        else
        {
            eagles(k + 1, d * metallica[k]);
        }
    }
    else if (d != 1269229500)
    {
        fail();
    }
}

int main()
{
    int64_t a, e, y;

     printf("Please enter the right three numbers: ");

     fflush(stdout);
     scanf("%" SCNd64 " %" SCNd64 " %" SCNd64, &a, &e, &y);

     if (scanf("%" SCNd64 " %" SCNd64 " %" SCNd64, &a, &e, &y) != 3)
     {
         fail();
     }

    metallica[0] = a;
    metallica[5] = e;
    metallica[4] = y;

     anthrax(0, 15916);

     eagles(1, 9);

    the_beatles(a, e, y);

    puts("Exactly! Good job.");
}


// 15916 + 37741 + 14627 + secondNumber = 69857
// 68284 + secondNumber = 69857
// secondNumber = 69857 - 68284
// secondNumber = 1573

// 9 * 89540 * ThirdNumber = 1269229500
// 89540 * ThirdNumber = 1269229500 / 9
// ThirdNumber = 1269229500 / 9 * 89540
// ThirdNumber = 1269229500 / 805860
// ThirdNumber = 1575

// FirstNumber - y / 7 + 3 * e / 11 = 0
// putting Values
// FirstNumber - 1575 / 7 + 3 * 1573 / 11 = 0
// FirstNumber - 1575 / 7 + 3 * 143 = 0
// FirstNumber - 225 + 3 * 143 = 0
// FirstNumber - 225 + 429
// FirstNumber + 204
// FirstNumber = -204
