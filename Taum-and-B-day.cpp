long taumBday(int b, int w, int bc, int wc, int z)
{
    return b * long(std::min(bc, wc+z))  +  w * long(std::min(wc, bc+z));
}


long taumBday1(int b, int w, int bc, int wc, int z)
{
    long bc1 = bc < wc+z ? bc : wc+z;
    long wc1 = wc < bc+z ? wc : bc+z;

    return (b*bc1) + (w*wc1);
}
