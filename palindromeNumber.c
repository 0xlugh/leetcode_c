bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    long reverse = 0;
    int copy = x;
    while (x > 0) {

        double Quotient = (double)x / (double)10;
        Quotient = trunc(Quotient);
        double Remainder = (double)x - (double)10*Quotient;
        reverse = (reverse * 10) + (int)Remainder;
        x /= 10;
    }

    return reverse == copy;
}
