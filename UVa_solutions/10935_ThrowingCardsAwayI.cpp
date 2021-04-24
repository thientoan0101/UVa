#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	while (cin >> n) {
		if (n == 0) break;
		vector<int> dis;
		queue<int>card;
		
		for (int i = 1; i <= n; i++) {
			card.push(i);
		}
		
		while (card.size() != 1) {
			int temp = card.front();
			dis.push_back(temp);
			card.pop();

			temp = card.front();
			card.pop();
			card.push(temp);
		}

		
		if (dis.size() > 0) {
			cout << "Discarded cards: ";
			for (int i = 0; i < dis.size() - 1; i++) {
				cout << dis[i] << ", ";
			}
			if (dis.size() > 0) {
				cout << dis[dis.size() - 1] << endl;
			}
		}
		else {
			cout << "Discarded cards:" << endl;
		}
		cout << "Remaining card: " << card.front() << endl;
	}


	return 0;
}