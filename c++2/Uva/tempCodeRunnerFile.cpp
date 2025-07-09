
    while (!reg.empty()) {
        pair<int, int> topElement = reg.top();
        cout << "Valor: (" << topElement.first << ", " << topElement.second << ")" << endl;
        reg.pop();
    }