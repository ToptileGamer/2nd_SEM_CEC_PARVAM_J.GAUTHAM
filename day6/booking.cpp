#include <iostream>
#include <string>
using namespace std;

class Booking
{
    public:
    string customerName;
    int seats;

    Booking(string name = "" ,int s = 1): customerName(name), seats(s) {}

    virtual void bookTicket() = 0;

    virtual ~Booking() {}
    };
    class FlightBooking : public Booking
    {
        public:
        FlightBooking(string name = "", int s): Booking(name, s) {}

        void bookTicket() override
        {
            cout << "Flight ticket booked for " << customerName << " with " << seats << " seat(s)." << endl;
            }
        };

        class TrainBooking : public Booking
        {
            public:
            TrainBooking(string name , int s): Booking(name, s) {}

            void bookTicket() override
            {
                cout << "Train ticket booked for " << customerName << " with " << seats << " seat(s)." << endl;
            }
        };
        class BusBooking : public Booking
        {
            public:
            BusBooking(string name , int s): Booking(name, s) {}

            void bookTicket() override
            {
                cout << "Bus ticket booked for " << customerName << " with " << seats << " seat(s)." << endl;
            }
            
        };

        int main()
        {
            Booking *booking1 = new FlightBooking("Alice", 2);
            Booking *booking2 = new TrainBooking("Bob", 3);
            Booking *booking3 = new BusBooking("Charlie", 1);

            cout << "=== Ticket Booking ===" << endl;
            booking1->bookTicket();
            cout << endl;
            booking2->bookTicket();
            cout << endl;
            booking3->bookTicket();
            cout << endl;

            delete booking1;
            delete booking2;
            delete booking3;

            return 0;
        }