//
//  main.cpp
//  AdapterPattern
//
//  Created by nmi on 2018/8/6.
//  Copyright © 2018 nmi. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class IPlayer
{
public:
    virtual void play() = 0;
};

class OldPlayer
{
    string _song;
public:
    OldPlayer(string song):_song(song){}
    void start(int volumn)
    {
        cout << "Song:" << _song << " is being playing" << endl;
    }
};

class Adapter: public IPlayer, private OldPlayer
{
    int _volume;
public:
    Adapter(string song, int volume):OldPlayer(song), _volume(volume){}
    void play()
    {
        start(100);
        cout << "Adapter is playing" << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Adapter *adapter = new Adapter("Mayday", 12);
    adapter->play();
    return 0;
}
