#include "Intern.hpp"

const std::string   Intern::mForms[3] =
{
    "ShrubberyCreation",
    "RobotomyRequest",
    "PresidentialPardon"
};

Intern::Intern(void)
{
}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern::~Intern(void)
{
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return (*this);
}

Form*   Intern::makeForm(const std::string& name, const std::string& target) const
{
    Form*   (*formGenerator[3])(const std::string&) = {newShrubberyCreation, newRobotomyRequest, newPresidentialPardon};

    for (int i = 0; i < 3; i++)
    {
        if (mForms[i].compare(name) == 0)
        {
            std::cout << "Intern creates <" << name << ">." << std::endl;
            return (formGenerator[i](target));
        }
    }
    std::cout << "Intern cannot create <" << name << ">." << std::endl;
    return (NULL);
}

Form*						newShrubberyCreation(const std::string& target)
{
    return (new ShrubberyCreationForm(target));
}

Form*						newRobotomyRequest(const std::string& target)
{
    return (new RobotomyRequestForm(target));
}

Form*						newPresidentialPardon(const std::string& target)
{
    return (new PresidentialPardonForm(target));
}

