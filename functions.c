#include <stdio.h>

// Creates a datatype "struct". This is similar to int, float, char, void, etc.
struct StoreValues {
    // This structure stores three variables
    int sum, diff, mul;
    float division; // Division operation can result as fraction, so we use float datatype
};

// Defining a custom datatype called values.
typedef struct StoreValues values;

// Returns the absolute value of subtraction operation.
// Returns an integer when this function is called.
int absoluteValue(int a, int b) {
    if(a>b)
        return a-b;
    else
        return b-a;
};

// Returns the structure which is defined above
values operate(int a, int b) {
    // Creates a structure of StoreValues type and it is used to store three variables
    values v;
    int c, d, e; // Used to store add,sub,mul values
    float f; // Division operation can be fraction, so we use float datatype
    
    c = a + b;
    d = absoluteValue(a,b);
    e = a*b;
    
    // (integer/integer) is always an integer
    // But with division operation, we get fraction output (decimals), so we convert the values from int to float temporarily
    f = (float)a/(float)b;

    // We created v variable as a datatype that can save three integers
    // We perform some operations and store them respectively as the three values
    v.sum = c;
    v.diff = d;
    v.mul = e;
    v.division = f;
    
    return v;
}

int main()
{
    int a=10, b=15;
    
    values result;
    
    result = operate(a, b);
    
    /* You can use these if required
    int c,d,e;
    float f;
    c = result.sum;
    d = result.diff;
    e = result.mul;
    f = result.division;
    */
    
    printf("%d %d %d %f\n", result.sum, result.diff, result.mul, result.division);
    
    return 0;
}
