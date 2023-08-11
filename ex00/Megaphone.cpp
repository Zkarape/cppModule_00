#include <iostream>

int main(int argc, char **av)
{
    int     i;
    int     j;

    i = 0;
    j = -1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (av[++i])
    {
        j = -1;
        while (av[i][++j])
            av[i][j] = std::toupper(av[i][j]);
        std::cout << av[i];
    }
    std::cout << std::endl;
    return (0);
}