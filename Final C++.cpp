#include <iostream>  // For input and output operations
#include <vector>    // To use the vector container
#include <string>    // To use the string class
#include <cstdlib>   // For random number generation
#include <ctime>     // To seed the random number generator with the current time
#include <stdio.h>   // For standard input and output
#include <algorithm> // For functions like find
using namespace std; // To avoid writing std::

// Horoscope Class
class Horoscope 
{
private:
    // Variables to store the zodiac sign and date
    string sign;
    string date;

    // Valid zodiac signs and dates
    vector<string> safeSigns = {
        "aquarius", "aries", "cancer", "capricorn", "gemini", "leo",
        "libra", "pisces", "sagittarius", "scorpio", "taurus", "virgo"
    };
    vector<string> safeDates = {"today", "yesterday", "tomorrow"};

public:
    // Initialize default values
    Horoscope() : sign("aquarius"), date("today") {}

    // Function to check if the provided sign is valid
    bool isValidSign(const string& s) {
        return find(safeSigns.begin(), safeSigns.end(), s) != safeSigns.end();
    }

    // Function to check if the provided date is valid
    bool isValidDate(const string& d) {
        return find(safeDates.begin(), safeDates.end(), d) != safeDates.end();
    }

    // Function to set the zodiac sign if valid
    void setSign(const string& signControl) {
        if (isValidSign(signControl)) {
            sign = signControl;
        } else {
            cerr << "Error: " << signControl << " is not a valid sign!" << endl;
        }
    }

    // Function to set the date if valid
    void setDate(const string& dateControl) {
        if (isValidDate(dateControl)) {
            date = dateControl;
        } else {
            cerr << "Error: " << dateControl << " is not a valid date!" << endl;
        }
    }

    // Function to display the horoscope message
    void displayHoroscope() {
        cout << "Horoscope for " << sign << " on " << date << ": Stay positive and embrace opportunities!" << endl;
    }
};

// Global Variables for Daily Affirmations
vector<string> affirmations = {
    "Everything you need is already inside of you.",
    "There is no end destination on this self-love journey.",
    "I am worthy of love just for being who I am.",
    "I deserve the same kindness I give to others, and I extend that kindness to myself.",
    "I am capable of achieving my goals.",
    "I am worthy of love and respect.",
    "I am growing at my own pace.",
    "It’s okay to rest. Healing is not linear.",
    "My worth is not measured by productivity.",
    "I honor my journey and all that I’ve overcome."
};

// Function to display a random affirmation
void displayAffirmation() {
    srand(static_cast<unsigned int>(time(0)));
    int index = rand() % affirmations.size();
    cout << "\nDaily Affirmation:\n" << affirmations[index] << endl;
}

// Zodiac Taglines
struct Zodiac {
    string sign;
    string tagline;
};

void displayZodiacTaglines() {
    Zodiac zodiacSigns[] = {
        {"Aries", "The leader that is fearless, full of fire!"},
        {"Taurus", "One who is Steady, loyal, and built to last."},
        {"Gemini", "Double the personality, twice the fun!"},
        {"Cancer", "One who has a soft heart, but also a strong shell."},
        {"Leo", "Born to shine, ruled by the sun."},
        {"Virgo", "Perfectionist in all the details."},
        {"Libra", "Possessing both beauty and brains."},
        {"Scorpio", "Mysterious and unforgettable."},
        {"Sagittarius", "Always chasing horizons, The adventurer."},
        {"Capricorn", "One who has unstoppable ambition."},
        {"Aquarius", "Thinking ahead, changing the game."},
        {"Pisces", "A Dreamer, with an artist connection."}
    };

    cout << "\nZodiac Signs and Their Taglines:\n";
    for (const auto& zodiac : zodiacSigns) {
        cout << zodiac.sign << ": " << zodiac.tagline << endl;
    }
}



// Setup.

vector<string> zodiacs {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};

