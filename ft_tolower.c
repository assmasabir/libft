int ft_toloweer(int c)
{
    if (c >= 65 && c <= 90)
    {
        c+=32;
        return (c);
    }
    return (c);
}