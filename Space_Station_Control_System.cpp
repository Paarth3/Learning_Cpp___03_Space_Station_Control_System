#include <iostream>
#include <cmath>

int main(){

    // --- Part 1 ---
    bool keycard_verified;
    bool bio_scan_cleared;

    std::cout << "Is the Keycard verified: ";
    std::cin >> keycard_verified;

    std::cout << "Is the Bio Scan cleared: ";
    std::cin >> bio_scan_cleared;

    if(keycard_verified && bio_scan_cleared){
        std::cout << "Access Granted: Opening Airlock. \n";
    }
    else{
        std::cout << "Access Denied. \n";
    }

    // --- Part 2 ---
    int choice;
    std::cout << "Menu: \n 1. Pizza \n 2. Burger \n 3. Salad \n 4. Water \n";
    std::cout << "Enter the item number associated with the item you want: ";
    std::cin >> choice;

    switch(choice){
        case 1:
            std::cout << "Pizza \n";
            break;
        case 2:
            std::cout << "Burger \n";
            break;
        case 3:
            std::cout << "Salad \n";
            break;
        case 4:
            std::cout << "Water \n";
            break;
        default:
            std::cout << "Error: Invalid Selection. \n";
    }

    // --- Part 3 ---
    double temperature;

    std::cout << "Enter the current temperature: ";
    std::cin >> temperature;

    std::cout << ((temperature > 1000.0) ? "CRITICAL \n" : "NORMAL \n");

    // --- Part 4 ---
    bool meteor_warning;
    bool enemy_detected;
    bool maintenance_mode;

    std::cout << "Do we have a meteor warning: ";
    std::cin >> meteor_warning;

    std::cout << "Do we have enimies around: ";
    std::cin >> enemy_detected;

    std::cout << "Are we in maintenance mode: ";
    std::cin >> maintenance_mode;

    std::cout << (((meteor_warning || enemy_detected) && (!maintenance_mode)) ? "Shields Up \n" : "Shields Down \n");

    // --- Final Part ---
    double distance;
    double target_speed;
    bool is_friendly;

    std::cout << "Enter the distance: ";
    std::cin >> distance;
    
    std::cout << "Enter the target speed: ";
    std::cin >> target_speed;

    std::cout << "Is the target friendly: ";
    std::cin >> is_friendly;

    bool time_to_impact = (distance / target_speed);

    if(is_friendly){
        std::cout << "Target Friendly. Holding Fire. \n";
    }
    else if(time_to_impact < 10.0){
        std::cout << "Threat Imminent! Firing Cannons! \n";
    }
    else if(time_to_impact <= 30.0){
        std::cout << "Target Closing. Tracking... \n";
    }
    else{
        std::cout << "Target too far. Waiting. \n";
    }

    return 0;
}