int zodiacAdvice()
{
    bool zodiacFound = false;
    string zodiac;
    
    // Zodiac input & validation.
    
    while (zodiacFound == false){
        cout << "Enter your zodiac sign (Aries, Gemini, Cancer, etc.) and please capitalize the first letter: ";
        cin >> zodiac;
        for (int i; i < zodiacs.size(); i++){
            if (zodiacs[i] == zodiac){
                zodiacFound = true;
            }
        }
        if (zodiacFound == false){
            cout << "\nInvalid zodiac. Please check spelling and capitalization and try again. \n \n";
            cout << zodiacFound;
        }
    }
    
    // Zodiac Advice 
    
    if (zodiac == "Aquarius"){
      cout << "Don't forget to look at the smaller details from time-to-time. The big picture only gets you so far. \n";
    }
    else if (zodiac == "Pisces"){
        cout << "It's okay to think about you from time-to-time and practice what you preach. \n";
    }
    else if (zodiac == "Aries"){
        cout << "Don't go picking fights you know you can't win alone. It's okay to rely on others from time-to-time. \n";
    }
    else if (zodiac == "Taurus"){
        cout << "It's okay to listen to your heart- it might just tell you something important.";
    }
    else if (zodiac == "Gemini"){
        cout << "It's okay to try something new, but don't forget to be true to yourself.";
    }
    else if (zodiac == "Cancer"){
        cout << "It's okay to speak out and say the unsaid when you need to.";
    }
    else if (zodiac == "Leo"){
        cout << "Follow your heart, listen to the journey, and breathe every step of the way.";
    }
    else if (zodiac == "Virgo"){
        cout << "It's okay to step into the spotlight. You might just deserve more credit then you give yourself.\n";
    }
    else if (zodiac == "Libra"){
        cout << "While your heart might be in the right place, honesty requires the right moment.\n";
    }
    else if (zodiac == "Scorpio"){
        cout << "Don't be afraid to listen. You might just improve your view.\n";
    }
    else if (zodiac == "Sagittarius"){
        cout << "Don't forget to live in the moment, even if it's just for a moment.\n";
    }
    else{
        cout << "Listen to your heart, it's calling to you. \n";
    }
    
    return 0;
}

// Energy Check-In
bool isLevel(int value, int min, int max) {
    return (value >= min && value <= max);
}

int energyLevel() {
    int entry;
    cout << "\nSelf-care check-in and idea list:\n";
    cout << "Enter your current energy level: 1 = low, 2 = medium, 3 = high\n";
    cin >> entry;

    while (cin.fail() || !isLevel(entry, 1, 3)) {
        cout << "Invalid input. Please enter a number between 1 and 3.\n";
        cin.clear();
        cin.ignore(80, '\n');
        cin >> entry;
    }

    if (entry == 1) {
        cout << "Self-care idea: Take a nap or listen to calming music.\n";
    } else if (entry == 2) {
        cout << "Self-care idea: Go for a short walk or read a book.\n";
    } else if (entry == 3) {
        cout << "Self-care idea: Exercise, clean your space, or try a creative hobby.\n";
    }

    return entry;
}

// Main Function
int main() {
    Horoscope horoscope;
    int choice;

    do {
        cout << "\nWelcome to the Integrated Program! Choose an option:\n";
        cout << "1. Display Daily Affirmation\n";
        cout << "2. Display Zodiac Taglines\n";
        cout << "3. Horoscope Check\n";
        cout << "4. Energy Check-In\n";
        cout << "5. Zodiac Advice\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAffirmation();
                break;
            case 2:
                displayZodiacTaglines();
                break;
            case 3: {
                string sign, date;
                cout << "Enter your zodiac sign: ";
                cin >> sign;
                horoscope.setSign(sign);
                cout << "Enter the date (today, yesterday, tomorrow): ";
                cin >> date;
                horoscope.setDate(date);
                horoscope.displayHoroscope();
                break;
            }
            case 4:
                energyLevel();
                break;

            case 5:
                zodiacAdvice();
                break;

            case 6:
                cout << "Goodbye! Take care of yourself.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}