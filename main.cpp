#include <ctime>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

class User {
protected:
    int userId;
    string username;
    string email;
    string password;
    string contact;

public:
    User() : userId(rand() % 10000 + 1) {}

    void createProfile() {
        cout << "Enter Username: ";
        getline(cin, username);
        cout << "Enter Email: ";
        getline(cin, email);
        cout << "Enter Password: ";
        getline(cin, password);
        cout << "Enter Contact No: ";
        getline(cin, contact);
        cout << "Profile created successfully. Your User ID is " << userId << "\n";
    }

    void updateProfile() {
        cout << "Enter New Username: ";
        getline(cin, username);
        cout << "Enter New Email: ";
        getline(cin, email);
        cout << "Enter New Contact No: ";
        getline(cin, contact);
        cout << "Profile updated successfully.\n";
    }

    void viewProfile() const {
        cout << "\n--- User Profile ---\n";
        cout << "User ID: " << userId << "\n";
        cout << "Username: " << username << "\n";
        cout << "Email: " << email << "\n";
        cout << "Contact No.: " << contact << "\n";
    }

    void logIn() {
        cout << "Enter Email: ";
        getline(cin, email);
        cout << "Enter Password: ";
        getline(cin, password);
        cout << "Signed in successfully.\n";
    }

    int getUserId() const { return userId; }
};

class Airplane : public User {
protected:
    int airplaneId = 0;
    string modelName;
    int price = 0;
    string area;
    string flightDate;

public:
    void addAirplane() {
        cout << "Enter Airplane ID: ";
        cin >> airplaneId;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Model Name: ";
        getline(cin, modelName);

        cout << "Enter Ticket Price: ";
        cin >> price;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Area Code: ";
        getline(cin, area);

        cout << "Enter Flight Date (DD/MM/YYYY): ";
        getline(cin, flightDate);
    }

    void viewList() const {
        cout << "\n--- Airplane Details ---\n";
        cout << "ID: " << airplaneId << "\n";
        cout << "Model: " << modelName << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Area Code: " << area << "\n";
        cout << "Date: " << flightDate << "\n";
    }

    int getPrice() const { return price; }
};

class FlightSchedule : public Airplane {
protected:
    string arrival;
    string departure;
    string origin;
    string destination;
    string flightNo;

public:
    void addSchedule() {
        cout << "Enter Flight Number: ";
        getline(cin, flightNo);
        cout << "Enter Origin: ";
        getline(cin, origin);
        cout << "Enter Destination: ";
        getline(cin, destination);
        cout << "Enter Arrival Time: ";
        getline(cin, arrival);
        cout << "Enter Departure Time: ";
        getline(cin, departure);
    }

    void viewSchedule() const {
        cout << "\n--- Flight Schedule ---\n";
        cout << "Flight Number: " << flightNo << "\n";
        cout << "Origin: " << origin << "\n";
        cout << "Destination: " << destination << "\n";
        cout << "Arrival Time: " << arrival << "\n";
        cout << "Departure Time: " << departure << "\n";
        cout << "Date: " << flightDate << "\n";
    }

    string getFlightNo() const { return flightNo; }
};

class MealOption {
protected:
    int mealId = 0;
    int mealType = 0;
    string meal;

public:
    void addMeal() {
        mealId = rand() % 1000 + 1;
        cout << "Enter meal type (1. veg, 2. non-veg): ";
        cin >> mealType;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (mealType == 1) {
            cout << "VEG MENU: Veg sandwich, Veg noodles, Veg feast thali\n";
        } else if (mealType == 2) {
            cout << "NON-VEG MENU: Non-veg sandwich, Chicken fries, Non-veg feast thali\n";
        } else {
            cout << "Invalid meal type selected.\n";
            return;
        }

        cout << "Enter selected meal: ";
        getline(cin, meal);
        cout << "Meal added successfully.\n";
    }

    int getMealId() const { return mealId; }
};

class SpecialRequirement {
protected:
    int reqId;
    string requirement;

public:
    SpecialRequirement() : reqId(rand() % 1000 + 1) {}

    void viewRequirements() const {
        cout << "Available requirements: Wheelchair, Doctor/Nurse, Staff Support, Extra Baggage\n";
    }

    void addRequirement() {
        cout << "Enter requirement: ";
        getline(cin, requirement);
        cout << "Requirement added successfully.\n";
    }

    int getReqId() const { return reqId; }
};

class ReservationSystem : public FlightSchedule, public MealOption, public SpecialRequirement {
private:
    int reservationId;
    int seatNumber = 0;
    int totalPrice = 0;
    string bookingDate;
    string bookingTime;
    bool isConfirmed = false;

public:
    ReservationSystem() : reservationId(rand() % 10000 + 1) {}

    void makeBooking() {
        cout << "Enter seat number: ";
        cin >> seatNumber;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        totalPrice = getPrice();

        cout << "Enter booking date (DD/MM/YYYY): ";
        getline(cin, bookingDate);
        cout << "Enter booking time (HH:MM): ";
        getline(cin, bookingTime);

        isConfirmed = true;
        cout << "Booking confirmed. Reservation ID: " << reservationId << "\n";
    }

    void viewBooking() const {
        cout << "\n----- FLIGHT BILL -----\n";
        cout << "Reservation ID: " << reservationId << "\n";
        cout << "User ID: " << getUserId() << "\n";
        cout << "Flight Number: " << getFlightNo() << "\n";
        cout << "Seat Number: " << seatNumber << "\n";
        cout << "Meal Option ID: " << getMealId() << "\n";
        cout << "Special Request ID: " << getReqId() << "\n";
        cout << "Total Price: $" << totalPrice << "\n";
        cout << "Booking Date: " << bookingDate << "\n";
        cout << "Booking Time: " << bookingTime << "\n";
        cout << "Status: " << (isConfirmed ? "Confirmed" : "Pending") << "\n";
        cout << "Thank you for flying with SKYHIGH AIRLINE\n";
    }

    void cancelBooking() {
        isConfirmed = false;
        cout << "Booking with reservation ID " << reservationId << " has been cancelled.\n";
    }
};

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    ReservationSystem booking;
    int choice = 0;

    cout << "Welcome to SKYHIGH AIRLINE Reservation System\n\n";

    booking.logIn();

    cout << "\nCreating a new profile...\n";
    booking.createProfile();
    booking.viewProfile();

    cout << "\nEnter flight details:\n";
    booking.addAirplane();
    booking.addSchedule();

    booking.viewList();
    booking.viewSchedule();

    cout << "\nDo you want meal (1. yes, 2. no): ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (choice == 1) {
        booking.addMeal();
    } else {
        cout << "No meal selected.\n";
    }

    cout << "\nDo you want special requirement (1. yes, 2. no): ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (choice == 1) {
        booking.viewRequirements();
        booking.addRequirement();
    } else {
        cout << "No special requirement selected.\n";
    }

    cout << "\nProceed with booking? (1. yes, 2. no): ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (choice == 1) {
        booking.makeBooking();
        booking.viewBooking();

        cout << "\nDo you want to cancel this booking? (1. yes, 2. no): ";
        cin >> choice;
        if (choice == 1) {
            booking.cancelBooking();
        }
    } else {
        cout << "Booking cancelled by user.\n";
    }

    cout << "\nThank you for using SKYHIGH AIRLINE Reservation System.\n";
    return 0;
}
