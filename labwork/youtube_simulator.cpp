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
            for (string videoTitle : PublishedVideoTitles) {
                cout << videoTitle << endl;
            }
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

int main() {

    cout << "YouTube Channel creation Simulator (CLI Version)" << endl;
    YoutubeChannel ytChannel("Kicking it with Vince", "Vince Churchill");

    cout << "Channel Successfully created" << endl << "Add a video title: ";
    string title;
    getline(cin,title);
    ytChannel.PublishVideo(title);
    ytChannel.unSubscribe();
    ytChannel.GetInfo();

    for (int i = 0; i < 20; i++) {
        ytChannel.Subscribe();
    }
    ytChannel.GetInfo();
    return 0;
}