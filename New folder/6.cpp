int EvenOdd(string n1 , string n2)
{
    //code here.
    char last1 = n1[n1.length() - 1];
    char last2 = n2[n2.length() - 1];

    // Convert char digits to int
    int digit1 = last1 - '0';
    int digit2 = last2 - '0';

    // If either is even, product is even
    if (digit1 % 2 == 0 || digit2 % 2 == 0)
        return 1;
    
    return 0;
}