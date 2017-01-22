int* badPtr = nullptr;

int fail()
{
    return *badPtr;
}

int f1()
{
    return 2 * fail();
}


int f2()
{
    return f1();
}

int main()
{
    f2();
    return 0;
}
