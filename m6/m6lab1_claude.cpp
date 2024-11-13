#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

class RaspberryRoulette {
private:
    struct Player {
        std::string name;
        int health;
        Player(std::string n, int h) : name(n), health(h) {}
    };

    std::vector<bool> chamber;  // true for raspberry rounds, false for blanks
    Player player{"Player", 2};
    Player dealer{"Dealer", 2};
    std::mt19937 rng;

    void displayOdds() {
        int total = chamber.size();
        int raspberry = std::count(chamber.begin(), chamber.end(), true);
        int blanks = total - raspberry;
        
        std::cout << "\nCurrent chamber contents: " << total << " shells total - "
                  << raspberry << " raspberry, " << blanks << " blanks\n";
    }

    void loadChamber() {
        chamber.clear();
        // Load 3 raspberry rounds and 3 blanks
        for (int i = 0; i < 3; i++) {
            chamber.push_back(true);   // raspberry
            chamber.push_back(false);  // blank
        }
        
        // Shuffle the chamber
        std::shuffle(chamber.begin(), chamber.end(), rng);
        
        // Display initial odds
        std::cout << "\n=== New Round ===\n";
        displayOdds();
    }

    bool fireShot() {
        if (chamber.empty()) return false;
        
        bool shot = chamber.back();
        chamber.pop_back();
        return shot;
    }

    void displayStatus() {
        std::cout << "\nStatus:\n";
        std::cout << player.name << " HP: " << player.health << "\n";
        std::cout << dealer.name << " HP: " << dealer.health << "\n";
        displayOdds();
    }

public:
    RaspberryRoulette() {
        // Initialize random number generator with time-based seed
        rng.seed(std::chrono::steady_clock::now().time_since_epoch().count());
    }

    void playGame() {
        std::cout << "Welcome to Raspberry Roulette!\n";
        std::cout << "Hit twice with raspberry jam and you lose!\n\n";

        while (player.health > 0 && dealer.health > 0) {
            loadChamber();
            
            while (!chamber.empty() && player.health > 0 && dealer.health > 0) {
                // Player's turn
                displayStatus();
                std::cout << "Your turn! Choose your target:\n";
                std::cout << "1. Shoot at dealer\n";
                std::cout << "2. Shoot at yourself\n";
                
                int choice;
                std::cin >> choice;

                bool isRaspberry = fireShot();
                if (choice == 1) {
                    std::cout << "You shoot at the dealer... ";
                    if (isRaspberry) {
                        std::cout << "SPLAT! Raspberry jam everywhere!\n";
                        dealer.health--;
                    } else {
                        std::cout << "Click! It was a blank.\n";
                    }
                } else {
                    std::cout << "You shoot at yourself... ";
                    if (isRaspberry) {
                        std::cout << "SPLAT! You're covered in raspberry jam!\n";
                        player.health--;
                    } else {
                        std::cout << "Click! It was a blank. You get another turn!\n";
                        continue;  // Player gets another turn
                    }
                }

                // Dealer's turn (if still alive)
                if (dealer.health > 0 && player.health > 0 && !chamber.empty()) {
                    displayOdds();  // Show odds before dealer's turn
                    std::cout << "\nDealer's turn...\n";
                    // Simple AI: dealer always shoots at player
                    bool isRaspberry = fireShot();
                    std::cout << "Dealer shoots at you... ";
                    if (isRaspberry) {
                        std::cout << "SPLAT! You're hit with raspberry jam!\n";
                        player.health--;
                    } else {
                        std::cout << "Click! It was a blank.\n";
                    }
                }
            }

            if (chamber.empty() && player.health > 0 && dealer.health > 0) {
                std::cout << "\nChamber is empty! Loading new rounds...\n";
            }
        }

        // Game Over
        std::cout << "\nGame Over!\n";
        if (player.health <= 0) {
            std::cout << "You lost! The dealer wins!\n";
        } else {
            std::cout << "Congratulations! You won!\n";
        }
    }
};

int main() {
    RaspberryRoulette game;
    game.playGame();
    return 0;
}