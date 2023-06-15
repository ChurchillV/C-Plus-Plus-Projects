#include <iostream>
#include <list>
#include <string>
using namespace std;

class YoutubeChannel {
    private: 
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;

    public:
        YoutubeChannel(string name, string ownername) {
            Name = name;
            OwnerName = ownername;
            SubscriberCount = 0;
        }

        void GetInfo() {
            cout << endl << "Name: " << Name << endl;
            cout << "Owner Name: " << OwnerName << endl;
            cout << "Number of Subscribers: " << SubscriberCount << endl;
            cout << "Videos: " << endl;
            if (PublishedVideoTitles.size() != 0) {
                for (string videoTitle : PublishedVideoTitles) {
                cout << videoTitle << endl;
            }}
            else cout << "No Videos Yet" << endl;
        } 

        void Subscribe() {
            SubscriberCount += 1;
            cout << endl << "New Subscriber" << endl;
        }

        void unSubscribe() {
            if (SubscriberCount != 0)  {
            SubscriberCount -= 1;
            cout << "Unsubscribed" << endl;
            }
            else {
                cout << endl << "Channel has 0 Subscribers" << endl;
            }
        }

        void setName(string input) {
            Name = input;
        }

        void showName() {
            cout << "Channel name: " << Name << endl;
        }

        void PublishVideo(string input) {
            PublishedVideoTitles.push_front(input);
        }
};

YoutubeChannel channelList[10];

int main() {
    cout << "YouTube Channel creation Simulator (CLI Version)" << endl;
    bool running = false;
    string channelName, ownerName, videoTitle;
    int channelCount = 0;
    char option;
    do {
        cout << "1. New Channel" << endl;
        cout << "2. Check Channel Details" << endl;
        cout << "Option: " << endl;
        cin >> option;
        cin.ignore();
        switch (option)
        {
        case '1':
        {
            cout << "Enter Channel name: " << endl;
            getline(cin, channelName);
            cout << "Channel Owner: " << endl;
            getline(cin, ownerName);
            cout << "Creating Channel..." << endl;
            YoutubeChannel ytChannel(channelName, ownerName);
            cout << "Channel Successfully created!" << endl;
            ytChannel.GetInfo();
            cout << "Channel Successfully created" << endl << "Add your first video title: ";
            string title;
            getline(cin,title);
            ytChannel.PublishVideo(title);
            ytChannel.unSubscribe();
            cout << "Adding your first 20 subs" << endl;
            for (int i = 0; i < 20; i++) {
                ytChannel.Subscribe();
            }
            ytChannel.GetInfo();
            channelList[channelCount] = ytChannel;
            channelCount++;
            break;
        }

        case '2':
            cout << "Functionality not ready";
            break;

        default:
            break;
        }
    } while(running);
    return 0;
}