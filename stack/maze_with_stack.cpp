#include <iostream>
#include <set>
#include <vector>
#include <cstdlib>

using namespace std;

template<typename T>


void print_all(const T&data) {
	for(const auto&x:data)
		cout << x << " ";
	cout << endl;
}

struct point {
	int x;
	int y;
};

struct status {
	point pt;
	int direction;
};

const int d = 4;

int main() {
	const int m = 5;
	const int n = 7;
	char unvisited = '0';
	char visited = 'V';
	char maze[m][n] = {
		{'*', '*', '*', '*', '*', '*', '*'},
        {'*', '0', '*', '0', '0', '0', '*'},
        {'*', '0', '*', '0', '*', '0', '*'},
        {'*', '0', '0', '0', '*', '0', '*'},
        {'*', '*', '*', '*', '*', '*', '*'}
	};
	
	const point delta[d] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
	point source = {1, 1};
	point destination = {3, 5};
	vector<status> p;
	p.reserve(m * n);
	p.push_back({source, 0});
	maze[source.x][source.y] = visited;
	while(!p.empty())
		if(p.back().direction < d) {
			point next = {
				p.back().pt.x + delta[p.back().direction].x,
				p.back().pt.y + delta[p.back().direction].y
			};
			++p.back().direction;
			if(maze[next.x][next.y] == unvisited) {
				maze[next.x][next.y ] = visited;
				p.push_back({next, 0});
				if(next.x == destination.x && next.y == destination.y)
				break;
			}
		}
		else p.pop_back();
	for(const auto& c:p)
		cout << "(" << c.pt.x << "," << c.pt.y << ")" << endl;

    system("pause");
    return 0;
} 
/*path:
    (1,1)
	(2,1)
	(3,1)
	(3,2)
	(3,3)
	(2,3)
	(1,3)
	(1,4)
	(1,5)
	(2,5)
	(3,5)
*/
