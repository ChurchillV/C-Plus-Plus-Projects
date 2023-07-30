#include <iostream>
#include <string>
using namespace std;

class YouTubeChannel {
    public:
        string Name;
        int SubscribersCount;

        YouTubeChannel(string name, int subscribercount) {
            Name = name;
            SubscribersCount = subscribercount;
        }

        YouTubeChannel() {}

        friend ostream& operator<<(ostream& output, YouTubeChannel const yt) {
            output << "Channel Name: " << yt.Name 
                   << "\nSubsriber Count: " << yt.SubscribersCount;
            return output;
        }

        friend istream& operator>>(istream& input, YouTubeChannel& yt) {
            cout << "\n Channel Name: ";
            input >> yt.Name;
            cout << "\nSubscriber Count: ";
            input >> yt.SubscribersCount;
            return input;
        }
};

int main() {
    YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
    YouTubeChannel yt2;
    cout << yt1;
    cin >> yt2;
    cout << yt2;
    return 0;
}