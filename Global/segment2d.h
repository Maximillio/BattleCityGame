#ifndef SEGMENT1D_H
#define SEGMENT1D_H

struct Segment1D
{
    float A;
    float B;

    Segment1D(float _a, float _b)
    {
        A = _a;
        B = _b;
    }
    inline float length()
    {
        float res = B-A;
        if (res > 0.00)
        {
            return res;
        }
        else
        {
            return -res;
        }
    }
};

#endif // SEGMENT1D_H
