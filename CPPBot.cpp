// CPPBot.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <future>
#include <thread>
#include <chrono>
#include "corefunc.h"
#include "userfunc.h"
#include <string>
#include <unistd.h>
#include <stdint.h>
#include "json.hpp"
#include "proton/rtparam.hpp"
#include "HTTPRequest.hpp"

using json = nlohmann::json;
using namespace std;

vector<GrowtopiaBot> bots;

GrowtopiaBot bot = { "", "", "", -1 };

int main() {
	//Auto parser soon.
	init();
	string gid,gps,em,ip;
	int port;
	cout << " [ GrowTopia Create ID Script By DarkSec! ] " << endl;
	cout << " [ VERSION 3.84 -> GROWTOPIA MOKAD YA GES YA ] \n\n\n" << endl;
	cout << " Feature On This Script:\n >> Custom GrowId\n >> Custom PassWord\n >> Custom Version GT\n >> Ga Perlu Set Port Untuk Sementara Ini :0 " << endl;
	cout << "=================================================================================================================================\n\n" << endl;
	cout << " This Script Made By DarkSec And Helped By TzyGt " << endl;
	cout << " This Script Is Free! " << endl;
	cout << " If Any Question You Can Chat Me On WhatsApp: 0881025693060 (DarkSec~) " << endl;
	cout << " Expire For This Script: This Is Permanent, No Expire, Maybe I Will Update Soon :) \n\n" << endl;
	cout << " Input Custom GrowID: " << endl;
	getline(cin, gid);
	cout << " Input Custom Password: " << endl;
	getline(cin, gps);
	cout << " Input Custom Gmail: " << endl;
	getline(cin, em);
	
	Growid_acc = gid;
	Password_acc = gps;
	Gmail_acc = em;
	
        bot.SERVER_HOST = "213.179.209.168";
        bot.SERVER_PORT = 17253;

	bot.userInit();
	bots.push_back(bot);

	while (true) {
		bot.eventLoop();
	}
}
