int digital_root(int n)
{
    int sumacyfr = 0;
    while (n > 0)
    {
        sumacyfr += n % 10;
        n /= 10;
    }

    if (sumacyfr > 9)
        return digital_root(sumacyfr);
    else
        return sumacyfr;

}