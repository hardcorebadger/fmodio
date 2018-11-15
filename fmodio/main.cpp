//
//  main.cpp
//  fmodio
//
//  Created by Jake Trefethen on 11/14/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include <iostream>
#include "AudioEngine.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    // /Users/trefethen/Documents/unity/colt45/Assets/LilSumn/Sound/interface_Main_Wood_Wood_05.wav
    CAudioEngine engine;
    engine.Init();
    std::cout << "Fmodio Initialized!\n";
    engine.LoadSound("/Users/trefethen/Documents/unity/colt45/Assets/LilSumn/Sound/interface_Main_Wood_Wood_05.wav");
    engine.PlaySound("/Users/trefethen/Documents/unity/colt45/Assets/LilSumn/Sound/interface_Main_Wood_Wood_05.wav");
    return 0;
}
