//============================================================================
// Name        :
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector< vector<int> > grid(3, vector<int>(4, 2));

    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	vector< vector<int> > grid(3, vector<int>(4, 7));
//
//	grid[1].push_back(8);
//
//	for(int row=0; row < grid.size(); row++) {
//			for(int col=0; col < grid[row].size(); col++) {
//				cout << grid[row][col] << flush;
//			}
//
//			cout << endl;
//	}
//
//	return 0;
//}
