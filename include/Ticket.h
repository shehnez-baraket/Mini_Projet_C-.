#ifndef TICKET_H
#define TICKET_H


class Ticket
{
    private:
        float prix;

    public:
        Ticket();
        int getPrix(){return prix;}
        void setPrix(float p){prix=p;}
        virtual ~Ticket();
};

#endif // TICKET_H
