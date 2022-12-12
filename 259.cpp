// replace templates T, U with auto keyword
template <class T, class U>
T Func(T var_x, T var_y, U var_z)
{
    if (var_z == '+' || var_z)
    {
        return var_x + var_y;
    }
    else if (var_z == '-' || !var_z)
    {
        return var_x - var_y;
    }
}