#include<iostream>
#include<vector>
#include<cmath>
 
#define endl "\n"
#define MAX 100010
using namespace std;
 
int N, M;
int Arr[MAX];
vector<int> SegmentTree;
vector<pair<int, int>> Cmd;
 
void Input()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++) cin >> Arr[i];
    for (int i = 0; i < M; i++)
    {
        int a, b; cin >> a >> b;
        Cmd.push_back(make_pair(a, b));
    }
}
 
int Make_SegmentTree(int Node, int Start, int End)
{
    if (Start == End) return SegmentTree[Node] = Arr[Start];
    
    int Mid = (Start + End) / 2;
    int Left_Result = Make_SegmentTree(Node * 2, Start, Mid);
    int Right_Result = Make_SegmentTree(Node * 2 + 1, Mid + 1, End);
    return SegmentTree[Node] = Left_Result + Right_Result;
}
 
int Query(int Node, int Start, int End, int Left, int Right)
{
    if (Right < Start || Left > End) return 0;
    if (Left <= Start && End <= Right) return SegmentTree[Node];
 
    int Mid = (Start + End) / 2;
    int Left_Result = Query(Node * 2, Start, Mid, Left, Right);
    int Right_Result = Query(Node * 2 + 1, Mid + 1, End, Left, Right);
    return Left_Result + Right_Result;
}
 
void Solution()
{
    int Tree_Height = (int)ceil(log2(N));
    int Tree_Size = 1 << (Tree_Height + 1);
    SegmentTree.resize(Tree_Size);
    Make_SegmentTree(1, 1, N);
 
    for (int i = 0; i < M; i++)
    {
        int Idx = Cmd[i].first;
        int Idx2 = Cmd[i].second;
 
        cout << Query(1, 1, N, Idx, Idx2) << endl;
    }
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}


