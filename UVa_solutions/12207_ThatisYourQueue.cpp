#include <iostream>
#include <vector>
#include <deque>
#include <string>
using namespace std;



int main()
{
	char w;
	int p, c, t;
	
	int stt = 1;

	while (cin >> p >> c) {
		if (p == 0 && c == 0) return 0;
		
		
			cout << "Case " << stt << ":" << endl;
			int n = min(p, c);
			deque<int> q;

			for (int i = 1; i <= n; i++) {
				q.push_back(i);
			}

			for (int i = 0; i < c; i++) {
				cin >> w;
				if (w == 'E') {
					cin >> t;

					for (deque<int>::iterator iter = q.begin(); iter != q.end(); iter++) {
						if (*iter == t) {
							q.erase(iter);
							break;
						}
					}
					q.push_front(t);
				}
				else {
					int temp = q.front();
					q.pop_front();
					q.push_back(temp);
					cout << temp << endl;
				}
			}
		
		stt++;
	}

	return 0;
}