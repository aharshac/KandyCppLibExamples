#include <iostream>
#include "kandy/sms.hpp"

using namespace std;
using namespace kandy;


/* Kandy authentication data */
string domain_api_key = "";
string domain_api_secret = "";
string user_id = "";	// Kandy username (not full email address), i.e., "user1" and not "user1@temp.kandy.io"

/* SMS data */
string source = "";		// SMS sender, phone number in international format, i.e., +12345678
string destination = "";	// SMS recipient, phone number in international format, i.e., +12345678
string message = "";


int main() {
    try {
	string user_access_token, device_id;	// Kandy auth result, passed by reference on success

	cout << "Kandy C++ SMS Library" << endl;
	cout << "Initialising SMS Sender" << endl;

	sms sender = sms(domain_api_key, domain_api_secret, user_id, user_access_token, device_id);
	
	if (user_access_token.empty() or device_id.empty()) {
		cout << "Could not initialise SMS Sender" << endl;
		return 1;
	}

	cout << "Initialiisation Success" << endl;
	cout << "User Access Token: " + user_access_token << endl;
	cout << "Device ID: " + device_id << endl;


	bool sent = sender.send(source, destination, message);
	cout << (sent ? "SMS sent successfully!" : "SMS not sent!") << endl;
    } catch (exception &e) {
    	cout << e.what() << endl;
    }    

    return 0;
}
