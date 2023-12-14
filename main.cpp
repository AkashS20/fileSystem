#include <bits/stdc++.h>
#include "executeCommand.h"

using namespace std;


int main()
{
    FileSystemNode *root = new FileSystemNode(NULL, "");
    root->type = 'd';
    FileSystemNode *pwd = root;
    fileSystemTree(root);
    printInstructions();

    string cmd;
    cout << endl
         << pwd_str(root, pwd) << ">> ";
    while (getline(cin >> ws, cmd))
    {
        executeCommand(root, pwd, cmd);
        cout << endl
             << pwd_str(root, pwd) << ">> ";
    }

    cout << endl;
    return 0;
}