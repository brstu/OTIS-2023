#include <iostream>
#include <fstream>
#include <vector>
#include "..\Graph_lib\Header.h";

using namespace std;

int main()
{
	string str;
	cout << "Enter file's name: ";
	cin >> str;
	ifstream fin(str);
	int vertexCount, edgesCount;
	fin >> vertexCount >> edgesCount;

	int** matrix = new int* [vertexCount];//ìàòðèöà
	for (int i = 0; i < vertexCount; i++)//ìàòðèöà
		matrix[i] = new int[vertexCount];//ìàòðèöà
	vector<bool> used(vertexCount);
	int res;//êîëè÷åñòâî êîìïîíåíò ñâÿçíîñòè 
	int* path = new int[vertexCount];//ïóòü äëÿ öèêëîâ
	int* f = new int[vertexCount];//ïîñåù¸ííûå âåðøèíû
			//menu
	int go;
	do
	{
		cout << "1. Fill Matrix\n";
		cout << "2. Paint Matrix\n";
		cout << "\nlab1\n3. bfs\n";
		cout << "4. dfs\n";
		cout << "\nlab2\n5. Gamilton\n";
		cout << "6. Euler\n";
		cout << "\nlab3\n7. Dijkstra\n";
		cout << "8. Floyd\n";
		cout << "\nlab5\n9. Prim\n";
		cout << "10.Kruskal\n";
		cout << "\nlab4\n11. Kali\n";
		cout << "12. Permutation\n";
		cout << "\nlab6\n13. Strong connectivity\n";
		cout << "14.Biconnected Components\n";
		cout << "0. End\n";
		cout << "Choise: ";
		cin >> go;
		switch (go)
		{
			case 1://Fill
				system("cls");
				Fill_Matrix(matrix, vertexCount, edgesCount, str);
				break;

			case 2://Paint
				system("cls");
				Paint_Matrix(matrix, vertexCount);
				break;

			case 3://bfs
				system("cls");
				res = 0;
				for (int i = 0; i < vertexCount; i++)
					if (!used[i])
					{
						res++;
						bfs(matrix, vertexCount, i, used);
					}
				cout << endl << "Number of connectivity components: " << res << endl;
				break;

			case 4://dfs
				system("cls");
				res = 0;
				for (int i = 0; i < vertexCount; i++)
					if (!used[i])
					{
						res++;
						dfs(matrix, vertexCount, i, used);
					}
				cout << endl << "Number of connectivity components: " << res << endl;
				break;

			case 5://Gamilton
				system("cls");
				int v0;
				cout << "Enter firts vertex: ";
				cin >> v0;
				v0--;
				for (int i = 0; i < vertexCount; i++)
					f[i] = -1;
				f[v0] = v0;
				path[0] = v0;
				if (Gamilton(matrix, path, f, vertexCount, 1, v0))
				{
					Print_Path(path, vertexCount);
					cout << endl;
				}
				else cout << "No results\n";
				break;
				
			case 6://Euler
				system("cls");
				//ïðîâåðêà êîìïîíåíò ñâÿçíîñòè 
				if ( res > 1)
					cout << "Wrong\n";
				else
				{
					//ïðîâåðêà ñòåïåíåé âõîäà
					int check = 0;
					int buf;
					for (int i = 0; i < vertexCount; i++)
					{
						buf = 0;
						for (int j = 0; j < vertexCount; j++)
							buf += matrix[i][j];
						if (buf % 2)
							check++;
					}
					if (check)
						cout << "Wrong\n";
					else
					{

						vector<int>path;
						Euler(matrix, path, vertexCount);
						for (int i = 1; i < path.size(); i++)
							cout << path[i] + 1 << " ";
						cout << endl;
						break;
					}
				}

			case 7://Äåéêñòðà
				system("cls");
				Dijkstra(matrix,vertexCount);
				break;

			case 8://Ôëîéä
				system("cls");
				Floyd(matrix, vertexCount);
				break;

			case 9:
				system("cls");
				Prim(matrix, vertexCount);
				break;

			case 10:
				system("cls");
				main_kruskal(matrix,vertexCount, edgesCount,str);
				break;

			case 11:
				system("cls");
				Kali();
				break
					;
			case 12:
				system("cls");
				Permutation(str);
				break;

			case 13:
				system("cls");
				StrongConnectedComponents(matrix, vertexCount);
				break;
			case 14:
				system("cls");
				FindArtPointsAndBridges(matrix, vertexCount);
				break;
		}
	} while (go);
	
}
