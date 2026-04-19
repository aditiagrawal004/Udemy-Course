//Self Referential Structure

struct tag
{
    datatype member1;
    datatype member2;

    struct tag *ptr1;
    struct tag *ptr2;
};
