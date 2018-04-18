//
//  main.cpp
//  CryptoProject
//
//  Created by Anvita Hodekar and Nick Nguyen 3/9/18.
//  Copyright © 2018 Anvita Hodekar. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

vector<int> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<int> tokens;
    while (getline(ss, item, delim)) {
        string i = item;
        stringstream geek(i);
        int x = 0;
        geek >> x;
        tokens.push_back(x);
    }
    return tokens;
}


class key{
public:
    char ch;
    int freq;
    vector<int> keys;
    int pos;
    key(char c, int f, vector<int> k){
        ch = c;
        freq = f;
        keys = k;
        pos = 0;
    }
    void rewrite(char c, int f, vector<int> k){
        ch = c;
        freq = f;
        keys = k;
    }
    void addKey(int k){
        keys.push_back(k);
    }
    void print(){
        cout << ch << " " << freq << " ";
        for (int i = 0; i < keys.size(); i++){
            cout << keys[i] << " ";
        }
        cout << "\n";
    }
    void incPos(){
        pos++;
    }
};

class ciphermap{
public:
    vector<key> theMap;
    ciphermap(int i){
        if(i == 1){
        vector<key> temp;
        vector<int> t = {56, 91, 2, 24, 3, 19, 37, 48, 22, 67, 30, 53, 42, 15, 85, 38, 88, 71, 8};
        key k(' ', 19, t);
        temp.push_back(k);
        t = {17, 75, 35, 70, 13, 49, 54};
        k.rewrite('a', 7, t);
        temp.push_back(k);
        t = {97};
        k.rewrite('b', 1, t);
        temp.push_back(k);
        t = {76, 16};
        k.rewrite('c', 2, t);
        temp.push_back(k);
        t = {28, 73, 12, 43};
        k.rewrite('d', 4, t);
        temp.push_back(k);
        t = {59, 103, 31, 87, 39, 99, 96, 58, 86, 60};
        k.rewrite('e', 10, t);
        temp.push_back(k);
        t = {0, 33};
        k.rewrite('f', 2, t);
        temp.push_back(k);
        t = {27, 62};
        k.rewrite('g', 2, t);
        temp.push_back(k);
        t = {14, 69, 34, 80, 93};
        k.rewrite('h', 5, t);
        temp.push_back(k);
        t = {72, 45, 1, 50, 100, 18};
        k.rewrite('i', 6, t);
        temp.push_back(k);
        t = {81};
        k.rewrite('j', 1, t);
        temp.push_back(k);
        t = {82};
        k.rewrite('k', 1, t);
        temp.push_back(k);
        t = {11,44,10};
        k.rewrite('l', 2, t);
        temp.push_back(k);
        t = {101,104};
        k.rewrite('m', 2, t);
        temp.push_back(k);
        t = {57,40,94,6,36,23};
        k.rewrite('n', 6, t);
        temp.push_back(k);
        t = {102,32,98,25,89,4};
        k.rewrite('o', 6, t);
        temp.push_back(k);
        t = {63, 74};
        k.rewrite('p', 2, t);
        temp.push_back(k);
        t = {47};
        k.rewrite('q', 1, t);
        temp.push_back(k);
        t = {5,64,78,92,20};
        k.rewrite('r', 5, t);
        temp.push_back(k);
        t = {65,51,61,77,66};
        k.rewrite('s', 5, t);
        temp.push_back(k);
        t = {9,83,21,95,90,52,84};
        k.rewrite('t', 7, t);
        temp.push_back(k);
        t = {68,26};
        k.rewrite('u', 2, t);
        temp.push_back(k);
        t = {105};
        k.rewrite('v', 1, t);
        temp.push_back(k);
        t = {29,41};
        k.rewrite('w', 2, t);
        temp.push_back(k);
        t = {55};
        k.rewrite('x', 1, t);
        temp.push_back(k);
        t = {79,46};
        k.rewrite('y', 2, t);
        temp.push_back(k);
        t = {7};
        k.rewrite('z', 1, t);
        temp.push_back(k);
        theMap = temp;
        }
        if (i == 2){
            vector<key> temp;
            vector<int> t = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
            key k(' ', 19, t);
            temp.push_back(k);
            t = {19,20,21,22,23,24,25};
            k.rewrite('a', 7, t);
            temp.push_back(k);
            t = {26};
            k.rewrite('b', 1, t);
            temp.push_back(k);
            t = {27,28};
            k.rewrite('c', 2, t);
            temp.push_back(k);
            t = {29,30,31,32};
            k.rewrite('d', 4, t);
            temp.push_back(k);
            t = {33,34,35,36,37,38,39,40,41,42};
            k.rewrite('e', 10, t);
            temp.push_back(k);
            t = {43,44};
            k.rewrite('f', 2, t);
            temp.push_back(k);
            t = {45,46};
            k.rewrite('g', 2, t);
            temp.push_back(k);
            t = {47,48,49,50,51};
            k.rewrite('h', 5, t);
            temp.push_back(k);
            t = {52,53,54,55,56,57};
            k.rewrite('i', 6, t);
            temp.push_back(k);
            t = {58};
            k.rewrite('j', 1, t);
            temp.push_back(k);
            t = {59};
            k.rewrite('k', 1, t);
            temp.push_back(k);
            t = {60,61,62};
            k.rewrite('l', 3, t);
            temp.push_back(k);
            t = {63,64};
            k.rewrite('m', 2, t);
            temp.push_back(k);
            t = {65,66,67,68,69,70};
            k.rewrite('n', 6, t);
            temp.push_back(k);
            t = {71,72,73,74,75,76};
            k.rewrite('o', 6, t);
            temp.push_back(k);
            t = {77,78};
            k.rewrite('p', 2, t);
            temp.push_back(k);
            t = {79};
            k.rewrite('q', 1, t);
            temp.push_back(k);
            t = {80,81,82,83,84};
            k.rewrite('r', 5, t);
            temp.push_back(k);
            t = {85,86,87,88,89};
            k.rewrite('s', 5, t);
            temp.push_back(k);
            t = {90,91,92,93,94,95,96};
            k.rewrite('t', 7, t);
            temp.push_back(k);
            t = {97,98};
            k.rewrite('u', 2, t);
            temp.push_back(k);
            t = {99};
            k.rewrite('v', 1, t);
            temp.push_back(k);
            t = {100,101};
            k.rewrite('w', 2, t);
            temp.push_back(k);
            t = {102};
            k.rewrite('x', 1, t);
            temp.push_back(k);
            t = {103,104};
            k.rewrite('y', 2, t);
            temp.push_back(k);
            t = {105};
            k.rewrite('z', 1, t);
            temp.push_back(k);
            theMap = temp;
        }
    }
    int findKey(int k){
        for (int i = 0; i < theMap.size(); i++){
            for(int j = 0; j < theMap[i].keys.size(); j++){
                if (theMap[i].keys[j] == k){
                    return i;
                }
            }
        }
        return -1;
    }
    int findKeyPos(int k){
        for (int i = 0; i < theMap.size(); i++){
            for(int j = 0; j < theMap[i].keys.size(); j++){
                if (theMap[i].keys[j] == k){
                    return j;
                }
            }
        }
        return -1;
    }
    int findChar(char c){
        for (int i = 0; i < theMap.size(); i++){
            if (theMap[i].ch == c){
                return i;
            }
        }
        return -1;
    }
    int replaceKey(char c, int k){
        int first = findChar(c);
        int sec = findKey(k);
        if (first == sec) return 0;
        if (theMap[first].pos > theMap[first].keys.size() - 1) return -1;
        theMap[sec].keys[findKeyPos(k)] = theMap[first].keys[theMap[first].pos];
        theMap[first].keys[theMap[first].pos] = k;
        theMap[first].incPos();
        return 0;
    }
};

