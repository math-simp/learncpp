// https://engage.cloud.microsoft/main/org/mathworks.com/threads/eyJfdHlwZSI6IlRocmVhZCIsImlkIjoiMjkyMjA0NTU4NTUxNDQ5NiJ9?trk_copy_link=V2

void east_const()
{
    int i = 1;
    int &r = i;
    int *p = &i;

    // east const style

    int const c = 1;
    int const &cr = i;

    // pointer to const int
    int const *pc = &i;

    // const pointer to int
    int *const cp = &i;
    int j = 2;
    // cp = &i; // invalid

    // const pointer to const int
    int const *const cpc = &i;
}

void west_const()
{
    int i = 1;
    int &r = i;
    int *p = &i;

    // west const style

    const int c = 1;
    const int &cr = i;

    // pointer to const int
    const int *pc = &i;

    // const pointer to int
    int *const cp = &i;
    int j = 2;
    // cp = &i; // invalid

    // const pointer to const int
    const int *const cpc = &i;
}

int main()
{
    float f{4.1f};
    east_const();
    west_const();

    return 0;
}