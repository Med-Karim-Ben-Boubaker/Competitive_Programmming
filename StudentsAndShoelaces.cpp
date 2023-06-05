#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n; cin >> m;
    vector<vector<bool>> adjMat(n+1, vector<bool> (n+1, false));
    int source, destination;
    for (int i=0; i<m; i++){
        cin >> source;
        cin >> destination;
        adjMat[source][destination] = true;
        adjMat[destination][source] = true;
    }

    vector<vector<int>> group;
    group.push_back({0, 0});
    int i, j;
    int result;
    int relationCounter;
    int studentIndex;
    int destinationIndex;

    i = j = 1;
    result = 0;
    while(!(group.empty())){
        group.clear();
        for(i = 1; i<=n; i++){
            relationCounter = 0;
            studentIndex = 0;
            destinationIndex = 0;

            for(j = 1; j<=n; j++){
                if(adjMat[i][j] == true){
                    relationCounter++;
                    studentIndex = i;
                    destinationIndex = j;
                }
            }

            if(relationCounter == 1){
                group.push_back({studentIndex, destinationIndex});
            }
        }
        result++;
        for(int k = 0; k<group.size(); k++){
            adjMat[group[k][0]][group[k][1]] = false;
            adjMat[group[k][1]][group[k][0]] = false;
        }
    }

    cout << result-1;


}