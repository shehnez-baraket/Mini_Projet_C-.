#ifndef TICKET_H
#define TICKET_H
#include<Date.h>
#include <string>
using namespace std;
class Ticket
{
    private:
        float prix;
        string type;
        Date date_Achat;
    public:
        Ticket();
        string getType(){return type;}
        void setType(string tp){type=tp;}
        int getPrix(){return prix;}
        void setPrix(float p){prix=p;}
        virtual ~Ticket();
};

#endif // TICKET_H
