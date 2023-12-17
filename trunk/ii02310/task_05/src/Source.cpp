
#include "Header.h"

int main() {
	ifstream inp("input.txt");

	if (inp.is_open()) {
		int numV;
		inp >> numV;
		Graph g(numV);
		for (;!inp.eof();) {
			int a, b;
			inp >> a >> b;
			g.addEdge(a, b);
		}
		vector<int> n_comps;
		for (int i = 0; i < numV; i++) {
			n_comps.push_back(g.conCompDFS_strong(i));
		}
		int max_n_comp = *max_element(n_comps.begin(), n_comps.end());
		int index = std::distance(n_comps.begin(), std::find(n_comps.begin(), n_comps.end(), max_n_comp));

		vector<vector<int>> comps(max_n_comp);
		std::cout << "count = " << max_n_comp << std::endl;
		g.conCompDFS_strong(comps, index);
		for (int i = 0; i < max_n_comp; i++)
		{
			std::cout << "Component " << i + 1 << ": ";
			for (int j = 0; j < comps[i].size(); j++)
			{
				std::cout << comps[i][j] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << max_n_comp;
	}
	else cout << "file not found";
}