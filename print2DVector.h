//Shane Tachick
//function to print the contents of an [m x n] matrix with a newline above and below

void printVector(const vector <vector <int>> mXn, int m, int n)
{
	cout << endl;
	for (auto i = 0; i < m; ++i)
	{
		for (auto j = 0; j < n; ++j)
		{
			cout << mXn[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}