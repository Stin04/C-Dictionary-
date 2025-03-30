// Justine Casipit Idos 12-CPE-01
// ML Hero Dictionary in C++

#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string hero;
        cout << "Search a Hero (or type 'exit' to quit): ";
        getline(cin, hero);

        if (hero == "Aldous") {
            cout << "A fighter with a powerful ultimate that can one-shot enemies." << endl;
        } else if (hero == "Fanny") {
            cout << "An agile assassin who can jump between walls and deal burst damage." << endl;
        } else if (hero == "Gusion") {
            cout << "A deadly assassin-mage known for his fast combo skills." << endl;
        } else if (hero == "Esmeralda") {
            cout << "A tank-mage hybrid that absorbs shields and becomes harder to kill." << endl;
        } else if (hero == "Ling") {
            cout << "A mobile assassin with high burst damage and dashes." << endl;
        } else if (hero == "Lancelot") {
            cout << "A stylish assassin with deadly swordplay and invincibility frames." << endl;
        } else if (hero == "Chou") {
            cout << "A fighter with high mobility and strong crowd control." << endl;
        } else if (hero == "Franco") {
            cout << "A tank known for his hooks that can catch enemies off guard." << endl;
        } else if (hero == "Beatrix") {
            cout << "A marksman with multiple weapons, each with different mechanics." << endl;
        } else if (hero == "Harith") {
            cout << "A mage with high mobility and strong AoE burst damage." << endl;
        } else if (hero == "Claude") {
            cout << "A marksman with an AoE ultimate and a teleporting clone." << endl;
        } else if (hero == "Benedetta") {
            cout << "An assassin with a powerful dash attack and invincibility skills." << endl;
        } else if (hero == "Paquito") {
            cout << "A fighter with strong boxing skills and high burst damage." << endl;
        } else if (hero == "Karrie") {
            cout << "A marksman that excels in shredding tanks with true damage." << endl;
        } else if (hero == "Sun") {
            cout << "A fighter that creates clones to confuse and overwhelm enemies." << endl;
        } else if (hero == "Argus") {
            cout << "A fighter with an ultimate that makes him temporarily immortal." << endl;
        } else if (hero == "Valentina") {
            cout << "A mage who can copy enemy ultimates and sustain in fights." << endl;
        } else if (hero == "Julian") {
            cout << "A powerful hybrid hero who can use enhanced versions of his skills." << endl;
        } else if (hero == "Fredrinn") {
            cout << "A tank-fighter that builds up energy for powerful combos." << endl;
        } else if (hero == "X.Borg") {
            cout << "A fighter with a burning armor that deals high AoE damage." << endl;
        } else if (hero == "Ruby") {
            cout << "A fighter with lifesteal and strong crowd control abilities." << endl;
        } else if (hero == "Pharsa") {
            cout << "A mage with a long-range ultimate that deals massive area damage." << endl;
        } else if (hero == "Cecilion") {
            cout << "A mage with infinite scaling damage and strong crowd control." << endl;
        } else if (hero == "Granger") {
            cout << "A marksman with high burst damage and a deadly ultimate." << endl;
        } else if (hero == "Moskov") {
            cout << "A marksman with a fast attack speed and stunning spear throws." << endl;
        } else if (hero == "Jawhead") {
            cout << "A fighter with strong throwing abilities and burst damage." << endl;
        } else if (hero == "Helcurt") {
            cout << "An assassin who silences enemies and gains speed in darkness." << endl;
        } else if (hero == "Hanzo") {
            cout << "An assassin that can send his soul to attack enemies from afar." << endl;
        } else if (hero == "Natalia") {
            cout << "An assassin who becomes invisible and deals critical damage." << endl;
        } else if (hero == "Balmond") {
            cout << "A tank-fighter with a spinning AoE attack and powerful execute skill." << endl;
        } else if (hero == "Khufra") {
            cout << "A tank with strong anti-dash abilities and crowd control." << endl;
        } else if (hero == "Grock") {
            cout << "A tank that can create walls and deal high burst damage." << endl;
        } else if (hero == "Akai") {
            cout << "A tank that can pin enemies with his spinning ultimate." << endl;
        } else {
            cout << "Hero is not in the database!" << endl;
        }

        if (hero == "exit") {
            cout << "Exiting program..." << endl;
            break;
        }
    }

    return 0;
}