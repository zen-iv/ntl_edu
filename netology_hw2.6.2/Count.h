#pragma once
class Count
{
public:
    void u_input(int& user_input);
    void incr();
    void decr();
    int nowis();
    Count(int count) { this->count = count; }
    Count()
    {
        count = 1;
    }
private:
    int count;
};