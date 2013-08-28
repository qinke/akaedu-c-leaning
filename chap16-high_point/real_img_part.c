double rect_ral_part(strucy complex_struct z)
{
    return z.a;
}

double rect_img_part(struct complex_struct z)
{
    return z.b;
}

double rect_magnitude(struct complex_struct z)
{
    return sqrt(z.a*z.a + z.b*z.b);
}

double rect_angle(struct complex_struct z)
{
    double PI = acos(-1.0);
    if(z.a > 0)
        return atan(z.b / z.a);
    else
        return atan(z.b / z.a) + PI;
}

double pol_real_part(struct complex_struct z)
{
    return z.z*cos(z.b);
}

double pol_img_part(struct complex_struct z)
{
    return z.a*sin(z.b);
}

double pol_magnitude(struct complex_struct z)
{
    return z.a;
}

double pol_angle(struct complex_struct z)
{
    return z.b;
}
