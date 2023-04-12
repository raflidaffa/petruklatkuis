void vPtr(void* p, char type)
{
    if (type == 'i')
    {
        for (int i = 0; i < *(int *)p;i++) {
            cout << "ing" << endl;
        }
    }
    else if (type == 'c')
    {
        cout << "ceng " << *(char*)p << endl;
    }
}
