#include <iostream>
#include "kandy/sms.hpp"

using namespace std;
using namespace kandy;

int main() {
	try {
		string user_access_token, device_id;

		cout << "Kandy C++ SMS Library" << endl;
		cout << "Initialising SMS Sender" << endl;

       	sms sender = sms("<domain_api_key>", "<domain_api_secret>", "<user_id>", user_access_token, device_id);
		
		if (user_access_token.empty() or device_id.empty()) {
			cout << "Could not initialise SMS Sender" << endl;
			return 1;
		}

		cout << "Initialiisation Success" << endl;
		cout << "User Access Token: " + user_access_token << endl;
		cout << "Device ID: " + device_id << endl;


		bool sent = sender.send("<source>", "<destination>", "<message>");
		cout << (sent ? "SMS sent successfully!" : "SMS not sent!") << endl;
    } catch (exception &e) {
    	cout << e.what() << endl;
    }    

    return 0;
}
