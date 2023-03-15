#pragma once

#include <stdexcept>

class Uncorrect_Figure : public std::domain_error
{
public:
    Uncorrect_Figure(std::string err);
};