string decrypt(vector<string> dict, ciphermap guessmap, vector<int> ciphertext){
    bool correct = false;
    int asw = -1;
    ciphermap testerMap = guessmap;
    for (int i = 0 ; i < dict.size(); i++){
        correct = true;
        vector<char> tester(dict[i].begin(), dict[i].end());
        for (int j = 0; j < 400; j++){
            if (testerMap.replaceKey(tester[j], ciphertext[j]) == -1) {
                cout << "text " << i << "failed lol " << endl;
                correct = false;
                testerMap = guessmap;
                break;
            }
        }
        
        if (correct) {
            asw = i;
            break;
        }
    }
    if (asw == -1) return "FAIL";
    return dict[asw];
}

string decryptTwo(vector<string> dict, ciphermap guessmap, vector<int> ciphertext){
    string guess = "";
    bool correct = false;
    int asw = 0;
    ciphermap testerMap = guessmap;
    for (int i = 0 ; i < dict.size(); i++){
        correct = true;
        vector<char> tester(dict[i].begin(), dict[i].end());
        for (int j = 0; j < 150; j++){
            if (testerMap.replaceKey(tester[j], ciphertext[j]) == -1) {
                correct = false;
                testerMap = guessmap;
                break;
            }
        }
        
        if (correct) {
            asw = i;
        }
    }
    return dict[asw];
}




