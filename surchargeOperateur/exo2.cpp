#include<iostream>

class Date
{
    private:
        int jour , mois, annee;
    public:
        Date(int J, int M, int A) : jour(J), mois(M), annee(A){};
        bool operator==(const Date& date)const
        {
            return this->jour == date.jour && 
                this->mois == date.mois && 
                    this->annee == date.annee;
        }
        ~Date(){};
};

int main(void)
{
    Date day1(7, 1, 2007);
    Date day2(7, 1, 2007);
    Date day3(8, 6, 2024);
    
    if(day1 == day2)
    {
        std::cout << "dates equivalentes" << std::endl;
    }else
    {
        std::cout <<  "dates differentes" << std::endl;
    }

    if(day1 == day3)
    {
        std::cout << "dates equivalentes" << std::endl;
    }else
    {
        std::cout <<  "dates differentes" << std::endl;
    }

}