int main() {
    
    vector<string> dictonary = {
            "rereads predestines equippers cavitation bimolecular lucubrations cabin bettas quiverer prussians cosigner dressier bended dethronement inveigled davenport establish ganges rebroadcast supered bastiles willable abetted motionlessness demonic flatter bunyan securely tippiest tongue aw cotyledonal roomettes underlies miffs inducement overintellectually fertilize spasmodic bacchanal birdbrains decoct snakebite galliard boson headmistress unextended provence weakling pirana fiend lairds argils comma",
            "trawling responsiveness tastiest pulsed restamps telescoping pneuma lampoonist divas theosophists pustules checkrowed compactor conditionals envy hairball footslogs wasteful conjures deadfall stagnantly procure barked balmier bowery vagary beaten capitalized undersized towpath envisages thermoplastic rationalizers professions workbench underarm trudger icicled incisive oilbirds citrins chambrays ungainliness weazands prehardened dims determinants fishskin cleanable henceforward misarranges fine",
        "dean iller playbooks resource anesthetic credibilities nonplus tzetzes incursions stooged envelopments girdling risibility thrum repeaters catheterizing misbestowed cursing malingerers ensconces lippiest accost superannuate slush opinionated rememberer councils mishandling drivels juryless slashers tangent roistering scathing apprenticing fleabite sault achier quantize registrable nobbler sheaf natantly kashmirs dittoes scanned emissivity iodize dually refunded portliest setbacks eureka needines",
        "dipped ligatured cannier cohabitation cuddling coiffeuses pursuance roper eternizes nullo framable paddlings femur bebop demonstrational tuberculoid theocracy women reappraise oblongatae aphasias loftiness consumptive lip neurasthenically dutchmen grift discredited resourcefulness malfeasants swallowed jogger sayable lewder editorials demimondaine tzaritza arrogations wish indisputable reproduces hygrometries gamuts alight borderlines draggle reconsolidated anemometer rowels staggerers grands nu",
        "mammate punners octette asylum nonclinically trotters slant collocation cardiology enchants ledge deregulated bottommost capsulate biotechnologies subtended cloddiest training joneses catafalque fieldmice hostels affect shrimper differentiations metacarpus amebas sweeter shiatsu oncoming tubeless menu professing apostatizing moreover eumorphic casked euphemistically programmability campaniles chickpea inactivates crossing defoggers reassures tableland doze reassembled striate precocious noncomba"
    };
    
    ciphermap guessmap(2);
    
    
    string ciphertext;
    int timelimit;
    int test;
    bool running = true;
    while (running == true){
        cout << " Enter your ciphertext: " << endl;
        cin >> ciphertext;
        vector<int> tokens = split(ciphertext, ',');
        cout << "What test are we running, Enter 1 or 2: " << endl;
        cin >> test;
        cout << "How many minutes is our limit? Enter an int: "<< endl;
        cin >> timelimit;
        if (test == 1){
            string guess = decrypt(dictonary, guessmap, tokens);
            cout << "My plaintext guess would be: " << guess << endl;
        }
        if (test == 2){
            cout << "test two doesn't work" << endl;
        }
        cout << "Would you like to run another test? Enter YES or NO: " << endl;
        cin >> ciphertext;
        if (ciphertext == "NO") {
            running = false;
        }
    }
    
    
    
    
}
